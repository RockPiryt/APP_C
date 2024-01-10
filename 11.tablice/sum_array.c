#include <stdio.h>
#include <stdlib.h>

//Function declaration
int *create_array(int n);
void print_array(int *array, int tab_size);
int calc_sum(int *array, int tab_size);

int main()

{   int *user_array;
    int n;
    int summary;

    //User n - size of array
    printf("Enter size of array: \n");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Error");
        return 1;
    }
    
    //Create matrix
    user_array = create_array(n);


    //Calc summary of array values
    summary = calc_sum(user_array,n); 
    printf("summary is: %d\n", summary);

    free(user_array);

    return 0;
}

int *create_array(int n)
{   
    int *array = (int*)malloc (n * sizeof(int));
    int value;

    // User enter value to matrix
    printf("Add value:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
        array[i] = value;
    }

    //Call Print tab function
    print_array(array,n); 

    return array;
}

void print_array(int *array, int tab_size)
{
    printf("Your matrix:\n");
    for(int i=0;i<tab_size;++i)
    {
    printf("%d ", array[i]);
    }
    printf("\n");
}



int calc_sum(int *array, int tab_size)
{   
    int sum = 0;
    
    for(int i=0; i<tab_size; i++)
    { // add values
        sum += array[i];
    }
    return sum;
}