#include <iostream>
#include <vector>

int main() {
    std::vector<int> n(3);
    
    for (auto& i : n) {
        std::cin >> i;
    }

    std::vector<int> semOrdernar = n;

    if (n[1] < n[0]) std::swap(n[0], n[1]);
    if (n[2] < n[1]) {
        std::swap(n[1], n[2]);

        // como o 2º elemento foi trocado, é necessário verificar se ele é menor que o 1º novamente
        if (n[1] < n[0]) std::swap(n[1], n[0]);
    }

    for (const auto& i : n) {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    for (const auto& i : semOrdernar) {
        std::cout << i << std::endl;
    }

    return 0;
}