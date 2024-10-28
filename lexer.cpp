#include <iostream>
#include <string>
#include <vector>
#include <cctype>

enum TokenType {
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_KEYWORD,
    TOKEN_OPERATOR,
    TOKEN_END
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string& source) : source(source), position(0) {}

    std::vector<Token> tokenize() {
        std::vector<Token> tokens;
        while (position < source.length()) {
            char current = source[position];
            if (std::isspace(current)) {
                position++;
            } else if (std::isalpha(current)) {
                tokens.push_back(readIdentifier());
            } else if (std::isdigit(current)) {
                tokens.push_back(readNumber());
            } else if (current == '+' || current == '-' || current == '*' || current == '/') {
                tokens.push_back(readOperator());
            } else {
                position++;  // Ignore unknown characters
            }
        }
        tokens.push_back({TOKEN_END, ""});
        return tokens;
    }

private:
    Token readIdentifier() {
        std::string value;
        while (position < source.length() && std::isalpha(source[position])) {
            value += source[position++];
        }
        if (value == "hold" || value == "method" || value == "check" || value == "otherwise") {
            return {TOKEN_KEYWORD, value};
        }
        return {TOKEN_IDENTIFIER, value};
    }

    Token readNumber() {
        std::string value;
        while (position < source.length() && std::isdigit(source[position])) {
            value += source[position++];
        }
        return {TOKEN_NUMBER, value};
    }

    Token readOperator() {
        std::string value(1, source[position++]);
        return {TOKEN_OPERATOR, value};
    }

    std::string source;
    size_t position;
};
