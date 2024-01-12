// Find max value in array using recursion

#include <stdio.h>


int max(int *array, int n);

int main()
{   
    int array[] = {4,6,7,1,3,2,9,5,6,7};
    int length = 10;
    int max_value;

    max_value = max(array, length);
    printf("Max value recursion function: %d", max_value);

    return 0;
}

int max(int *array, int n)
{   
    if (n == 1) return array[n-1];

    int possible_max = max(array, n-1);// start from end of array
    
    if (possible_max > array[n-1]) return possible_max;
    else return array[n-1];
}
