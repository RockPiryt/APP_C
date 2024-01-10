/*
Napisz program, który pobierze ciąg liczb (zapisanych w jednej linii oddzielonych spacją, gdzie ilość liczb zostanie podana najpierw w pierwszym wierszu) do tablicy statycznej jednowymiarowej typu int o rozmiarze 100 oraz posortuje dany ciąg  rosnąco (czyli od najmniejszej liczby do największej) używając metody sortowania bąbelkowego.

Nie zakładamy tutaj sytuacji błędnych.*/


#include <stdio.h>
#define SIZE 100

void bubble_asce(int tab[], int length);
void print_tab(int tab[], int tab_size);

int main()
{   // Variables
    int k;
    int num;
    int user_tab[SIZE];
    int full_tab[SIZE];
    int length;

    //User enter how many elements in array
    printf("Podaj liczbe naturalna <=100: \n");
    scanf("%d", &num);

    //Check num
    if(num<=0)
    {
        printf("BŁĄD");
        return 0;
    }
    else if(num>=SIZE)
    {
        printf("BŁĄD");
        return 0;
    }

    //User enter value to array
    printf("Please enter value to array \n");
    for (k=0; k<num; k++) {
      scanf("%d", &user_tab[k]);
    }

    length=k;
    printf("Length or user array is: %d\n", length);

    printf("Your array before sorting\n");
    print_tab(user_tab, k);


    //Function call
    bubble_asce(user_tab, length);


    //Print array ascending
    printf("Array ascending:\n");
    for (k=0; k<length; k++)
    {
        printf("tab[%d]=%d\n",k, user_tab[k]);
    }
    

    return 0;
}

void bubble_asce(int tab[], int length)
{   int i, j, temp;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length-1; j++)
        {
            if(tab[j]>tab[j+1])
            {
                temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
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