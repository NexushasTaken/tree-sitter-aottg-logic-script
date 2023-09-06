#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  sym_number_literal = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_literal_token1 = 5,
  sym_class_type = 6,
  anon_sym_Int = 7,
  anon_sym_Bool = 8,
  anon_sym_String = 9,
  anon_sym_Float = 10,
  anon_sym_Player = 11,
  anon_sym_Titan = 12,
  anon_sym_Variable = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_Not = 16,
  anon_sym_Equals = 17,
  anon_sym_Contains = 18,
  anon_sym_StartsWith = 19,
  anon_sym_EndsWith = 20,
  anon_sym_Less = 21,
  anon_sym_Greater = 22,
  anon_sym_Than = 23,
  anon_sym_OrEqual = 24,
  anon_sym_DOT = 25,
  anon_sym_COMMA = 26,
  anon_sym_OnPlayerEnterRegion = 27,
  anon_sym_OnPlayerLeaveRegion = 28,
  anon_sym_OnTitanEnterRegion = 29,
  anon_sym_OnTitanLeaveRegion = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_OnFirstLoad = 35,
  anon_sym_OnRoundStart = 36,
  anon_sym_OnUpdate = 37,
  anon_sym_OnTitanDie = 38,
  anon_sym_OnPlayerDieByTitan = 39,
  anon_sym_OnPlayerDieByPlayer = 40,
  anon_sym_OnChatInput = 41,
  anon_sym_ConvertToInt = 42,
  anon_sym_ConvertToBool = 43,
  anon_sym_ConvertToString = 44,
  anon_sym_ConvertToFloat = 45,
  anon_sym_RegionRandom = 46,
  anon_sym_X = 47,
  anon_sym_Y = 48,
  anon_sym_Z = 49,
  sym_translation_unit = 50,
  sym__top_level_item = 51,
  sym_boolean_literal = 52,
  sym_string_literal = 53,
  sym__literal = 54,
  sym_primitive_type = 55,
  sym_entity_type = 56,
  sym_type = 57,
  sym_variable_type = 58,
  sym_variable_getter = 59,
  sym__equality_expression = 60,
  sym__inequality_expression = 61,
  sym_condition = 62,
  sym_event_region_identifier = 63,
  sym_event_region_declaration = 64,
  sym_event_identifier = 65,
  sym_event_declaration = 66,
  sym_extension_identifier = 67,
  sym_extension_call = 68,
  sym_random_region_identifier = 69,
  sym_random_region_call = 70,
  aux_sym_translation_unit_repeat1 = 71,
  aux_sym_string_literal_repeat1 = 72,
  aux_sym_condition_repeat1 = 73,
  aux_sym_event_declaration_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_class_type] = "class_type",
  [anon_sym_Int] = "Int",
  [anon_sym_Bool] = "Bool",
  [anon_sym_String] = "String",
  [anon_sym_Float] = "Float",
  [anon_sym_Player] = "Player",
  [anon_sym_Titan] = "Titan",
  [anon_sym_Variable] = "Variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Not] = "Not",
  [anon_sym_Equals] = "Equals",
  [anon_sym_Contains] = "Contains",
  [anon_sym_StartsWith] = "StartsWith",
  [anon_sym_EndsWith] = "EndsWith",
  [anon_sym_Less] = "Less",
  [anon_sym_Greater] = "Greater",
  [anon_sym_Than] = "Than",
  [anon_sym_OrEqual] = "OrEqual",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_OnPlayerEnterRegion] = "OnPlayerEnterRegion",
  [anon_sym_OnPlayerLeaveRegion] = "OnPlayerLeaveRegion",
  [anon_sym_OnTitanEnterRegion] = "OnTitanEnterRegion",
  [anon_sym_OnTitanLeaveRegion] = "OnTitanLeaveRegion",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_OnFirstLoad] = "OnFirstLoad",
  [anon_sym_OnRoundStart] = "OnRoundStart",
  [anon_sym_OnUpdate] = "OnUpdate",
  [anon_sym_OnTitanDie] = "OnTitanDie",
  [anon_sym_OnPlayerDieByTitan] = "OnPlayerDieByTitan",
  [anon_sym_OnPlayerDieByPlayer] = "OnPlayerDieByPlayer",
  [anon_sym_OnChatInput] = "OnChatInput",
  [anon_sym_ConvertToInt] = "ConvertToInt",
  [anon_sym_ConvertToBool] = "ConvertToBool",
  [anon_sym_ConvertToString] = "ConvertToString",
  [anon_sym_ConvertToFloat] = "ConvertToFloat",
  [anon_sym_RegionRandom] = "RegionRandom",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_Z] = "Z",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym__literal] = "_literal",
  [sym_primitive_type] = "primitive_type",
  [sym_entity_type] = "entity_type",
  [sym_type] = "type",
  [sym_variable_type] = "variable_type",
  [sym_variable_getter] = "variable_getter",
  [sym__equality_expression] = "_equality_expression",
  [sym__inequality_expression] = "_inequality_expression",
  [sym_condition] = "condition",
  [sym_event_region_identifier] = "event_region_identifier",
  [sym_event_region_declaration] = "event_region_declaration",
  [sym_event_identifier] = "event_identifier",
  [sym_event_declaration] = "event_declaration",
  [sym_extension_identifier] = "extension_identifier",
  [sym_extension_call] = "extension_call",
  [sym_random_region_identifier] = "random_region_identifier",
  [sym_random_region_call] = "random_region_call",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_condition_repeat1] = "condition_repeat1",
  [aux_sym_event_declaration_repeat1] = "event_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_class_type] = sym_class_type,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Player] = anon_sym_Player,
  [anon_sym_Titan] = anon_sym_Titan,
  [anon_sym_Variable] = anon_sym_Variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Not] = anon_sym_Not,
  [anon_sym_Equals] = anon_sym_Equals,
  [anon_sym_Contains] = anon_sym_Contains,
  [anon_sym_StartsWith] = anon_sym_StartsWith,
  [anon_sym_EndsWith] = anon_sym_EndsWith,
  [anon_sym_Less] = anon_sym_Less,
  [anon_sym_Greater] = anon_sym_Greater,
  [anon_sym_Than] = anon_sym_Than,
  [anon_sym_OrEqual] = anon_sym_OrEqual,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_OnPlayerEnterRegion] = anon_sym_OnPlayerEnterRegion,
  [anon_sym_OnPlayerLeaveRegion] = anon_sym_OnPlayerLeaveRegion,
  [anon_sym_OnTitanEnterRegion] = anon_sym_OnTitanEnterRegion,
  [anon_sym_OnTitanLeaveRegion] = anon_sym_OnTitanLeaveRegion,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_OnFirstLoad] = anon_sym_OnFirstLoad,
  [anon_sym_OnRoundStart] = anon_sym_OnRoundStart,
  [anon_sym_OnUpdate] = anon_sym_OnUpdate,
  [anon_sym_OnTitanDie] = anon_sym_OnTitanDie,
  [anon_sym_OnPlayerDieByTitan] = anon_sym_OnPlayerDieByTitan,
  [anon_sym_OnPlayerDieByPlayer] = anon_sym_OnPlayerDieByPlayer,
  [anon_sym_OnChatInput] = anon_sym_OnChatInput,
  [anon_sym_ConvertToInt] = anon_sym_ConvertToInt,
  [anon_sym_ConvertToBool] = anon_sym_ConvertToBool,
  [anon_sym_ConvertToString] = anon_sym_ConvertToString,
  [anon_sym_ConvertToFloat] = anon_sym_ConvertToFloat,
  [anon_sym_RegionRandom] = anon_sym_RegionRandom,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Z] = anon_sym_Z,
  [sym_translation_unit] = sym_translation_unit,
  [sym__top_level_item] = sym__top_level_item,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__literal] = sym__literal,
  [sym_primitive_type] = sym_primitive_type,
  [sym_entity_type] = sym_entity_type,
  [sym_type] = sym_type,
  [sym_variable_type] = sym_variable_type,
  [sym_variable_getter] = sym_variable_getter,
  [sym__equality_expression] = sym__equality_expression,
  [sym__inequality_expression] = sym__inequality_expression,
  [sym_condition] = sym_condition,
  [sym_event_region_identifier] = sym_event_region_identifier,
  [sym_event_region_declaration] = sym_event_region_declaration,
  [sym_event_identifier] = sym_event_identifier,
  [sym_event_declaration] = sym_event_declaration,
  [sym_extension_identifier] = sym_extension_identifier,
  [sym_extension_call] = sym_extension_call,
  [sym_random_region_identifier] = sym_random_region_identifier,
  [sym_random_region_call] = sym_random_region_call,
  [aux_sym_translation_unit_repeat1] = aux_sym_translation_unit_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_condition_repeat1] = aux_sym_condition_repeat1,
  [aux_sym_event_declaration_repeat1] = aux_sym_event_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_class_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Player] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Titan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_StartsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EndsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Greater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OrEqual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnPlayerEnterRegion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnPlayerLeaveRegion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnTitanEnterRegion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnTitanLeaveRegion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnFirstLoad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnRoundStart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnUpdate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnTitanDie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnPlayerDieByTitan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnPlayerDieByPlayer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnChatInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ConvertToInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ConvertToBool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ConvertToString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ConvertToFloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RegionRandom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_getter] = {
    .visible = true,
    .named = true,
  },
  [sym__equality_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__inequality_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_event_region_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_event_region_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_event_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_extension_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_extension_call] = {
    .visible = true,
    .named = true,
  },
  [sym_random_region_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_random_region_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(189);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead == 'V') ADVANCE(24);
      if (lookahead == 'X') ADVANCE(265);
      if (lookahead == 'Y') ADVANCE(266);
      if (lookahead == 'Z') ADVANCE(267);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == 'B') ADVANCE(210);
      END_STATE();
    case 3:
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == 'P') ADVANCE(112);
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(199);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 18:
      if (lookahead == 'W') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'W') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'q') ADVANCE(207);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 157:
      if (lookahead == 'q') ADVANCE(206);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 208:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 210:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 211:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 212:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class_type);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Player);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Titan);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Variable);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Not);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Equals);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Contains);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_StartsWith);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_EndsWith);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Less);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Greater);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Than);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_OrEqual);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_OnPlayerEnterRegion);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_OnPlayerLeaveRegion);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_OnTitanEnterRegion);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_OnTitanLeaveRegion);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_OnFirstLoad);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_OnRoundStart);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_OnUpdate);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_OnTitanDie);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_OnPlayerDieByTitan);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_OnPlayerDieByPlayer);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_OnChatInput);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ConvertToInt);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_ConvertToBool);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ConvertToString);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ConvertToFloat);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RegionRandom);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_class_type] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Player] = ACTIONS(1),
    [anon_sym_Titan] = ACTIONS(1),
    [anon_sym_Variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Not] = ACTIONS(1),
    [anon_sym_Equals] = ACTIONS(1),
    [anon_sym_Contains] = ACTIONS(1),
    [anon_sym_StartsWith] = ACTIONS(1),
    [anon_sym_EndsWith] = ACTIONS(1),
    [anon_sym_Less] = ACTIONS(1),
    [anon_sym_Greater] = ACTIONS(1),
    [anon_sym_Than] = ACTIONS(1),
    [anon_sym_OrEqual] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_OnPlayerEnterRegion] = ACTIONS(1),
    [anon_sym_OnPlayerLeaveRegion] = ACTIONS(1),
    [anon_sym_OnTitanEnterRegion] = ACTIONS(1),
    [anon_sym_OnTitanLeaveRegion] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_OnFirstLoad] = ACTIONS(1),
    [anon_sym_OnRoundStart] = ACTIONS(1),
    [anon_sym_OnUpdate] = ACTIONS(1),
    [anon_sym_OnTitanDie] = ACTIONS(1),
    [anon_sym_OnPlayerDieByTitan] = ACTIONS(1),
    [anon_sym_OnPlayerDieByPlayer] = ACTIONS(1),
    [anon_sym_OnChatInput] = ACTIONS(1),
    [anon_sym_ConvertToInt] = ACTIONS(1),
    [anon_sym_ConvertToBool] = ACTIONS(1),
    [anon_sym_ConvertToString] = ACTIONS(1),
    [anon_sym_ConvertToFloat] = ACTIONS(1),
    [anon_sym_RegionRandom] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_unit] = STATE(69),
    [sym__top_level_item] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_primitive_type] = STATE(9),
    [sym_entity_type] = STATE(9),
    [sym_type] = STATE(68),
    [sym_variable_type] = STATE(3),
    [sym_condition] = STATE(3),
    [sym_event_region_identifier] = STATE(54),
    [sym_event_region_declaration] = STATE(3),
    [sym_event_identifier] = STATE(59),
    [sym_event_declaration] = STATE(3),
    [sym_extension_identifier] = STATE(58),
    [sym_extension_call] = STATE(3),
    [sym_random_region_identifier] = STATE(53),
    [sym_random_region_call] = STATE(3),
    [aux_sym_translation_unit_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_number_literal] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_class_type] = ACTIONS(7),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Bool] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_Player] = ACTIONS(13),
    [anon_sym_Titan] = ACTIONS(13),
    [anon_sym_Variable] = ACTIONS(15),
    [anon_sym_OnPlayerEnterRegion] = ACTIONS(17),
    [anon_sym_OnPlayerLeaveRegion] = ACTIONS(17),
    [anon_sym_OnTitanEnterRegion] = ACTIONS(17),
    [anon_sym_OnTitanLeaveRegion] = ACTIONS(17),
    [anon_sym_OnFirstLoad] = ACTIONS(19),
    [anon_sym_OnRoundStart] = ACTIONS(19),
    [anon_sym_OnUpdate] = ACTIONS(19),
    [anon_sym_OnTitanDie] = ACTIONS(19),
    [anon_sym_OnPlayerDieByTitan] = ACTIONS(19),
    [anon_sym_OnPlayerDieByPlayer] = ACTIONS(19),
    [anon_sym_OnChatInput] = ACTIONS(19),
    [anon_sym_ConvertToInt] = ACTIONS(21),
    [anon_sym_ConvertToBool] = ACTIONS(21),
    [anon_sym_ConvertToString] = ACTIONS(21),
    [anon_sym_ConvertToFloat] = ACTIONS(21),
    [anon_sym_RegionRandom] = ACTIONS(23),
  },
  [2] = {
    [sym__top_level_item] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_primitive_type] = STATE(9),
    [sym_entity_type] = STATE(9),
    [sym_type] = STATE(68),
    [sym_variable_type] = STATE(2),
    [sym_condition] = STATE(2),
    [sym_event_region_identifier] = STATE(54),
    [sym_event_region_declaration] = STATE(2),
    [sym_event_identifier] = STATE(59),
    [sym_event_declaration] = STATE(2),
    [sym_extension_identifier] = STATE(58),
    [sym_extension_call] = STATE(2),
    [sym_random_region_identifier] = STATE(53),
    [sym_random_region_call] = STATE(2),
    [aux_sym_translation_unit_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_class_type] = ACTIONS(30),
    [anon_sym_Int] = ACTIONS(36),
    [anon_sym_Bool] = ACTIONS(36),
    [anon_sym_String] = ACTIONS(36),
    [anon_sym_Float] = ACTIONS(36),
    [anon_sym_Player] = ACTIONS(39),
    [anon_sym_Titan] = ACTIONS(39),
    [anon_sym_Variable] = ACTIONS(42),
    [anon_sym_OnPlayerEnterRegion] = ACTIONS(45),
    [anon_sym_OnPlayerLeaveRegion] = ACTIONS(45),
    [anon_sym_OnTitanEnterRegion] = ACTIONS(45),
    [anon_sym_OnTitanLeaveRegion] = ACTIONS(45),
    [anon_sym_OnFirstLoad] = ACTIONS(48),
    [anon_sym_OnRoundStart] = ACTIONS(48),
    [anon_sym_OnUpdate] = ACTIONS(48),
    [anon_sym_OnTitanDie] = ACTIONS(48),
    [anon_sym_OnPlayerDieByTitan] = ACTIONS(48),
    [anon_sym_OnPlayerDieByPlayer] = ACTIONS(48),
    [anon_sym_OnChatInput] = ACTIONS(48),
    [anon_sym_ConvertToInt] = ACTIONS(51),
    [anon_sym_ConvertToBool] = ACTIONS(51),
    [anon_sym_ConvertToString] = ACTIONS(51),
    [anon_sym_ConvertToFloat] = ACTIONS(51),
    [anon_sym_RegionRandom] = ACTIONS(54),
  },
  [3] = {
    [sym__top_level_item] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_primitive_type] = STATE(9),
    [sym_entity_type] = STATE(9),
    [sym_type] = STATE(68),
    [sym_variable_type] = STATE(2),
    [sym_condition] = STATE(2),
    [sym_event_region_identifier] = STATE(54),
    [sym_event_region_declaration] = STATE(2),
    [sym_event_identifier] = STATE(59),
    [sym_event_declaration] = STATE(2),
    [sym_extension_identifier] = STATE(58),
    [sym_extension_call] = STATE(2),
    [sym_random_region_identifier] = STATE(53),
    [sym_random_region_call] = STATE(2),
    [aux_sym_translation_unit_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_number_literal] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_class_type] = ACTIONS(59),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Bool] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_Player] = ACTIONS(13),
    [anon_sym_Titan] = ACTIONS(13),
    [anon_sym_Variable] = ACTIONS(15),
    [anon_sym_OnPlayerEnterRegion] = ACTIONS(17),
    [anon_sym_OnPlayerLeaveRegion] = ACTIONS(17),
    [anon_sym_OnTitanEnterRegion] = ACTIONS(17),
    [anon_sym_OnTitanLeaveRegion] = ACTIONS(17),
    [anon_sym_OnFirstLoad] = ACTIONS(19),
    [anon_sym_OnRoundStart] = ACTIONS(19),
    [anon_sym_OnUpdate] = ACTIONS(19),
    [anon_sym_OnTitanDie] = ACTIONS(19),
    [anon_sym_OnPlayerDieByTitan] = ACTIONS(19),
    [anon_sym_OnPlayerDieByPlayer] = ACTIONS(19),
    [anon_sym_OnChatInput] = ACTIONS(19),
    [anon_sym_ConvertToInt] = ACTIONS(21),
    [anon_sym_ConvertToBool] = ACTIONS(21),
    [anon_sym_ConvertToString] = ACTIONS(21),
    [anon_sym_ConvertToFloat] = ACTIONS(21),
    [anon_sym_RegionRandom] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(61), 32,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_RBRACK,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [35] = 1,
    ACTIONS(63), 32,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_RBRACK,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [70] = 1,
    ACTIONS(65), 31,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [104] = 1,
    ACTIONS(67), 31,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [138] = 1,
    ACTIONS(69), 31,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [172] = 2,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(71), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [207] = 1,
    ACTIONS(75), 30,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_LPAREN,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [240] = 1,
    ACTIONS(77), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [272] = 1,
    ACTIONS(79), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [304] = 1,
    ACTIONS(81), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [336] = 1,
    ACTIONS(83), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [368] = 1,
    ACTIONS(85), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [400] = 1,
    ACTIONS(87), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [432] = 1,
    ACTIONS(89), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [464] = 1,
    ACTIONS(91), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [496] = 1,
    ACTIONS(93), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [528] = 1,
    ACTIONS(95), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [560] = 1,
    ACTIONS(97), 29,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_class_type,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
      anon_sym_Player,
      anon_sym_Titan,
      anon_sym_Variable,
      anon_sym_OnPlayerEnterRegion,
      anon_sym_OnPlayerLeaveRegion,
      anon_sym_OnTitanEnterRegion,
      anon_sym_OnTitanLeaveRegion,
      anon_sym_OnFirstLoad,
      anon_sym_OnRoundStart,
      anon_sym_OnUpdate,
      anon_sym_OnTitanDie,
      anon_sym_OnPlayerDieByTitan,
      anon_sym_OnPlayerDieByPlayer,
      anon_sym_OnChatInput,
      anon_sym_ConvertToInt,
      anon_sym_ConvertToBool,
      anon_sym_ConvertToString,
      anon_sym_ConvertToFloat,
      anon_sym_RegionRandom,
  [592] = 8,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_Variable,
    ACTIONS(99), 1,
      sym_number_literal,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_variable_getter,
    STATE(56), 1,
      sym_variable_type,
    ACTIONS(5), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym__literal,
  [620] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_Variable,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(48), 1,
      sym_variable_getter,
    STATE(56), 1,
      sym_variable_type,
    ACTIONS(5), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym__literal,
  [645] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_Variable,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(56), 1,
      sym_variable_type,
    STATE(64), 1,
      sym_variable_getter,
    ACTIONS(5), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym__literal,
  [670] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_Variable,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(40), 1,
      sym_variable_getter,
    STATE(56), 1,
      sym_variable_type,
    ACTIONS(5), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym__literal,
  [695] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_Variable,
    ACTIONS(99), 1,
      sym_number_literal,
    STATE(30), 1,
      sym_variable_getter,
    STATE(56), 1,
      sym_variable_type,
    ACTIONS(5), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym__literal,
  [720] = 4,
    ACTIONS(103), 1,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_Less,
      anon_sym_Greater,
    STATE(70), 2,
      sym__equality_expression,
      sym__inequality_expression,
    ACTIONS(105), 4,
      anon_sym_Equals,
      anon_sym_Contains,
      anon_sym_StartsWith,
      anon_sym_EndsWith,
  [738] = 3,
    ACTIONS(13), 2,
      anon_sym_Player,
      anon_sym_Titan,
    STATE(10), 2,
      sym_primitive_type,
      sym_entity_type,
    ACTIONS(11), 4,
      anon_sym_Int,
      anon_sym_Bool,
      anon_sym_String,
      anon_sym_Float,
  [753] = 1,
    ACTIONS(109), 4,
      anon_sym_Equals,
      anon_sym_Contains,
      anon_sym_StartsWith,
      anon_sym_EndsWith,
  [760] = 3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_condition_repeat1,
  [770] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_condition_repeat1,
  [780] = 3,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_string_literal_token1,
    STATE(32), 1,
      aux_sym_string_literal_repeat1,
  [790] = 1,
    ACTIONS(125), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
  [796] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_condition_repeat1,
  [806] = 3,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_string_literal,
  [816] = 3,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_event_declaration_repeat1,
  [826] = 3,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_event_declaration_repeat1,
  [836] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_condition_repeat1,
  [846] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_condition_repeat1,
  [856] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_condition_repeat1,
  [866] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_condition_repeat1,
  [876] = 3,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_string_literal_token1,
    STATE(32), 1,
      aux_sym_string_literal_repeat1,
  [886] = 3,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_string_literal_token1,
    STATE(42), 1,
      aux_sym_string_literal_repeat1,
  [896] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_event_declaration_repeat1,
  [906] = 1,
    ACTIONS(158), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [911] = 1,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [916] = 2,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string_literal,
  [923] = 1,
    ACTIONS(115), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [928] = 2,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_string_literal,
  [935] = 1,
    ACTIONS(131), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [940] = 2,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_OrEqual,
  [947] = 2,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_string_literal,
  [954] = 1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
  [958] = 1,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
  [962] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
  [966] = 1,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
  [970] = 1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
  [974] = 1,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
  [978] = 1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [982] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [986] = 1,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
  [990] = 1,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
  [994] = 1,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
  [998] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [1002] = 1,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
  [1006] = 1,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
  [1010] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
  [1014] = 1,
    ACTIONS(196), 1,
      anon_sym_DOT,
  [1018] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [1022] = 1,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
  [1026] = 1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [1030] = 1,
    ACTIONS(204), 1,
      anon_sym_Than,
  [1034] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [1038] = 1,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
  [1042] = 1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [1046] = 1,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
  [1050] = 1,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
  [1054] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [1058] = 1,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 368,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 432,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 496,
  [SMALL_STATE(20)] = 528,
  [SMALL_STATE(21)] = 560,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 620,
  [SMALL_STATE(24)] = 645,
  [SMALL_STATE(25)] = 670,
  [SMALL_STATE(26)] = 695,
  [SMALL_STATE(27)] = 720,
  [SMALL_STATE(28)] = 738,
  [SMALL_STATE(29)] = 753,
  [SMALL_STATE(30)] = 760,
  [SMALL_STATE(31)] = 770,
  [SMALL_STATE(32)] = 780,
  [SMALL_STATE(33)] = 790,
  [SMALL_STATE(34)] = 796,
  [SMALL_STATE(35)] = 806,
  [SMALL_STATE(36)] = 816,
  [SMALL_STATE(37)] = 826,
  [SMALL_STATE(38)] = 836,
  [SMALL_STATE(39)] = 846,
  [SMALL_STATE(40)] = 856,
  [SMALL_STATE(41)] = 866,
  [SMALL_STATE(42)] = 876,
  [SMALL_STATE(43)] = 886,
  [SMALL_STATE(44)] = 896,
  [SMALL_STATE(45)] = 906,
  [SMALL_STATE(46)] = 911,
  [SMALL_STATE(47)] = 916,
  [SMALL_STATE(48)] = 923,
  [SMALL_STATE(49)] = 928,
  [SMALL_STATE(50)] = 935,
  [SMALL_STATE(51)] = 940,
  [SMALL_STATE(52)] = 947,
  [SMALL_STATE(53)] = 954,
  [SMALL_STATE(54)] = 958,
  [SMALL_STATE(55)] = 962,
  [SMALL_STATE(56)] = 966,
  [SMALL_STATE(57)] = 970,
  [SMALL_STATE(58)] = 974,
  [SMALL_STATE(59)] = 978,
  [SMALL_STATE(60)] = 982,
  [SMALL_STATE(61)] = 986,
  [SMALL_STATE(62)] = 990,
  [SMALL_STATE(63)] = 994,
  [SMALL_STATE(64)] = 998,
  [SMALL_STATE(65)] = 1002,
  [SMALL_STATE(66)] = 1006,
  [SMALL_STATE(67)] = 1010,
  [SMALL_STATE(68)] = 1014,
  [SMALL_STATE(69)] = 1018,
  [SMALL_STATE(70)] = 1022,
  [SMALL_STATE(71)] = 1026,
  [SMALL_STATE(72)] = 1030,
  [SMALL_STATE(73)] = 1034,
  [SMALL_STATE(74)] = 1038,
  [SMALL_STATE(75)] = 1042,
  [SMALL_STATE(76)] = 1046,
  [SMALL_STATE(77)] = 1050,
  [SMALL_STATE(78)] = 1054,
  [SMALL_STATE(79)] = 1058,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(43),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(28),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(79),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(77),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(75),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_type, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_item, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_random_region_call, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_call, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_random_region_call, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_region_declaration, 9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_call, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_declaration, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2), SHIFT_REPEAT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_declaration_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_declaration_repeat1, 2), SHIFT_REPEAT(47),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_getter, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_getter, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inequality_expression, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inequality_expression, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_random_region_identifier, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_identifier, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_region_identifier, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_aottgls(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
