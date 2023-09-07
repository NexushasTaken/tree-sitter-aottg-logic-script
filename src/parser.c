#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  sym_number_literal = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_literal_token1 = 5,
  sym_identifier = 6,
  anon_sym_SEMI = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_DOT = 15,
  anon_sym_If = 16,
  anon_sym_While = 17,
  anon_sym_ForeachTitan = 18,
  anon_sym_ForeachPlayer = 19,
  sym_source_file = 20,
  sym_boolean_literal = 21,
  sym_string_literal = 22,
  sym__literal = 23,
  sym_statement = 24,
  sym_compound_statement = 25,
  sym_parameter_list = 26,
  sym_event_definition = 27,
  sym_field_expression = 28,
  sym_expression = 29,
  sym_if_statement = 30,
  sym_while_statement = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_string_literal_repeat1 = 33,
  aux_sym_compound_statement_repeat1 = 34,
  aux_sym_parameter_list_repeat1 = 35,
  alias_sym_condition_clause = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_If] = "If",
  [anon_sym_While] = "While",
  [anon_sym_ForeachTitan] = "ForeachTitan",
  [anon_sym_ForeachPlayer] = "ForeachPlayer",
  [sym_source_file] = "source_file",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym__literal] = "_literal",
  [sym_statement] = "statement",
  [sym_compound_statement] = "compound_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_event_definition] = "event_definition",
  [sym_field_expression] = "field_expression",
  [sym_expression] = "expression",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_condition_clause] = "condition_clause",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_While] = anon_sym_While,
  [anon_sym_ForeachTitan] = anon_sym_ForeachTitan,
  [anon_sym_ForeachPlayer] = anon_sym_ForeachPlayer,
  [sym_source_file] = sym_source_file,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__literal] = sym__literal,
  [sym_statement] = sym_statement,
  [sym_compound_statement] = sym_compound_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_event_definition] = sym_event_definition,
  [sym_field_expression] = sym_field_expression,
  [sym_expression] = sym_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [alias_sym_condition_clause] = alias_sym_condition_clause,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_While] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForeachTitan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForeachPlayer] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_event_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_condition_clause] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_condition = 2,
  field_field_identifier = 3,
  field_function = 4,
  field_identifier = 5,
  field_parameters = 6,
  field_region_name = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_condition] = "condition",
  [field_field_identifier] = "field_identifier",
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_parameters] = "parameters",
  [field_region_name] = "region_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 6},
  [11] = {.index = 25, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_body, 2},
    {field_identifier, 0},
    {field_parameters, 1},
  [4] =
    {field_function, 0},
    {field_parameters, 1},
  [6] =
    {field_value, 1, .inherited = true},
  [7] =
    {field_field_identifier, 2},
    {field_identifier, 0},
    {field_identifier, 1},
  [10] =
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [12] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_value, 2, .inherited = true},
  [15] =
    {field_field_identifier, 2},
    {field_field_identifier, 3},
    {field_function, 0},
    {field_parameters, 1},
  [19] =
    {field_body, 5},
    {field_identifier, 0},
    {field_parameters, 4},
    {field_region_name, 1},
    {field_region_name, 2},
    {field_region_name, 3},
  [25] =
    {field_body, 2},
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [1] = alias_sym_condition_clause,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_parameter_list, 2,
    sym_parameter_list,
    alias_sym_condition_clause,
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
  [7] = 5,
  [8] = 4,
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
  [49] = 22,
  [50] = 50,
  [51] = 21,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_If);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_While);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ForeachTitan);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ForeachPlayer);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_While] = ACTIONS(1),
    [anon_sym_ForeachTitan] = ACTIONS(1),
    [anon_sym_ForeachPlayer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_event_definition] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym__literal,
    STATE(33), 1,
      sym_expression,
    STATE(44), 1,
      sym_field_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_boolean_literal,
      sym_string_literal,
  [30] = 8,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_If,
    ACTIONS(25), 1,
      anon_sym_While,
    STATE(44), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(19), 2,
      sym_if_statement,
      sym_while_statement,
  [57] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_If,
    ACTIONS(32), 1,
      anon_sym_While,
    STATE(44), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(19), 2,
      sym_if_statement,
      sym_while_statement,
  [84] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_If,
    ACTIONS(32), 1,
      anon_sym_While,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_expression,
    STATE(4), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(19), 2,
      sym_if_statement,
      sym_while_statement,
  [111] = 8,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(40), 1,
      sym__literal,
    STATE(41), 1,
      sym_expression,
    STATE(44), 1,
      sym_field_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_boolean_literal,
      sym_string_literal,
  [138] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_If,
    ACTIONS(32), 1,
      anon_sym_While,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_expression,
    STATE(8), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(19), 2,
      sym_if_statement,
      sym_while_statement,
  [165] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_If,
    ACTIONS(32), 1,
      anon_sym_While,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(19), 2,
      sym_if_statement,
      sym_while_statement,
  [192] = 1,
    ACTIONS(40), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [200] = 1,
    ACTIONS(42), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [208] = 1,
    ACTIONS(44), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [216] = 1,
    ACTIONS(46), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [224] = 1,
    ACTIONS(48), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [232] = 2,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 3,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
  [241] = 2,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 3,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
  [250] = 2,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 3,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
  [259] = 2,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(62), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [268] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [279] = 2,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 3,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
  [288] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(20), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [299] = 2,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 3,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
  [308] = 2,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
  [317] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameter_list_repeat1,
  [327] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_string_literal_token1,
    STATE(24), 1,
      aux_sym_string_literal_repeat1,
  [337] = 1,
    ACTIONS(94), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [343] = 3,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_literal_token1,
    STATE(24), 1,
      aux_sym_string_literal_repeat1,
  [353] = 3,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_literal_token1,
    STATE(26), 1,
      aux_sym_string_literal_repeat1,
  [363] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameter_list_repeat1,
  [373] = 1,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [379] = 3,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_parameter_list,
  [389] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [399] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameter_list_repeat1,
  [409] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_parameter_list_repeat1,
  [419] = 3,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_parameter_list,
  [429] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    STATE(44), 1,
      sym_field_expression,
  [439] = 1,
    ACTIONS(125), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [445] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_parameter_list,
  [452] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_parameter_list,
  [459] = 2,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_string_literal,
  [466] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [471] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [476] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_compound_statement,
  [483] = 1,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [488] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameter_list,
  [495] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_compound_statement,
  [502] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_compound_statement,
  [509] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_compound_statement,
  [516] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [521] = 1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [526] = 2,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
  [533] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [538] = 1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [543] = 1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [548] = 1,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
  [552] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [556] = 1,
    ACTIONS(147), 1,
      sym_identifier,
  [560] = 1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
  [564] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 317,
  [SMALL_STATE(24)] = 327,
  [SMALL_STATE(25)] = 337,
  [SMALL_STATE(26)] = 343,
  [SMALL_STATE(27)] = 353,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 373,
  [SMALL_STATE(30)] = 379,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 399,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 419,
  [SMALL_STATE(35)] = 429,
  [SMALL_STATE(36)] = 439,
  [SMALL_STATE(37)] = 445,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 459,
  [SMALL_STATE(40)] = 466,
  [SMALL_STATE(41)] = 471,
  [SMALL_STATE(42)] = 476,
  [SMALL_STATE(43)] = 483,
  [SMALL_STATE(44)] = 488,
  [SMALL_STATE(45)] = 495,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 509,
  [SMALL_STATE(48)] = 516,
  [SMALL_STATE(49)] = 521,
  [SMALL_STATE(50)] = 526,
  [SMALL_STATE(51)] = 533,
  [SMALL_STATE(52)] = 538,
  [SMALL_STATE(53)] = 543,
  [SMALL_STATE(54)] = 548,
  [SMALL_STATE(55)] = 552,
  [SMALL_STATE(56)] = 556,
  [SMALL_STATE(57)] = 560,
  [SMALL_STATE(58)] = 564,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(30),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(50),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(37),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 11),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 11),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 11),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 11),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, .production_id = 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, .production_id = 9),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 6, .production_id = 10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
