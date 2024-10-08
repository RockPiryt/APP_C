#include <stdio.h>

void insertion_sort(int a[], int length );

int main()
{   
    int a[] = {8,4,9,5,7,6,3,2};

    insertion_sort(a, 8);

    for (int i=0; i < 8; i++)
      printf("a[%d] = %d\n", i, a[i]);


    return 0;
}

void insertion_sort(int a[], int length )
{
    //lista z 1 elementem jest zawsze posortowana, dlatego zaczynam od drugiego elementu na index 1
    for (int i=1; i < length; i++)
    {
        int j = i - 1; //liczba po lewej stronie, index poprzednika
        int key = a[i]; //liczba po prawej stronie, następnik

        while (j >= 0 && a[j] > key )//jeśli poprzednik jest większy od następnika to zamieniaj miejscami
        // j >=0 bo nie możemy wyjść poza liste, poza index 0
        {
            a[j+1] = a[j]; //następnik dostaje tą samą liczbę co poprzednik 9 9
            j = j - 1; // Instrukcja ma na celu przesuwanie elementu w lewo w tablicy, dopóki nie znajdzie się on na właściwej pozycji albo nie dotrze na początek tablicy. 
            // jeżeli ten jest za duży to biorę kolejny index na lewo  i sprawdzam while

        }
        a[j+1] = key; // to jest dobre miejsce dla tej karty więc ją lokujemy, wszytko po lewej jest mniejsze 
        // na kolejnym slocie od obiektu mniejszego lokujemy wiekszy
    } 
}

// symulacja dla 5
// {4,8,9,5,7,6,3,2}
// for (int i=1; i < length; i++)
//     {
//         int j = 3 - 1 =2; //czyli index 9
//         int key = a[3]; //czyli 5

//         while (j >= 0 && a[j] > key )//9>5 tak
//         {   
//             //a[2+1] = a[2] czyli 5 staje sie 9
//             a[j+1] = a[j]; //następnik dostaje tą samą liczbę co poprzednik 9 9
//             //2=2-1 czyli dostaje liczbe 8 do porownaniaz 5
//             j = j - 1; 

//         }

//         // kolejna iteracja
//             j=1 
//             8>5
//             index[1]> index[3]

//             a[1+1] = a[1]czyli slot pod indexem 2 staje sie 8
//             j = 1 -1 = 0

//         // kolejna iteracja
//          j=0 
//          na index 0 stoi juz 4
//          czy warunek spełniony 4>5 nie 
//          wiec 

//          a[0+1]= a[1] czyli na drugim slocie stawiamy 5    

//         //jeśli warunek niespełniony to 
//         // mam 4 po lewej i 5 po prawej wiec warunek nie spełniony

//         a[j+1] = key; // to jest dobre miejsce dla tej karty więc ją lokujemy, wszytko po lewej jest mniejsze 
//     } 

//Cześć Ravi,

// Instrukcja j = j - 1 wewnątrz pętli while ma na celu przesuwanie elementu w lewo w tablicy, dopóki nie znajdzie się on na właściwej pozycji albo nie dotrze na początek tablicy. Przed wykonaniem pętli wewnętrznej mamy:

// c
// Skopiuj kod
// int key = a[i];
// int j = i - 1;
// Zmienna key reprezentuje element, który przesuwamy, i jest ustawiona na a[i], gdzie i to „aktualny element”, który będziemy sortować. Zmienna j = i - 1, co oznacza, że jest to indeks po lewej stronie od „aktualnego elementu”. Ta pętla ma na celu znalezienie „właściwego miejsca” dla tego elementu w tablicy:

// c
// Skopiuj kod
// while (j >= 0 && a[j] > key)
// {
//     a[j + 1] = a[j];
//     j = j - 1;
// }
// Pętla przesuwa wartości w tablicy, używając instrukcji a[j + 1] = a[j]. Jeśli j jest elementem, na który aktualnie patrzy ta pętla (początkowo o jeden po lewej od klucza key), to przesuwamy wartość zapisaną pod indeksem o jeden w prawo za pomocą: a[j + 1] = a[j] (czyli j + 1 jest o jedno miejsce w prawo od a[j], i przenosimy tam a[j]). Zmniejszamy j w każdej iteracji pętli, aby pętla sprawdzała kolejny element bardziej po lewej stronie. Pętla kończy się, gdy spełniony zostanie jeden z warunków: albo j < 0 (co oznacza, że dotarliśmy do początku tablicy i wartość key musi tam trafić), albo a[j] <= key (co oznacza, że znaleźliśmy odpowiednie miejsce dla wartości key). Następnie umieszczamy wartość key na tej właściwej, posortowanej pozycji w tablicy:

// c
// Skopiuj kod
// a[j + 1] = key;
// Mam nadzieję, że to pomaga wyjaśnić działanie tego kodu! :-)
