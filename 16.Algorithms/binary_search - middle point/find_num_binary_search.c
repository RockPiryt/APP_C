/*Napisz program, który wykorzystując metodę dziel i zwyciężaj obliczy sumę elementów dynamicznie tworzonej
tablicy jednowymiarowej podanej przez użytkownika.*/

#include <stdio.h>
#include <stdlib.h>


int *allocate_array(int n); //Allocate space for array, return array
int *user_fill_array(int n); // Fill array with values, return array
int print_array(int *array, int n ); // Print array
int *bubble_asce(int *array, int n); // Sort unsorted array ascending, return array
int binary_search(int array[], int x, int l, int r);// to find index o number, which we are looking for

int main()
{   int *unsorted_array;
    int *sorted_array;
    int summary;
    int n=0;
    int num;

   //User enter size of array
    printf("Please enter an array length:\n");
    scanf("%d", &n);

    //Check user value
    if (n<=0)
    {
      printf("Error");
      return 0;
    }
    else
        //Call function to create and fill array
        unsorted_array =  user_fill_array(n);
    
    // Print user unsorted array
    printf("User unsorted array:\n");
    print_array(unsorted_array, n);

    // Call function to sort array
    sorted_array = bubble_asce(unsorted_array, n);

    printf("\n");
    
     // Print user sorted array
    printf("User sorted array:\n");
    print_array(sorted_array, n);

    printf("\n");

    
    //User enter number to find in array
    printf("Please number to find in array:\n");
    scanf("%d", &num);

    int end = n-1;
    int result = binary_search(sorted_array, num, 0, end);//0 start index, "end" end index
    printf("Your number %d is in array(1-YES, 0-NO): %d\n", num, result);

    //Release space memory
    free(sorted_array);


    return 0;
}


////////////////////////////////////////////////

//FUNCTION Allocate space for array, return array
int *allocate_array(int n)
{

    //Allocate space memory for array
    int *array = (int*)malloc(n * sizeof(int));

    //Check if array has allocated memory
    if (array == NULL)
    {
      printf("BŁĄD");
      return 0;
    }
    else
        return array;
}

// FUNCTION Fill array with values, return array
int *user_fill_array(int n)
{
    //Call function
    int *user_array = allocate_array(n);

    //USER Fill an array with values!!
    printf("Please enter value to array \n");
    for (int k=0; k<n; k++) 
    {
      scanf("%d", &user_array[k]);
    }

    return user_array;
}

//FUNCTION Print array
int print_array(int *array, int n )
{   
    //Print array
    for (int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}
//FUNCTION Sort unsorted array ascending, return array
int *bubble_asce(int *array, int n)
{   int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return array;
}
//FUNCTION Sum values in array
int calc_sum(int *array, int n)
{   
    int sum = 0;
    
    for(int i=0; i<n; i++)
    { // add values
        sum += array[i];
    }
    return sum;
}

// FUNCTION to find index o number, which we are looking for
int binary_search(int array[], int x, int l, int r)
{
    // Index of middle point
    int mid = l + (r - l) / 2;
    
    // When we search all array and didn't find x
    //if (l > r) return -1;
    if (l > r) return 0;
    
    //Check the indexes in array
    if (array[mid] == x) //middle point=x
        //return mid;
        return 1;
    else if (array[mid] > x)// x in left side of middle point
        return binary_search(array, x, l, mid - 1);
    else// x in right side of middle point
        return binary_search(array, x, mid + 1, r);


}

