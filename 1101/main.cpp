#include <iostream>

int main() {
    int m, n;
    while (true) {
        std::cin >> std::ws >> m >> n;

        if (m <= 0 || n <= 0) {
            break;
        } 

        int soma = 0;

        if (n > m) std::swap(m, n);

        for (int i = n; i <= m; i++) {
            std::cout << i << " ";
            soma += i;
        }
        std::cout << "Sum=" << soma << std::endl;
    }

    return 0;
}