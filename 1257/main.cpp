#include <iostream>
#include <string>

int main() {
    int casos;
    std::cin >> std::ws >> casos;

    for (int i = 0; i < casos; i++) {
        int repeticoes;
        std::cin >> std::ws >> repeticoes;
        int valorEntreReps = 0;

        for (int i = 0; i < repeticoes; i++) {
            std::string palavra;
            std::getline(std::cin >> std::ws, palavra);
            int valorHash = 0;

            for (int charr = 0; charr < (int)palavra.size(); charr++) {
                valorHash += (int)charr + i + (int)palavra[charr] - 'A';
            }

            valorEntreReps += valorHash;
        }
        std::cout << valorEntreReps << std::endl;
    }

    return 0;
}