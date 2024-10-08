/*Napisz program, który będzie zawierał funkcję create_matrix (do tworzenia dynamicznej tablicy dwuwymiarowej) oraz get_matrix (do pobierania danych od użytkownika do utworzonej, dynamicznie tablicy dwuwymiarowej) oraz funkcję print_matrix (do wyświetlenia dynamicznej tablicy dwuwymiarowej). Funkcja ta ma wypisać tablice dwuwymiarową o rozmiarach n × m, i zwrócić jako wynik sumę najmniejszych elementów w wierszach tej tablicy.
W przypadku sytuacji błędnych program ma wypisać komunikat BŁĄD oraz zakończyć działanie. Zadanie zapisz w
repozytorium jako plik zad9.c.*/

#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int cols); //Allocate space for array, return 2D array
int **get_matrix(int rows, int cols); // Fill array with values
void print_matrix(int **array, int rows, int cols); // Print array
int find_min(int **array, int rows, int cols);

int main () 
{   int **array; // variable to store matrix
    int rows;
    int cols;
    int summary;
    
    //User enter size of array
    printf("Please enter rows value:\n");
    scanf("%d", &rows);
    printf("Please enter cols value:\n");
    scanf("%d", &cols);

    //Check user value
    if (rows<=0 && cols<=0)
    {
      printf("error");
      return 0;
    }
    else
        //Call function to create matrix
        array = get_matrix(rows, cols);

    // Print matrix
    print_matrix(array, rows, cols);

    //Calc summary of smallest element in each row
    summary = find_min(array, rows, cols);
    printf("Summary of smallest element in each row: %d\n", summary);



    //Free memory for rows
    for (int i=0; i<rows; i++)
    {
        free(array[i]);
    }
    //Free memory for main pointer to array
    free(array);

    return 0;
}

int **create_matrix(int rows, int cols)
{
    int **matrix;
    matrix = malloc(sizeof(int*) * rows);// allocate memory for main pointer

    for (int i=0; i<rows; i++)
        matrix[i] = malloc(sizeof(int) * cols);// allocate memory for rows(how many cols in one row)

    
    //Check if array has allocated memory
    if (matrix == NULL)
    {
      printf("error");
      return 0;
    }
    else
        return matrix;
}

int **get_matrix(int rows, int cols)
{
    //Call function
    int **filled_array = create_matrix(rows,cols);

    //Fill matrix with user value
    int value;
    printf("Please enter value to your array: \n");
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {   
            scanf("%d",&value);
            filled_array[i][j] = value;
        }
    }
    return filled_array;
}

void print_matrix(int **array, int rows, int cols)
{   
    printf("Your 2D array: \n");
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int find_min(int **array, int rows, int cols)
{
    //initial value
    int sum=0;

    for (int i=0; i<rows; i++)
    {   //initial value min
        int min = array[i][0];

        for (int j=0; j<cols; j++)
        {
            //find min in row
            if(array[i][j] < min)
                min = array[i][j]; // find min in row[0]
        }
        sum+=min;
    }

    return sum;
}