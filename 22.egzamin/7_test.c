#include <stdio.h>
#include <string.h>
//Zadeklarować zmienną wskaźnikowa ptrBook i ustawić na zmienną new_book
struct Book
{
    char title[50];
    float price;
};


int main()
{   
    struct Book new_book = {"Programing", 45.5};

    //Change title to "Coding"
    printf("Book title: %s\n", new_book.title);

    strcpy(new_book.title, "Coding");
    printf("Book title after changing: %s\n", new_book.title);

    //Make pointer to new_book struct
    struct Book *ptr_book;//WAŻNE
    ptr_book = &new_book;

    //Change price
    printf("Initial book price: %f\n", new_book.price);
    ptr_book->price = new_book.price/2;//WAŻNE
    printf("Book a new price: %f\n", new_book.price);




    
    return 0;
}