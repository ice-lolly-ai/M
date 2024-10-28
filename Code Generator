# The code generator will take the AST and output assembly or machine code, 
# but for simplicity, we can output pseudo-code or a C-like format.

#include <iostream>
#include <vector>

class CodeGenerator {
public:
    void generate(ASTNode* root) {
        if (root->value == "Program") {
            for (ASTNode* child : root->children) {
                generate(child);
            }
        } else if (root->value == "VariableDeclaration") {
            std::cout << "int " << root->children[0]->value << " = " << root->children[1]->value << ";" << std::endl;
        } else if (root->value == "FunctionDeclaration") {
            std::cout << "void " << root->children[0]->value << "() {" << std::endl;
            for (size_t i = 1; i < root->children.size(); ++i) {
                generate(root->children[i]);
            }
            std::cout << "}" << std::endl;
        } else if (root->value == "IfStatement") {
            std::cout << "if (condition) {" << std::endl;
            for (ASTNode* child : root->children) {
                generate(child);
            }
            std::cout << "}" << std::endl;
        } else if (root->value == "ElseBranch") {
            std::cout << "else {" << std::endl;
            for (ASTNode* child : root->children) {
                generate(child);
            }
            std::cout << "}" << std::endl;
        }
    }
};
