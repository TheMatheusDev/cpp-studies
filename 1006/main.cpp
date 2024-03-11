#include <iostream>
#include <iomanip>

int main() {
    double a;
    double b;
    double c;
    double pesoA = 2;
    double pesoB = 3;
    double pesoC = 5;


    std::cin >> std::ws >> a >> b >> c;
    std::cout.precision(1);
    float media = (a*pesoA + b*pesoB + c*pesoC) / (pesoA + pesoB + pesoC);
    std::cout << "MEDIA = " << std::fixed << media << "\n";
    
    return 0;
}