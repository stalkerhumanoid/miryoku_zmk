// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Graphite, modified
#define MIRYOKU_LAYER_BASE \
&kp B,             &kp L,             &kp D,             &kp W,             &kp Z,                &kp SQT,           &kp F,             &kp O,             &kp U,             &kp J, \
U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, S),    &kp G,                &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I), \
U_LT(U_BUTTON, Q), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,                &kp K,             &kp P,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NP,              U_NP,              U_LT(U_MEDIA, TAB),U_LT(U_NAV, SPACE),&kp LSHFT,            U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp ESC,           &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP