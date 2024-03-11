#include <iostream>
#include <string>
#include <vector>

int main() {
    while (true) {
        std::string frase;
        std::getline(std::cin >> std::ws, frase);

        if (frase == "*") {
            break;
        }

        frase.push_back(' '); 

        std::vector<char> chars;

        std::string palavra;
        for (const auto& c : frase) {
            if (c == ' ') {
                chars.push_back(std::tolower(palavra.front()));
                palavra = "";
            } else {
                palavra += c;
            }
        }

        bool todosIguais = true;
        for (const auto& c : chars) {
            if (c != chars[0]) {
                todosIguais = false;
                break;
            }
        }

        if (todosIguais) {
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }

    };

    return 0;
}