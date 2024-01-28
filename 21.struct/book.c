#include <stdio.h>
#include <string.h>
//Zadeklarować zmienną wskaźnikowa ptrBook i ustawić na zmienną new_book
struct Book
{
    char title[50];
    float cena;
};


int main()
{   
    struct Book new_book = {"Programing", 45.5};

    //Change title to "Coding"
    printf("Book title: %s\n", new_book.title);
    strcpy(new_book.title, "Coding");
    printf("Book title after changing: %s\n", new_book.title);

    

    
    return 0;
}