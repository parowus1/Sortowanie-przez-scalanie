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

TEST(DrugiTest, TestOdwrotniePosortowanaTablica) {
    // Przykładowa tablica posortowana w odwrotnej kolejności
    std::vector<int> array = { 9, 8, 7, 6, 5, 4, 3, 2, 2 };

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana rosnąco
    for (size_t i = 1; i < array.size(); ++i) { 
        EXPECT_LE(array[i - 1], array[i]);  //
    }
}
