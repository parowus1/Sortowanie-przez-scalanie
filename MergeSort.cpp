void MergeSort::merge(std::vector<int>& array, int left, int middle, int right) {
    int n1 = middle - left + 1;  //W funkcji merge, pierwsza podtablica jest od left +1 do middle, a druga od middle do right.
    int n2 = right - middle;     //n1 i n2 określają długość pierwszej i drugiej podtablicy

    std::vector<int> leftArray(n1);  //dwie tymczasowe tablice leftArray i rightArray o odpowiednich rozmiarach, które przechowają zawartość dwóch podtablic.
    std::vector<int> rightArray(n2);  

    for (int i = 0; i < n1; i++)         //Kopiujemy odpowiednie elementy z oryginalnej tablicy do dwóch tymczasowych tablic leftArray i rightArray
        leftArray[i] = array[left + i];    
    for (int j = 0; j < n2; j++)
        rightArray[j] = array[middle + 1 + j];    

    int i = 0, j = 0, k = left;             //Rozpoczynamy scalanie dwóch podtablic w jedną tablicę. Zmienna i wskazuje na bieżący indeks w pierwszej podtablicy (leftArray), 
        while (i < n1 && j < n2) {          //zmienna j wskazuje na bieżący indeks w drugiej podtablicy (rightArray), a zmienna k wskazuje na bieżący indeks w oryginalnej tablicy array.
            
            if (leftArray[i] <= rightArray[j]) {    //Porównujemy elementy z obu podtablic i wstawiamy mniejszy element do oryginalnej tablicy array. Inkrementujemy odpowiednio zmienne i, j i k.
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {                //Jeśli jedna z podtablic została wyczerpana, pozostałe elementy z drugiej podtablicy są kopiowane do oryginalnej tablicy.
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
