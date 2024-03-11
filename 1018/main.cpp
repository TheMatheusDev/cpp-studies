#include <iostream>
#include <vector>

int main() {
    int valor;
    std::vector<std::pair<int, int>> notas = {
        {100, 0},
        {50, 0},
        {20, 0},
        {10, 0},
        {5, 0},
        {2, 0},
        {1, 0}
    };

    std::cin >> std::ws >> valor;
    std::cout << valor << std::endl;
    
    for (auto& nota : notas) {
        nota.second = valor / nota.first;
        valor %= nota.first;
    }

    for (const auto& nota : notas) {
        std::cout << nota.second << " nota(s) de R$ " << nota.first << ",00" << std::endl;
    }

    return 0;
}