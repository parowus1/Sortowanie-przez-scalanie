#include "pch.h"
#include "C:\Users\parow\source\repos\Sort\MergeSort.cpp"

TEST(PierwszyTest, TestNiezmienionaPosortowanaTablica) {
    // Przykładowa posortowana rosnąco tablica
    std::vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Skopiuj tablicę przed sortowaniem
    std::vector<int> originalArray = array;

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica pozostała niezmieniona
    EXPECT_EQ(originalArray, array);
}
