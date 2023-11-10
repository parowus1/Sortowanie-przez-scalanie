#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    static void sort(std::vector<int>& array);

private:
    static void merge(std::vector<int>& array, int left, int middle, int right);
    static void sort(std::vector<int>& array, int left, int right);
};

#endif // MERGESORT_H
