/*Napisz program, który pobierze od użytkownika liczby całkowite (zapisane w jednym wierszu) do tablicy jednowymiarowej typu int o wymiarze 100, a następnie wypisze liczbę największą oraz najmniejszą tej listy.*/
/*
Sample Input:
5
1 2 3 4 5

Sample Output:

min == 1
max == 5/


*/

#include <stdio.h>


void print_tab(int tab[], int tab_size);
int find_max(int array[], int lenght);
int find_min(int array[], int lenght);


int main()
{  
    int n;
    //int user_array[8]={4,5,1,23,5,8,99,2};;

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
    //print_tab(user_array,8);
    
    //Get max value
    int max_array = find_max(tab,n);
    //int max_array = find_max(user_array,8);
    printf("max == %d\n", max_array);

    // //Get min value
    int min_array = find_min(tab,n);
    //int min_array = find_min(user_array,8);
    printf("min == %d", min_array);

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

int find_max(int array[], int lenght)
{
    int j;
    //initial value
    int max=array[0];

    for(j=0; j<lenght; j++)
    { //check value if is max
      if(array[j]>max)
        max=array[j];
    }
    return max;
}

int find_min(int array[], int lenght)
{
    int k;
    //initial value
    int min=array[0];

    for(k=0;k<lenght;k++)
    { //check value if is min
      if(array[k]<min)
        min=array[k];
    }
    return min;
}


