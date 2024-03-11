#include <iostream>
#include <vector>

int main() {
    int qtdCasos;
    std::cin >> std::ws >> qtdCasos;

    for (int i = 0; i < qtdCasos; i++) {
        int entrada;
        std::cin >> std::ws >> entrada;
        std::vector<unsigned long long> numeros(entrada + 2, 0);

        numeros[0] = 0;
        numeros[1] = 1;

        for (int j = 2; j <= entrada; j++) {
            numeros[j] = numeros[j - 1] + numeros[j - 2];
        }

        std::cout << "Fib(" << entrada << ") = " << numeros[entrada] << std::endl;
    }

    return 0;
}