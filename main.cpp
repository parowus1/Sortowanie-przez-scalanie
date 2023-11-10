#include "MergeSort.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> array;
    int num;

    std::cout << "Podaj liczby do dodania do tablicy (12345 aby zakończyć):\n";

    while (true) {
        std::cout << "Podaj liczbe: ";
        std::cin >> num;

        if (num == 12345) {
            break;
        }

        array.push_back(num);
    }

    std::cout << "Tablica przed sortowaniem: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
MergeSort::sort(array);

    std::cout << "Tablica po sortowaniu: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
