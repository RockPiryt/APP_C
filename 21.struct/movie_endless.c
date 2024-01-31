#include <stdio.h>
#include <stdlib.h>

typedef struct film
{
    char tytul[40];
    int ocena;
}film;

int main(void)
{   
    //Initialize pointer to array
    film *filmy;

    //Create struct
    film pogon = {"pogon", 2};
    film lechia = {"lechia", 5};

    //Allocate space memory for array
    filmy = (film*)malloc(0*sizeof(film));

    //Fill struct values
    for(int i=0; i<2; i++)
    {
        filmy = realloc(filmy,(i+1) * sizeof(film));
        if(i == 0)
          filmy[i] = pogon;
        else
          filmy[1] = lechia;  
    }
    //Printowanie array
    for(int i=0; i<2; i++)
    {
        printf("%s %d\n",filmy[i].tytul,filmy[i].ocena);
    }
    //Release memory
    free(filmy);

    return EXIT_SUCCESS;
}