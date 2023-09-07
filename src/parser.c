#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  sym_number_literal = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_literal_token1 = 5,
  sym_comment = 6,
  sym_identifier = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_SEMI = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DOT = 16,
  sym_source_file = 17,
  sym_boolean_literal = 18,
  sym_string_literal = 19,
  sym__literal = 20,
  sym_compound_statement = 21,
  sym_statement = 22,
  sym_argument_list = 23,
  sym_event_definition = 24,
  sym_field_expression = 25,
  sym_call_expression = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_string_literal_repeat1 = 28,
  aux_sym_compound_statement_repeat1 = 29,
  aux_sym_argument_list_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym__literal] = "_literal",
  [sym_compound_statement] = "compound_statement",
  [sym_statement] = "statement",
  [sym_argument_list] = "argument_list",
  [sym_event_definition] = "event_definition",
  [sym_field_expression] = "field_expression",
  [sym_call_expression] = "call_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__literal] = sym__literal,
  [sym_compound_statement] = sym_compound_statement,
  [sym_statement] = sym_statement,
  [sym_argument_list] = sym_argument_list,
  [sym_event_definition] = sym_event_definition,
  [sym_field_expression] = sym_field_expression,
  [sym_call_expression] = sym_call_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
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
  [sym_call_expression] = {
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
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_arguments = 2,
  field_body = 3,
  field_content = 4,
  field_field = 5,
  field_function = 6,
  field_identifier = 7,
  field_parameters = 8,
  field_region_name = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_content] = "content",
  [field_field] = "field",
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
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 6},
  [12] = {.index = 22, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_body, 2},
    {field_identifier, 0},
    {field_parameters, 1},
  [4] =
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_value, 1, .inherited = true},
  [7] =
    {field_content, 1},
  [8] =
    {field_argument, 0},
    {field_field, 2},
  [10] =
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [12] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_value, 2, .inherited = true},
  [15] =
    {field_body, 1},
  [16] =
    {field_body, 5},
    {field_identifier, 0},
    {field_parameters, 4},
    {field_region_name, 1},
    {field_region_name, 2},
    {field_region_name, 3},
  [22] =
    {field_body, 2},
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
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 13,
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
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 25,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
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
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_event_definition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      sym_number_literal,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_call_expression,
    STATE(33), 1,
      sym__literal,
    STATE(46), 1,
      sym_field_expression,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym_boolean_literal,
      sym_string_literal,
  [30] = 8,
    ACTIONS(11), 1,
      sym_number_literal,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(38), 1,
      sym_call_expression,
    STATE(44), 1,
      sym__literal,
    STATE(46), 1,
      sym_field_expression,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 2,
      sym_boolean_literal,
      sym_string_literal,
  [57] = 1,
    ACTIONS(19), 8,
      sym_comment,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [68] = 1,
    ACTIONS(21), 8,
      sym_comment,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [79] = 1,
    ACTIONS(23), 8,
      sym_comment,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [90] = 1,
    ACTIONS(25), 8,
      sym_comment,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [101] = 1,
    ACTIONS(27), 8,
      sym_comment,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [112] = 1,
    ACTIONS(29), 8,
      sym_comment,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [123] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_call_expression,
    STATE(46), 1,
      sym_field_expression,
    STATE(10), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
  [143] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_call_expression,
    STATE(46), 1,
      sym_field_expression,
    STATE(10), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
  [163] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_call_expression,
    STATE(46), 1,
      sym_field_expression,
    STATE(10), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
  [183] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_call_expression,
    STATE(46), 1,
      sym_field_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
  [203] = 5,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_compound_statement,
    ACTIONS(49), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [221] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_call_expression,
    STATE(46), 1,
      sym_field_expression,
    STATE(12), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
  [241] = 4,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_compound_statement,
    ACTIONS(49), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [256] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_comment,
    STATE(19), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [270] = 3,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_compound_statement,
    ACTIONS(63), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [282] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(19), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [296] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
  [309] = 3,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_argument_list,
  [319] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [325] = 1,
    ACTIONS(81), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [331] = 3,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      aux_sym_string_literal_token1,
    STATE(35), 1,
      aux_sym_string_literal_repeat1,
  [341] = 1,
    ACTIONS(87), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [347] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [357] = 3,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
  [367] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [377] = 1,
    ACTIONS(95), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [383] = 1,
    ACTIONS(97), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [389] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [395] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [401] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [411] = 1,
    ACTIONS(103), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [417] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym_string_literal_token1,
    STATE(35), 1,
      aux_sym_string_literal_repeat1,
  [427] = 1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [433] = 1,
    ACTIONS(110), 3,
      sym_comment,
      sym_identifier,
      anon_sym_RBRACE,
  [439] = 2,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [447] = 3,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_string_literal_token1,
    STATE(24), 1,
      aux_sym_string_literal_repeat1,
  [457] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [467] = 1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [472] = 2,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_compound_statement,
  [479] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [484] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [489] = 2,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_compound_statement,
  [496] = 2,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_argument_list,
  [503] = 2,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_argument_list,
  [510] = 2,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_string_literal,
  [517] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [521] = 1,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
  [525] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
  [529] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 309,
  [SMALL_STATE(22)] = 319,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 331,
  [SMALL_STATE(25)] = 341,
  [SMALL_STATE(26)] = 347,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 367,
  [SMALL_STATE(29)] = 377,
  [SMALL_STATE(30)] = 383,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 395,
  [SMALL_STATE(33)] = 401,
  [SMALL_STATE(34)] = 411,
  [SMALL_STATE(35)] = 417,
  [SMALL_STATE(36)] = 427,
  [SMALL_STATE(37)] = 433,
  [SMALL_STATE(38)] = 439,
  [SMALL_STATE(39)] = 447,
  [SMALL_STATE(40)] = 457,
  [SMALL_STATE(41)] = 467,
  [SMALL_STATE(42)] = 472,
  [SMALL_STATE(43)] = 479,
  [SMALL_STATE(44)] = 484,
  [SMALL_STATE(45)] = 489,
  [SMALL_STATE(46)] = 496,
  [SMALL_STATE(47)] = 503,
  [SMALL_STATE(48)] = 510,
  [SMALL_STATE(49)] = 517,
  [SMALL_STATE(50)] = 521,
  [SMALL_STATE(51)] = 525,
  [SMALL_STATE(52)] = 529,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 6, .production_id = 11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, .production_id = 10),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 8), SHIFT_REPEAT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cl(void) {
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
