#include <stdio.h>

// Recursion func
int find_min(int *array, int start, int end) 
{   int min;
    

    // One element in array max is this element
    if (start == end) 
    {  
        return array[start];
    }
    else
    {
        min = find_min(array, start, end-1); //last index = min - set default value
        if(min > array[end-1]) //compare current min with analyzed value from end
        {
            min=array[end-1];//set new min
        }
        return min;
    }
}

int main() 
{
    // Array
    int array[] = {3,2,6,5,2,4,8,7};
    int length = sizeof(array) / sizeof(array[0]);


    int m=0;//first index
    int n=length;//last index

    // Call func
    int min = find_min(array, m, n - 1);

    
    printf("min value in array: %d\n", min);

    return 0;
}
