#include <iostream>

int main() {
    // Sample M+ code
    std::string code = "hold x = 10; method greet() { hold y = 20; check (x > y) { show('x > y'); } otherwise { show('x <= y'); } }";

    // Step 1: Tokenize the input
    Lexer lexer(code);
    std::vector<Token> tokens = lexer.tokenize();

    // Step 2: Parse the tokens into an AST
    Parser parser(tokens);
    ASTNode* ast = parser.parse();

    // Step 3: Generate code from the AST
    CodeGenerator codegen;
    codegen.generate(ast);

    return 0;
}
