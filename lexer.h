enum Token {
    Identifier,

    // Variable types
    var_Number,
    var_Float,
    var_var_String,
    var_Boolean,

    // Operators
    op_Plus,
    op_Minus,
    op_Multiply,
    op_Divide,

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
    key_Var,
    key_If,
    key_Else,
    key_ElseIf,
    key_For,
    key_While
};
