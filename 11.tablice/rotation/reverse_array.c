#include <stdio.h>

void reverse (int *array, int length);

int main(void)
{   
    //the same situation odd or even numbers in array
    int my_array[] = {1,2,3,4,5,6,7,8,9};
    int length = 9;
    
    reverse(my_array, length);

    printf("Reversed array:\n");
    for (int i=0; i <length; i++)
    {
        printf("%d ", my_array[i]);

    }

}

void reverse (int *array, int length)
{
    int temp=0; // always for swaping values

    for (int i=0; i<(length / 2); i++)
    {
    temp = array[i];
    array[i] = array[length-i-1];
    array[length-i-1] = temp;
    }
}