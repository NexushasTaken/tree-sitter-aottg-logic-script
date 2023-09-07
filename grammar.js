function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

module.exports = grammar({
  name: "ls",

  rules: {
    source_file: $ => optional(repeat(choice($.event_definition, $.comment))),

    boolean_literal: _ => choice("true", "false"),
    number_literal: _ => /-?[0-9]+(.[0-9]+)?/,
    string_literal: _ => seq('"', optional(repeat(/./)), '"'),
    _literal: $ => field("value", choice(
      $.boolean_literal,
      $.number_literal,
      $.string_literal,
    )),

    comment: $ => /\/\/.*;?/,
    identifier: $ => /[a-zA-Z]+/,

    statement: $ => seq(
      choice(
        $.if_statement,
        $.while_statement,
        $.foreach_statement,
        seq(choice($.expression, $.comment), ";"),
      ),
    ),
    compound_statement: $ => seq(
      "{",
      repeat($.statement),
      "}",
    ),
    parameter_list: $ => seq(
      "(",
      commaSep(choice($.expression, $._literal)),
      ")"
    ),
    event_definition: $ => seq(
      field("identifier", $.identifier),
      field("region_name", optional(seq("[", $.string_literal, "]"))),
      field("parameters", $.parameter_list),
      field("body", $.compound_statement),
    ),
    field_expression: $ => seq(
      field("identifier",
        seq($.identifier, ".")
      ),
      field("field_identifier", $.identifier),
    ),
    expression: $ => seq(
      field("function", choice(
        $.field_expression,
        $.identifier,
      )),
      field("parameters", $.parameter_list),
      field("field_identifier", optional(seq(".", $.expression))),
    ),

    if_statement: $ => seq(
      "If",
      field("condition", alias($.parameter_list, $.condition_clause)),
      optional(";"), // TODO: Fix this
      field("body", $.compound_statement),
    ),
    while_statement: $ => seq(
      "While",
      field("condition", alias($.parameter_list, $.condition_clause)),
      optional(";"), // TODO: Fix this
      field("body", $.compound_statement),
    ),
    foreach_statement: $ => seq(
      choice("ForeachTitan", "ForeachPlayer"),
      "(", field("value", $.string_literal), ")",
      field("body", $.compound_statement),
    ),
  }
});
