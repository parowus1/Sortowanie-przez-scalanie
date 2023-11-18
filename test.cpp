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

TEST(OsmyTest, TestTablicaDuplikaty) {
	// Przykładowa tablica z duplikatami
    std::vector<int> array = { 1, 2, 2, 3, 3, 3, 4, 5, 5 };

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana
    EXPECT_EQ(1, array[0]);
    EXPECT_EQ(2, array[1]);
    EXPECT_EQ(2, array[2]);
    EXPECT_EQ(3, array[3]);
    EXPECT_EQ(3, array[4]);
    EXPECT_EQ(3, array[5]);
    EXPECT_EQ(4, array[6]);
    EXPECT_EQ(5, array[7]);
    EXPECT_EQ(5, array[8]);
}

TEST(DziewiatyTest, TestTablicaUjemneDuplikaty) {
    // Przykładowa tablica z ujemnymi duplikatami
	std::vector<int> array = { -5, -3, -3, -2, -2, -2, -1, -1, -1 };

	// Wywołaj funkcję sortującą
	MergeSort::sort(array);

	// Sprawdź, czy tablica jest posortowana
	EXPECT_EQ(-5, array[0]);
	EXPECT_EQ(-3, array[1]);
	EXPECT_EQ(-3, array[2]);
	EXPECT_EQ(-2, array[3]);
	EXPECT_EQ(-2, array[4]);
	EXPECT_EQ(-2, array[5]);
	EXPECT_EQ(-1, array[6]);
	EXPECT_EQ(-1, array[7]);
	EXPECT_EQ(-1, array[8]);
}

TEST(DziesiatyTest, TestTablicaDodatnieUjemneDuplikaty) {
    // Przykładowa tablica z dodatnimi, ujemnymi oraz duplikatami
    std::vector<int> array = { -5, -3, 0, 2, 7, -1, 8, -4, 2 };

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana
    EXPECT_EQ(-5, array[0]);
    EXPECT_EQ(-4, array[1]);
    EXPECT_EQ(-3, array[2]);
    EXPECT_EQ(-1, array[3]);
    EXPECT_EQ(0, array[4]);
    EXPECT_EQ(2, array[5]);
    EXPECT_EQ(2, array[6]);
    EXPECT_EQ(7, array[7]);
    EXPECT_EQ(8, array[8]);
}

TEST(JedenastyTest, TestTablicaDwaElementyRosnace) {
    // Przykładowa tablica z dwoma elementami w różnej kolejności
    std::vector<int> array = { 3, 7 };

    // Skopiuj tablicę przed sortowaniem
    std::vector<int> originalArray = array;

    // Wywołaj funkcję sortującą
    MergeSort::sort(array); 

    // Sprawdź, czy tablica jest posortowana rosnąco lub malejąco
    ASSERT_EQ(array.size(), 2); 
    EXPECT_TRUE((array[0] <= array[1]) || (array[0] >= array[1])); 

    // Sprawdź, czy tablica po sortowaniu ma tę samą ilość elementów
    EXPECT_EQ(originalArray.size(), array.size());

    // Sprawdź, czy tablica po sortowaniu zawiera te same elementy
    for (size_t i = 0; i < array.size(); ++i) {
        EXPECT_EQ(originalArray[i], array[i]);
    }
}

TEST(DwunastyTest, TestDuzaTablica) {

    // Generuj losową tablicę liczb
    std::vector<int> array;
    const int size = 120; // Rozmiar tablicy

    for (int i = 0; i < size; ++i) {
        array.push_back(rand() % 120); // Zakres tablicy
    }

    // Skopiuj tablicę przed sortowaniem
    std::vector<int> originalArray = array;

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana rosnąco
    for (size_t i = 1; i < array.size(); ++i) {
        EXPECT_LE(array[i - 1], array[i]);
    }
}

TEST(TrzynastyTest, TestDuzaMieszanaTablica) {

    // Generuj losową tablicę liczb
    std::vector<int> array;
    const int size = 120; // Rozmiar tablicy

    for (int i = 0; i < size; ++i) {
        array.push_back(rand() % 200 - 100); //Zakres tablicy
    }

    // Skopiuj tablicę przed sortowaniem
    std::vector<int> originalArray = array;

    // Wywołaj funkcję sortującą
    MergeSort::sort(array);

    // Sprawdź, czy tablica jest posortowana rosnąco
    for (size_t i = 1; i < array.size(); ++i) {
        EXPECT_LE(array[i - 1], array[i]);
    }
}
