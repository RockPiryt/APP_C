#include <stdio.h>


int main(void)
{
    int array[]= {1,2,3,4,5,6,7,8,9,10};
    int array_length=10;

    int even_array[array_length];
    int odd_array[array_length];

    //Add odd numbers to array
    int odd_count = 0;
    for(int i=0; i<array_length; i++)
    if (array[i] % 2 ==1)
    {
        odd_array[odd_count]= array[i];
        odd_count++;
    }

    //Add even numbers to array
    int even_count = 0;
    for(int i=0; i<array_length; i++)
    if (array[i] % 2 == 0)
    {
        even_array[even_count]= array[i];
        even_count++;
    }

    //Print odd array
    for (int i=0; i<odd_count; i++)
    { 
        printf("%d ", odd_array[i]);
    }

    printf("\n");
    
    //Print even array
    for (int i=0; i<even_count; i++)
    { 
        printf("%d ", even_array[i]);
    }

    return 0;
}