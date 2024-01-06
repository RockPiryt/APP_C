#include <stdio.h>
#include <stdlib.h>


//Function declaration
int *create_array(int n);
void print_array(int *array, int tab_size);

int find_max(int *array, int tab_size);
void average();
void odd_even();

int main()

{   int *user_array;
    int n;
    int value_max;

    //User enter value
    printf("Enter value: \n");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Error");
        return 1;
    }
    
    //Create matrix
    user_array = create_array(n);

    //Find max value in array
    value_max = find_max(user_array,n); 
    printf("High value is: %d", value_max);

    free(user_array);

    return 0;
}

int *create_array(int n)
{   
    int *array = (int*)malloc (n * sizeof(int));
    //int tab[100];
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

int find_max(int *array, int tab_size)
{   
    //initial value
    int max=array[0];

    for(int j=0; j<tab_size; j++)
    { //check value if is max
      if(array[j]>max)
        max=array[j];
    }
    return max;
}

void average()
{
    int a_num=5;
    printf("Average is: %d", a_num);
}
void odd_even()
{   int odd=1;
    int even=0;//parzysty

    if (odd == 1 && even == 1)
    {
        printf("Matrix has odd end even digits");
    }
    else if(odd == 1 && even == 0)
    {
        printf("Matrix has only odd digits");
    }
    else
    {
        printf("Matrix has only even digits");
    }
}
