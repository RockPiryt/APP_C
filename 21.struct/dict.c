/*Napisz program, który będzie zawierał powyższą strukturę, 
która jest reprezentacją słowa w słowniku.
W funkcji głównej program ma pobrać liczbę naturalną n, 
a następnie wczytać n par słów.
Następnie program ma wypisać n par wprowadzonych 
przez użytkownika.
Program powinien mieć zdefiniowaną dynamicznie 
tablicę typu dicwords.
Pamiętaj o wyciekach pamięci.
Tablicę napisów powinny 
być tworzone dynamicznie przy pomocy funkcji realloc.*/

#include <stdio.h>
#include <stdlib.h>


// typedef struct 
// {
//   char *originalString;
//   char *translateString;
// }Dicwords;


typedef struct 
{
  char originalString[50];
  char translateString[50];
}Dicwords;

int main()
{   
    //Simple struct creation
    Dicwords w1 = {"dom", "house"};
    printf("original word:%s translated word: %s\n",w1.originalString,w1.translateString);

    //User enter size of array
    int n;
    printf("Enter amount words pair: ");
    scanf("%d", &n);

    //To change value in original struct
    Dicwords *p_dicwords;//pointer to struct

    //Allocate space memory for array of structs
    p_dicwords = malloc(sizeof(Dicwords) * n);

    //Fill struct values
    for(int i=0; i<n; i++)
    {   printf("Enter oryginal word: ");
        scanf("%s", p_dicwords[i].originalString);// bez & bo to array
        printf("Enter translated word:  ");
        scanf("%s", p_dicwords[i].translateString);
    }

    //Print Array of struct
    for(int i=0; i<n; i++)
    {
        printf("original word:%s translated word: %s\n",p_dicwords[i].originalString,p_dicwords[i].translateString);
    }

    //Release memory
    free(p_dicwords);
    return 0;
}