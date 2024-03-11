#include <iostream>
#include <iomanip>

int main() {
    float a;
    float b;
    float pesoA = 3.5;
    float pesoB = 7.5;


    std::cin >> std::ws >> a >> b;
    std::cout.precision(5);
    float media = (a*pesoA + b*pesoB) / (pesoA + pesoB);
    std::cout << "MEDIA = " << std::fixed << media << "\n";
    
    return 0;
}