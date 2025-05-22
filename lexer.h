enum Logic {var_declaration, func_declaration};

enum Token {

    // Variable types
    var_Number,
    var_Float,
    var_String,
    var_Boolean,

    // Operators
    op_Plus,
    op_Minus,
    op_Multiply,
    op_Divide,
    op_Tilde,

    // Comparators
    comp_Equal,
    comp_Unequal,
    comp_Greater,
    comp_Lesser,
    comp_GreaterEqual,
    comp_LesserEqual,

    // Separators
    sep_LeftParenthesis,
    sep_RightParenthesis,
    sep_LeftBracket,
    sep_RightBracket,
    sep_LeftBrace,
    sep_RightBrace,
    sep_Semicolon,
    sep_Comma,

    // Keywords
    key_New,
    key_If,
    key_Else,
    key_ElseIf,
    key_For,
    key_While
};