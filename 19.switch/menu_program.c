#include <stdio.h>
#include <stdlib.h>//exit()
#include <stdbool.h>//bool value
/*Napisz funkcję o nazwie menu, która nie będzie pobierać żadnych argumentów, a wypisze następujące menu:

WITAJ W MOIM PROGRAMIE
WPISZ LICZBE Z MENU
1 - wypisanie liczby INT_MAX
0 - wyjscie z programu
W przypadku wpisania innej opcji program ma ponownie wczytać liczbę od użytkownika. W pozytywnym przypadku funkcja ma zwrócić wybraną opcję (jako liczbę całkowitą).*/

//#define INT_MAX 2147483647
void menu();

int int_max=2147483647;

int main()
{   
    menu();
    
    return 0;
}

void menu()
{
    int choice = 0; 

    while (true)
    {   printf("WITAJ W MOIM PROGRAMIE\n");
        printf("WPISZ LICZBE Z MENU\n");
        printf("1 - wypisanie liczby INT_MAX\n");
        printf("0 - wyjscie z programu\n");

        //printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {   // Wypisanie liczby
            case 1:
            printf("%d", int_max);
            exit(0);

            //Wyjście z programu
            case 0:
            exit(0);

            //Jeżeli inna liczba niż w menu
            default:
            menu();
            break;
        }
    }
}