#include <iostream>

int main () {
    bool isLinhaPar = false;
    bool isColunaPar = false;
    int linha, coluna;

    std::cin >> linha >> coluna;

    if (linha < 1 || linha > 1000 || coluna < 1 || coluna > 1000) {
        std::cout << "Linha & Coluna não podem ser maiores que 1000 ou menores que 1!" << std::endl;
        return 1;
    }

    if (linha % 2 == 0) {
        isLinhaPar = true;
    }
    if (coluna % 2 == 0) {
        isColunaPar = true;
    }

    if (isLinhaPar && isColunaPar) {
        std::cout << "1" << std::endl;
    } else if (!isLinhaPar && !isColunaPar) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}