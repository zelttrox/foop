#include <iostream>
using namespace std;

#include "lexer.cpp"

// Import libraries
#include <string>
#include <vector>

// Chars example: new ~string input = "test";

int main() {

    vector<string> code = {"new"};
    vector<Token> tokens = GetTokens(code);

    for (char i: tokens) cout << i << ' ';
    return 0;
}
