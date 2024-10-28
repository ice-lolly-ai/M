# Parser (Abstract Syntax Tree - AST Generation)
# The parser will convert the tokens into an AST, which will represent the structure of the program.


#include <iostream>
#include <vector>
#include <string>

struct ASTNode {
    std::string value;
    std::vector<ASTNode*> children;

    ASTNode(const std::string& value) : value(value) {}
};

class Parser {
public:
    Parser(const std::vector<Token>& tokens) : tokens(tokens), position(0) {}

    ASTNode* parse() {
        ASTNode* root = new ASTNode("Program");
        while (currentToken().type != TOKEN_END) {
            root->children.push_back(parseStatement());
        }
        return root;
    }

private:
    ASTNode* parseStatement() {
        Token token = currentToken();
        if (token.type == TOKEN_KEYWORD) {
            if (token.value == "hold") {
                return parseVariableDeclaration();
            } else if (token.value == "method") {
                return parseFunctionDeclaration();
            } else if (token.value == "check") {
                return parseIfStatement();
            }
        }
        return nullptr; // Unexpected statement
    }

    ASTNode* parseVariableDeclaration() {
        consume();  // 'hold'
        Token identifier = consume();  // variable name
        Token number = consume();      // value (for simplicity)
        ASTNode* node = new ASTNode("VariableDeclaration");
        node->children.push_back(new ASTNode(identifier.value));
        node->children.push_back(new ASTNode(number.value));
        return node;
    }

    ASTNode* parseFunctionDeclaration() {
        consume();  // 'method'
        Token identifier = consume();  // function name
        consume();  // ignore params (for simplicity)
        consume();  // return type
        consume();  // opening brace '{'

        ASTNode* node = new ASTNode("FunctionDeclaration");
        node->children.push_back(new ASTNode(identifier.value));

        while (currentToken().type != TOKEN_END && currentToken().value != "}") {
            node->children.push_back(parseStatement());
        }
        consume();  // closing brace '}'
        return node;
    }

    ASTNode* parseIfStatement() {
        consume();  // 'check'
        consume();  // condition (for simplicity)

        ASTNode* node = new ASTNode("IfStatement");

        consume();  // opening brace '{'
        while (currentToken().type != TOKEN_END && currentToken().value != "}") {
            node->children.push_back(parseStatement());
        }
        consume();  // closing brace '}'

        if (currentToken().value == "otherwise") {
            consume();  // 'otherwise'
            consume();  // opening brace '{'
            ASTNode* elseBranch = new ASTNode("ElseBranch");
            while (currentToken().type != TOKEN_END && currentToken().value != "}") {
                elseBranch->children.push_back(parseStatement());
            }
            consume();  // closing brace '}'
            node->children.push_back(elseBranch);
        }

        return node;
    }

    Token consume() {
        return tokens[position++];
    }

    Token currentToken() const {
        return tokens[position];
    }

    std::vector<Token> tokens;
    size_t position;
};
