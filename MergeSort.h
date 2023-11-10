#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    static void sort(std::vector<int>& array);  //do sortowania tablicy liczb całkowitych przekazanej jako argument

private:
    static void merge(std::vector<int>& array, int left, int middle, int right);  //Odpowiedzialna za scalanie dwóch podtablic w jedną posortowaną tablicę. Metoda ta przyjmuje cztery argumenty
    static void sort(std::vector<int>& array, int left, int right);   //jest używana do rekurencyjnego sortowania tablicy w określonym zakresie indeksów od left do right.
};

#endif // MERGESORT_H
