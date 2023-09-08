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

    body: $ => seq(
      "{",
      repeat($.statement),
      "}",
    ),
    statement: $ => seq(
      choice($.call_expression, $.comment),
      optional(";"),
      field("body", optional($.body))
    ),

    argument_list: $ => seq(
      "(",
      commaSep(choice($.call_expression, $._literal)),
      ")"
    ),
    event_definition: $ => seq(
      field("identifier", $.identifier),
      optional(seq("[", field("value", $.string_literal), "]")),
      field("arguments", $.argument_list),
      field("body", $.body),
    ),

    method_expression: $ => seq(
      field("type", choice($.call_expression, $.identifier)),
      ".",
      field("method", $.identifier)
    ),
    call_expression: $ => seq(
      field("function",
        choice(
          $.method_expression,
          $.identifier,
        ),
      ),
      field("arguments", $.argument_list),
    ),
  }
});
