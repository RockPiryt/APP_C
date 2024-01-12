#include <stdio.h>

// Recursion func
int find_max(int *array, int m, int n) 
{   
    

    // One element in array max is this element
    if (m == n) 
    {  
        return array[m];
    }
    else
    {
        int max = find_max(array, m, n-1); //last index = max - set default value
        if(max < array[n-1]) //compare current max with analyzed value from n
        {
            max=array[n-1];//set new max
        }
        return max;
    }
}

int main() 
{
    // Array
    int array[] = {3,2,6,12,2,4,8,7};
    int length = sizeof(array) / sizeof(array[0]);


    int m=0;//first index
    int n=length;//last index

    // Call func
    int max = find_max(array, m, n - 1);

    
    printf("max value in array: %d\n", max);

    return 0;
}
