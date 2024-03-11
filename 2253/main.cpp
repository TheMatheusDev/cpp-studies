#include <iostream>
#include <string>

int main() {
    std::string senha;

    while (std::getline(std::cin, senha)) {
        bool maiuscula = false;
        bool minuscula = false;
        bool numero = false;
        bool isInvalid = false;

        if (senha.size() < 6 || senha.size() > 32) {
            isInvalid = true;
        }

        for (const auto& c : senha) {
            if (isupper(c)) {
                maiuscula = true;
            } else if (islower(c)) {
                minuscula = true;
            } else if (isdigit(c)) {
                numero = true;
            } else {
                isInvalid = true;
            }
        }

        if (maiuscula && minuscula && numero && !isInvalid) {
            std::cout << "Senha valida." << std::endl;
        } else {
            std::cout << "Senha invalida." << std::endl;
        }
    }

    return 0;
}