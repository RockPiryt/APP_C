/*Napisz program, który będzie zawierał funkcję MinMax. Funkcja ta ma przyjmować tablicę liczb całkowitych (wraz z ich rozmiarem podanym na początku programu) oraz zwracać ma jednocześnie najmniejszy oraz największy element tej tablicy. Funkcja ta ma wywoływać zaimplementowane przez użytkownika funkcje min i max odpowiadające za wyszukiwanie najmniejszego oraz największego elementu tablicy.

Skorzystaj z wersji wskaźnikowej i adresów funkcji.

Przetestuj tę funkcję w funkcji głównej main.

Nie zapomnij przesłać zadania do oceny i sprawdzenia koledze/koleżance..*/
/*
Sample Input:
5
1 2 3 4 5
Sample Output:1 5
*/

#include <stdio.h>
#include <stdlib.h>


void print_tab(int tab[], int tab_size);
int *MinMax(int array[], int lenght);


int main()
{  
    int n;

    //User enter value between 1 and 99
    printf("Please enter value between 1 and 99: \n");
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
    for (int i=0; i<n; i++) {
      scanf("%d", &tab[i]);
    }

    //Print array
    printf("User array:\n");
    print_tab(tab,n);
    
    // Call function which return 2 values
    int *two_values_array = MinMax(tab, n);
    printf("Min: %d, Max: %d", two_values_array[0], two_values_array[1]);

    // Free memory
    //free(two_values_array);

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

int *MinMax(int array[], int lenght)
{   
    //Array for 2 values - min and max - pointer for returning value
    //int *min_max_array = malloc(sizeof(int) * 2);

    static int min_max_array[2];

    //Find min value
    int min=array[0];
    for(int k=0;k<lenght;k++)
    { 
      if(array[k]<min)
        min=array[k];
    }

    //Find max value
    int max=array[0];
    for(int j=0; j<lenght; j++)
    { 
      if(array[j]>max)
        max=array[j];
    }

    //Add min and max values to array
    min_max_array[0] = min;
    min_max_array[1] = max;

    return min_max_array ;
}

