/*Napisz program w języku ANSI C, który sprawdzi czy dane słowo jest palindromem.

Palindrom to słowo, które zapisane wspak jest takim samym słowem.


Znaki wczytujemy do tablicy statycznej typu char (zakładamy dla prostoty, że tablica ta jest 100-elementowa, następnie wczytujemy znaki, aż do napotkania końca znaku pliku (można to wywołać przy pomocy kombinacji klawiszy ctrl+d).

Zakładamy, że wszystkie znaki są z małej litery (nie rozpatrujemy przypadku, że występują duże litery).

Jako rezultat program ma wypisać komunikat TAK, jeśli jest to palindrom lub NIE w przeciwnym przypadku.*/

#include <stdio.h>
#include <string.h>

#define SIZE 100


int main()
{
    char user_word[SIZE];
    char reverse_word[SIZE];
    int i;
    int length;
    int middle;
    char temp;

    //User enter word
    printf("Enter word \n");
    scanf("%s", &user_word); 

    //Reverse word
    length = strlen(word);
    end = length-1;

    bool check_palidrome(char word[])
    {

    }


    return 0;
}