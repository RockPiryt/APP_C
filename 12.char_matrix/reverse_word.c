#include <stdio.h>
#include <string.h>

#define SIZE 100


int main()
{
    char word[SIZE];
    char reverse_word[SIZE];
    int i;
    int length;
    int middle;
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
        temp=word[i];//index 0 ze słowa przypisuje do temp, żeby nie nadpisać pierwotnej tablicy
        word[i]=word[end];// zamieniam index 0 z ostatnim indexem
        word[end]=temp;
        end--;
    }

    printf("%s\n", word);
    // length=strlen(word);
    // for(i=0; i<length; i++)
    // {
    //     reverse_word[i] = word[i];
    // }
    // printf("%s", reverse_word);
    // printf("%s", reverse_word);

    return 0;
}