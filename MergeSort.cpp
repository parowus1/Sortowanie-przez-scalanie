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

}

void MergeSort::sort(std::vector<int>& array) {        //Jeśli tablica zawiera mniej niż dwa elementy, funkcja sortująca nic nie robi, ponieważ tablica już jest posortowana.
    int size = array.size();
    if (size <= 1) {
        return;
    }

    sort(array, 0, size - 1);
}

void MergeSort::sort(std::vector<int>& array, int left, int right) {   //implementacja funkcji rekurencyjnej sort, która sortuje tablicę od lewej do prawej.
    if (left < right) {                                                
        int middle = left + (right - left) / 2;

        sort(array, left, middle);                            ////Sprawdzamy, czy podtablica jest większa niż jeden element. Jeśli tak, obliczamy środek tablicy i rekurencyjnie sortujemy lewą i prawą połowę tablicy.
        sort(array, middle + 1, right);

        merge(array, left, middle, right);                //Następnie łączymy te dwie posortowane podtablice, używając funkcji merge.
    }
}

