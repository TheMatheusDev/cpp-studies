#include <iostream>
#include <vector>
#include <string>


int main() {
    std::string entrada;
    int repeticoes;
    std::cin >> std::ws >> repeticoes;

    for (int i = 0; i < repeticoes; i++) {
        int leds = 0;
        std::getline(std::cin >> std::ws, entrada);

        for (const auto& c : entrada) {
            switch (c) {
            case '0':
                leds += 6;
                continue;
            
            case '1':
                leds += 2;
                continue;

            case '2':
                leds += 5;
                continue;

            case '3':
                leds += 5;
                continue;

            case '4':   
                leds += 4;
                continue;

            case '5':
                leds += 5;
                continue;

            case '6':
                leds += 6;
                continue;

            case '7':
                leds += 3;
                continue;

            case '8':
                leds += 7;
                continue;

            case '9':
                leds += 6;
                continue;

            default:
                std::cout << "Erro!" << std::endl;
                continue;
            }
        }
    
        std::cout << leds << " leds" << std::endl;
    }

    return 0;
}


