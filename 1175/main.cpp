#include <iostream>
#include <vector>

int main() {
    int size = 20;
    std::vector<int> n(size);

    for (int i = 0; i < size; i++) {
        std::cin >> n[i];
    }

    int j;
    for (int i = 0, j = size-1; i < size/2; i++, j--) {
        int temp = n[i];
        std::swap(n[i], n[j]);
        n[j] = temp;
    }

    for (int i = 0; i < size; i++) {
        std::cout << "N[" << i << "] = " << n[i] << std::endl;
    }

    return 0;
}