function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

module.exports = grammar({
  name: "aottgls",

  rules: {
    translation_unit: $ => optional(repeat($._top_level_item)),
    _top_level_item: $ => choice(
      $._literal,
      $.class_type,
      $.primitive_type,
      $.entity_type,
      $.variable_type,
      $.condition,
      $.event_region_declaration,
      $.event_declaration,
      $.extension_call,
      $.random_region_call,
    ),

    boolean_literal: _ => choice("true", "false"),
    number_literal: _ => /-?[0-9]+(.[0-9]+)?/,
    string_literal: _ => seq('"', optional(repeat(/./)), '"'),
    _literal: $ => choice(
      $.boolean_literal,
      $.number_literal,
      $.string_literal,
    ),

    class_type: $ => "Game",
    primitive_type: _ => choice(
      "Int",
      "Bool",
      "String",
      "Float",
    ),
    entity_type: _ => choice(
      "Player",
      "Titan",
    ),
    type: $ => choice($.primitive_type, $.entity_type),
    variable_type: $ => seq(
      "Variable",
      choice(
        $.primitive_type,
        $.entity_type
      ),
    ),
    variable_getter: $ => choice(
      seq($.variable_type, "(", $.variable_getter, ")"),
      $._literal,
    ),

    _equality_expression: _ => seq(
      optional("Not"),
      choice("Equals", "Contains", "StartsWith", "EndsWith"),
    ),
    _inequality_expression: _ => seq(
      choice("Less", "Greater"),
      "Than",
      optional("OrEqual"),
    ),
    condition: $ => seq(
      $.type,
      ".",
      choice($._equality_expression, $._inequality_expression),
      "(", commaSep($.variable_getter), ")",
    ),

    event_region_identifier: $ => choice(
      "OnPlayerEnterRegion",
      "OnPlayerLeaveRegion",
      "OnTitanEnterRegion",
      "OnTitanLeaveRegion",
    ),
    event_region_declaration: $ => seq(
      $.event_region_identifier,
      "[", $.string_literal, "]",
      "(", $.string_literal, ")",
      "{", "}",
    ),
    event_identifier: $ => choice(
      "OnFirstLoad",
      "OnRoundStart",
      "OnUpdate",
      "OnTitanDie",
      "OnPlayerDieByTitan",
      "OnPlayerDieByPlayer",
      "OnChatInput",
    ),
    event_declaration: $ => seq(
      $.event_identifier,
      "(", commaSep($.string_literal), ")",
      "{", "}",
    ),

    // TODO: Should i combine these two? {
    extension_identifier: $ => choice(
      "ConvertToInt",
      "ConvertToBool",
      "ConvertToString",
      "ConvertToFloat",
    ),
    extension_call: $ => seq(
      $.extension_identifier,
      "(", commaSep1($.variable_getter), ")",
    ),

    random_region_identifier: $ => seq(
      "RegionRandom", choice("X", "Y", "Z")
    ),
    random_region_call: $ => seq(
      $.random_region_identifier,
      "(", commaSep1($.variable_getter), ")",
    ),
    // }
  }
});
