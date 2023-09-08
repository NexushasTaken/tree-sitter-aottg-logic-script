function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

module.exports = grammar({
  name: "cl",

  rules: {
    source_file: $ => optional(repeat(choice($.event_definition, $.comment))),

    boolean_literal: _ => choice("true", "false"),
    number_literal: _ => /-?[0-9]+(.[0-9]+)?/,
    string_literal: $ => seq(
      '"',
      field(
        "content",
        repeat(alias(token.immediate(prec(1, /[^\\"\n]+/)), $.string_content)),
      ),
      '"',
    ),
    _literal: $ => field("value", choice(
      $.boolean_literal,
      $.number_literal,
      $.string_literal,
    )),



    comment: $ => /\/\/.*;?/,
    identifier: $ => /[a-zA-Z]+/,

    compound_statement: $ => seq(
      "{",
      repeat($.statement),
      "}",
    ),
    statement: $ => seq(
      choice($.call_expression, $.comment),
      optional(";"),
      field("body", optional($.compound_statement))
    ),

    argument_list: $ => seq(
      "(",
      commaSep(choice($.call_expression, $._literal)),
      ")"
    ),
    event_definition: $ => seq(
      field("identifier", $.identifier),
      field("region_name", optional(seq("[", $.string_literal, "]"))),
      field("parameters", $.argument_list),
      field("body", $.compound_statement),
    ),

    field_expression: $ => seq(
      field("argument", choice($.call_expression, $.identifier)),
      ".",
      field("field", $.identifier)
    ),
    call_expression: $ => seq(
      field("function",
        choice(
          $.field_expression,
          $.identifier,
        ),
      ),
      field("arguments", $.argument_list),
    ),
  }
});
