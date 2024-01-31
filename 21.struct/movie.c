/*Teraz rozważmy, że chcemy dodawać na bieżąco nowe filmy 
przez użytkownika. Jeżeli użytkownik z góry będzie wiedział 
ile filmów chce dodać to może skorzystać z 
funkcji malloc do utworzenia tablicy struktur typu film.*/

/*Enter size of arrray: 2        
Enter title: Gladiator
Enter rating: 8
Enter title: Thor
Enter rating: 2
Gladiator 8
Thor 2*/



#include <stdio.h>
#include <stdlib.h>

typedef struct film
{
    char tytul[40];
    int ocena;
}film;

int main(void)
{   //Initialize pointer to array
    film *filmy;

    //User enter size of array
    int n;
    printf("Enter size of arrray: ");
    scanf("%d", &n);

    //Allocate space memory for array
    filmy = (film*)malloc(n*sizeof(film));

    //Fill struct values
    for(int i=0; i<n; i++)
    {   printf("Enter title: ");
        scanf("%s", filmy[i].tytul);// bez & bo to array
        printf("Enter rating: ");
        scanf("%d", &filmy[i].ocena);
    }


    //Print Array of struct
    for(int i=0; i<n; i++)
    {
        printf("%s %d\n",filmy[i].tytul,filmy[i].ocena);
    }
    //Release memory
    free(filmy);

    return EXIT_SUCCESS;
}