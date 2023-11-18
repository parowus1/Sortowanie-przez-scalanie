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

TEST(TrzeciTest, TestLosowaTablica) {
    // Przykładowa tablica z losowymi liczbami
	std::vector<int> array = { 5, 3, 0, 2, 7, 1, 8, 4, 2 };

	// Wywołaj funkcję sortującą
	MergeSort::sort(array);

	// Sprawdź, czy tablica jest posortowana
	EXPECT_EQ(0, array[0]);
	EXPECT_EQ(1, array[1]);
	EXPECT_EQ(2, array[2]);
	EXPECT_EQ(2, array[3]);
	EXPECT_EQ(3, array[4]);
	EXPECT_EQ(4, array[5]);
	EXPECT_EQ(5, array[6]);
	EXPECT_EQ(7, array[7]);
	EXPECT_EQ(8, array[8]);
}

TEST(CzwartyTest, TestUjemnaTablica) {
    // Przykładowa tablica z liczbami ujemnymi
    std::vector<int> array = { -5, -3, -8, -2, -1, -6, -4, -7, -9 };

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana
    EXPECT_EQ(-9, array[0]);
    EXPECT_EQ(-8, array[1]);
    EXPECT_EQ(-7, array[2]);
    EXPECT_EQ(-6, array[3]);
    EXPECT_EQ(-5, array[4]);
    EXPECT_EQ(-4, array[5]);
    EXPECT_EQ(-3, array[6]);
    EXPECT_EQ(-2, array[7]);
    EXPECT_EQ(-1, array[8]);
}

TEST(PiatyTest, TestMieszanaTablica) {
    // Przykładowa tablica z liczbami ujemnymi i dodatnimi
    std::vector<int> array = { -5, 3, 0, -2, 7, -1, 8, -4, 2 };

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana
    EXPECT_EQ(-5, array[0]); 
    EXPECT_EQ(-4, array[1]);
    EXPECT_EQ(-2, array[2]);
    EXPECT_EQ(-1, array[3]);
    EXPECT_EQ(0, array[4]);
    EXPECT_EQ(2, array[5]);
    EXPECT_EQ(3, array[6]);
    EXPECT_EQ(7, array[7]);
    EXPECT_EQ(8, array[8]);
}

TEST(SzostyTest, TestPustaTablica) {
    // Przykładowa pusta tablica
    std::vector<int> array = {};

    // Wywołaj funkcję sortującą na pustej tablicy
    ASSERT_NO_THROW(MergeSort::sort(array)); //sprawdza, czy nie występują żadne wyjątki podczas wywoływania funkcji sortującej

    // Sprawdź, czy tablica pozostaje pusta po sortowaniu
    EXPECT_TRUE(array.empty()); 
}

TEST(SiodmyTest, TestTablicaJedenElement) {
	// Przykładowa tablica z jednym elementem
	std::vector<int> array = { 1, 2 };

	// Wywołaj funkcję sortującą
	MergeSort::sort(array);

	// Sprawdź, czy tablica pozostaje niezmieniona
	EXPECT_EQ(1, array[0]);
}
