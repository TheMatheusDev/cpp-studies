#include <iostream>

int main() {
    int a, b;
    int somaValores = 0;

    std::cin >> std::ws >> a >> b;

    if (a > b) std::swap(a, b);

    // O enunciado pede que sejam somados os valores ENTRE a e b
    // portanto, excluimos as extremidades
    if (a % 2 == 0) {
        a++;
    } else {
        a += 2;
    }
    
    if (b % 2 == 0) {
        b--;
    } else {
        b -= 2;
    }

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            somaValores += i;
        }
    }

    std::cout << somaValores << std::endl;
    return 0;
}