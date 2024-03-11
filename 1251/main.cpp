#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool ordena(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    // desempate por ordem ASCII
    if (a.second == b.second) {
        return a.first > b.first;
    }

    // ordena por frequência (sem empate)
    return a.second < b.second;
}

int main() {
    std::string entrada;
    bool first = true;

    do {
        std::getline(std::cin, entrada);

        if (!entrada.empty() && first == false) std::cout << std::endl;
        first = false;

        // .first = valor ASCII
        // .second = frequência
        std::vector<std::pair<int, int>> chars;
        for (const auto& c : entrada) {
            bool encontrado = false;

            for (auto& par : chars) {
                // este é o caso onde o vector já tem o caractere
                if (par.first == (int)c) {
                    par.second++;
                    encontrado = true;
                    break;
                }
            }

            // quando o caractere não tá presente no vector (primeiro caso pra cada char)
            if (!encontrado) {
                chars.push_back({(int)c, 1});
            }
        }

        std::sort(chars.begin(), chars.end(), ordena);

        for (const auto& par : chars) {
            std::cout << par.first << " " << par.second << std::endl;
        }
    } while (!entrada.empty());
    return 0;
}