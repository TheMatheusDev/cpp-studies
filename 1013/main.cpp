#include <iostream>
#include <cstdlib>

int main() {
    int a, b, c;
    std::cin >> std::ws >> a >> b >> c;
    int maiorAB = (a + b + std::abs(a - b)) / 2;
    int maiorABC = (maiorAB + c + std::abs(maiorAB - c)) / 2;
    std::cout << maiorABC << " eh o maior" << std::endl;


    return 0;
}