#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_property_deref = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_source_file = 6,
  sym__definition = 7,
  sym_namespace = 8,
  sym_property = 9,
  sym_variable_content = 10,
  sym_variable = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_variable_content_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_property_deref] = "property_deref",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_namespace] = "namespace",
  [sym_property] = "property",
  [sym_variable_content] = "variable_content",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_content_repeat1] = "variable_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_property_deref] = sym_property_deref,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_namespace] = sym_namespace,
  [sym_property] = sym_property,
  [sym_variable_content] = sym_variable_content,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_content_repeat1] = aux_sym_variable_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property_deref] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_content] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_content_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_property_deref);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_property_deref] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__definition] = STATE(2),
    [sym_variable] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    STATE(3), 3,
      sym__definition,
      sym_variable,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(14), 1,
      sym_identifier,
    STATE(12), 2,
      sym_property,
      sym_variable,
  [35] = 1,
    ACTIONS(16), 4,
      ts_builtin_sym_end,
      sym_property_deref,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
  [42] = 3,
    ACTIONS(18), 1,
      sym_identifier,
    STATE(7), 1,
      sym_namespace,
    STATE(15), 1,
      sym_variable_content,
  [52] = 3,
    ACTIONS(20), 1,
      sym_property_deref,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_variable_content_repeat1,
  [62] = 3,
    ACTIONS(20), 1,
      sym_property_deref,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_variable_content_repeat1,
  [72] = 3,
    ACTIONS(26), 1,
      sym_property_deref,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_variable_content_repeat1,
  [82] = 1,
    ACTIONS(31), 2,
      sym_property_deref,
      anon_sym_RBRACE,
  [87] = 1,
    ACTIONS(33), 2,
      sym_property_deref,
      anon_sym_RBRACE,
  [92] = 1,
    ACTIONS(29), 2,
      sym_property_deref,
      anon_sym_RBRACE,
  [97] = 1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
  [101] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [105] = 1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 92,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 101,
  [SMALL_STATE(15)] = 105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_content_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_content_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kpops(void) {
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
