#include <iostream>
using namespace std;

#include "lexer.cpp"

// Import libraries
#include <string>
#include <vector>

// Chars example: new ~string input = "test";

int main() {
    vector<string> code = {"new", "~string"};
    vector<Token> tokens = GetTokens(code);
    return 0;
}
