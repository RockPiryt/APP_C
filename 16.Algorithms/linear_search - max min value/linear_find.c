/*Napisz funkcje o nazwie linear_find, który będzie pobierał jako argumenty tablicę typu int, liczbę n oznaczający długość tablicy oraz liczbę m.
Wynikiem funkcji ma być ilość wystąpień liczby m w tablicy. W przypadku braku tego elementu program ma zwrócić wartość zero.

Napisz wyłącznie funkcje!!! Nie umieszczaj żadnych plików nagłówkowych!!!*/

#include <stdio.h>

void print_tab(int tab[], int tab_size);
int find_m(int array[], int length, int m);

int main()
{  
    int n,m;
    
    //User enter value between 1 and 99
    printf("Please length of array between 1 and 99: \n");
    scanf("%d", &n);

    //Check user number
    if(n<=0)
    {
        printf("Error");
        return 1;
    }
    else if(n>=100)
    {
        printf("Error");
        return 1;
    }

    //Array initialization
    int tab[100];
    
    //User enter value to array
    printf("Please enter value to array:\n");
    for (int i=0; i<n; i++) {
      scanf("%d", &tab[i]);
    }

    //Print array
    printf("User array:\n");
    print_tab(tab,n);
    
    //User enter m number
    printf("Please enter m: \n");
    scanf("%d", &m);

    //Call function to show how many m number in array
    int m_occur = find_m(tab,n,m);
    
    printf("M occurances == %d\n", m_occur);

    return 0;
}

void print_tab(int tab[], int tab_size)
{
    int i;

    for(i=0;i<tab_size;++i)
    {
      printf("%d ", tab[i]);
    }
    printf("\n");
}

int find_m(int array[], int length, int m)
{
    int m_count = 0;

    for(int j=0; j<length; j++)
    { 
      if(array[j]== m)
        m_count++;
    }
    //printf("%d ", m_count);

    return m_count;
}




