#include <iostream>
#include <vector>

int main () {
    int qtd;
    while (std::cin >> qtd) {
        if (qtd < 1 || qtd > 500) {
            std::cout << "Erro na qtd de lesmas!" << std::endl;
            return 1;
        }

        std::vector<int> velLesmas(qtd, 0);

        for (int i = 0; i < qtd; i++) {
            std::cin >> std::ws >> velLesmas[i];
            if (velLesmas[i] < 1 || velLesmas[i] > 50) {
                std::cout << "Erro na velocidade da lesma!" << std::endl;
                return 1;
            }
        }

        int maisVeloz = 0;
        for (int i = 0; i < qtd; i++) {
            if (velLesmas[i] > maisVeloz) {
                maisVeloz = velLesmas[i];
            }
        }

        if (maisVeloz < 10) {
            std::cout << 1 << std::endl;
        }
        if (maisVeloz >= 10 && maisVeloz < 20) {
            std::cout << 2 << std::endl;
        }
        if (maisVeloz >= 20) {
            std::cout << 3 << std::endl;
        }
    }

    return 0;
}