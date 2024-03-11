#include <iostream>

int main() {
    std::fixed(std::cout);
    std::cout.precision(1);

    int t;
    std::cin >> std::ws >> t;

    if (t < 1 || t > 3000) {
        std::cout << "Valor de t inválido." << std::endl;
        return 0;
    }

    for (int i = 0; i < t; i++) {
        int pa, pb;
        float gA, gB;
        std::cin >> std::ws >> pa >> pb >> gA >> gB;

        int anos = 0;
        while (pa <= pb) {
            pa += pa*(gA/100);
            pb += pb*(gB/100);

            anos++;
            if (anos > 100) {
                std::cout << "Mais de 1 seculo." << std::endl;
                break;
            }
        }

        if (anos <= 100) {
            std::cout << anos << " anos." << std::endl;
        }
    }

    return 0;
}