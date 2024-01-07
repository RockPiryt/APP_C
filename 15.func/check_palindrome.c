/*Napisz funkcje o nazwie czy_palindrom, który na wejście przyjmuje tablicę znaków oraz liczbę naturalną n oznaczającą długość tej tablicy i zwraca wartość 0 kiedy napis (podany w tabeli) jest palindromem lub 1 w przeciwnym przypadku.

Napisz i wyślij wyłącznie funkcję!!! Nie umieszczaj żadnych plików nagłówkowych!!!*/

#include <stdio.h>
#include <string.h>

int czy_palindrom(char *word, int n);


int main()
{
    char word[100];

    //User enter word
    scanf("%s", &word); 

    //Check word length
    int n = strlen(word);
    printf("Word length: %d\n", n);

    //Call function
    czy_palindrom(word, n);

    return 0;
}

int czy_palindrom(char *word, int n)
{
    
    char reversed_word[100];
    char original_word[100];

    
    //Copy word to reversed word to not change the original word
    strcpy(original_word,word);	

    //Reverse word
    int end = n-1;
    for(int i=0;i<n-1;i++)
    {
        char temp = word[i];
        word[i] = word[end];
        word[end] = temp;
        end--;
    }

    //Save reversed word to new matrix reverse_word
    for(int i=0; i<=n; i++)
    {
        reversed_word[i] = word[i];
    }
    // //Print reversed word
    printf("Reversed word: %s \n", reversed_word);

    // Porównywanie łańcuchów orginalnego i odwróconego
    if(strcmp(original_word,reversed_word) == 0)
    {
        printf("TAK");
        return 0;
    }
    else
    {
        printf("NIE");
        return 1;
    }

}

