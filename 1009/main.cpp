#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string nome;
    float salarioFixo;
    float totalVendas;

    std::cin >> std::ws >> nome >> salarioFixo >> totalVendas;

    std::cout.precision(2);
    std::cout << "TOTAL = R$ " << std::fixed << salarioFixo + totalVendas * 0.15 << std::endl;
    
    return 0;
}