// Save reversed word to new matrix

#include <stdio.h>
#include <string.h>

#define SIZE 100


int main()
{
    char word[SIZE];
    char reversed_word[SIZE];
    int i;
    int length;
    int end;
    char temp;

    //User enter word
    printf("Enter word \n");
    scanf("%s", &word); 
    printf("User word: %s \n", word);

    //Copy word to reversed word to not change the original word
    strcpy(reversed_word,word);	//rev will be used to check palindrome

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
    printf("Original word after for loop: %s \n", reversed_word);

    // //Save reverserd word to new matrix reverse_word
    // for(i=0; i<=length; i++)
    // {
    //     reversed_word[i] = word[i];
    // }

    // //Print reversed word
    printf("Reversed word: %s \n", word);

    // Porównywanie łańcuchów - tu mi narazie porównuje przekształcony string z reversed_word więc zawsze będzie zgodnośc jak wczytać oryginał word?
    if(strcmp(word,reversed_word) == 0)
    {
        printf("Palindrome = The same words.");
    }
    else
    {
        printf("Words are not the same");
    }


    return 0;
}