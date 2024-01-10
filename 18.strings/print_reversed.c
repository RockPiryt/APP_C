//Print reverse word
#include <stdio.h>
#include <string.h>

#define SIZE 100


int main()
{
    char word[SIZE];
    int i;

    //User enter word
    printf("Enter word \n");
    scanf("%s", &word); 


    for(i=strlen(word)-1; i>=0;i--)
    {
        printf("%c", word[i]);//1 index to t (bo to ostatnia litera słowa)
    }

    return 0;
}