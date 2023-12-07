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
    char word[SIZE];
    char reverse_word[SIZE];
    int i;
    int length;
    int end;
    char temp;

    //User enter word
    printf("Enter word \n");
    scanf("%s", &word); 

    //Reverse word
    length = strlen(word);
    end = length-1;

    for(i=0;i<end;i++)
    {
        temp=word[i];
        word[i]=word[end];
        word[end]=temp;
        end--;
    }

    //Save reverserd word to new matrix reverse_word
    for(i=0; i<=length; i++)
    {
        reverse_word[i] = word[i];
    }

    // //Wyświetlenie słów
    printf("User word: %s \n", word);
    printf("Revert word: %s \n", reverse_word);

    // // Porównywanie łańcuchów
    if(strcmp(word,reverse_word) == 0)
    {
        printf("The same words. User word: %s Revert_word: %s", word, reverse_word);
    }
    else
    {
        printf("Words are not the same");
    }

    return 0;
}