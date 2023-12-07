/*Napisz program w języku ANSI C, który sprawdzi czy dane słowo jest palindromem.

Palindrom to słowo, które zapisane wspak jest takim samym słowem.

Przykładem palindromu jest słowo: kajak.

Znaki wczytujemy do tablicy statycznej typu char (zakładamy dla prostoty, że tablica ta jest 100-elementowa, następnie wczytujemy znaki, aż do napotkania końca znaku pliku (można to wywołać przy pomocy kombinacji klawiszy ctrl+d).

Zakładamy, że wszystkie znaki są z małej litery (nie rozpatrujemy przypadku, że występują duże litery).

Jako rezultat program ma wypisać komunikat TAK, jeśli jest to palindrom lub NIE w przeciwnym przypadku.*/

#include <stdio.h>
#include <string.h>

#define SIZE 100


int main()
{   int i;//licznik do odwrócenia tablicy
    int len;//długość stringa
    int left,right; // indexy
    char temp; //zmienna znakowa
    char word[SIZE];//słowo wpisywane przez usera
    char revert_word[] = "rumun";// przykładowe słowo do porównania
    char reverse_word[SIZE];// słowo odwrócone

    //User enter word
    printf("Enter word \n");
    scanf("%s", word); // bez & bo tablica
    //fgets(word, SIZE-1,stdin);
    //printf("Adres zmiennej %d", &word);

    // // Długość łańcucha
    len=strlen(word);
    printf("%d\n", len);

    // left = 0; // set left index at 0  
    // right = len; // set right index len - 1  
    // // use for loop to store the reverse string  
    // for (i = left; i <right; i++)  
    // {   temp = word[i]; //odczyt pierwszego indexu z word, przypisany do temp żeby nie mieszać w orygnialnym słowie
    //     printf("%c", temp);
    //     word[i] = reverse_word[right];//Pierwszy index stajesię ostatnim indexem
    //     reverse_word[right]  = temp;
    //     right--; 
    //     printf("%d ", reverse_word[i]);
    // }  



    // //Wyświetlenie słów
    // printf("User word: %s \n", word);
    // printf("Revert word: %s \n", reverse_word);

    // // Porównywanie łańcuchów
    //if(!strcmp(word,revert_word))
    // if(strcmp(word,revert_word) == 0)
    // {
    //     printf("The same words. User word: %s Revert_word: %s", word, revert_word);
    // }
    // else
    // {
    //     printf("Words are not the same");
    // }

    return 0;
}