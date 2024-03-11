#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    char c;
    double soma = 0;
    std::cin >> c;
    std::vector<std::vector<double>> matriz(12, std::vector<double>(12, 0));

    std::cout.precision(1);
    std::fixed(std::cout);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> matriz[i][j];

            if (j > 11 - i) {
                soma += matriz[i][j];
            }
        }
    }

    if (c == 'S') {
        std::cout << soma << std::endl;
    }
    if (c == 'M') {
        std::cout << soma / 66 << std::endl;
    }

    return 0;
}