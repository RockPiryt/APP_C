// Reverse string using recursion

#include <stdio.h>


void print_reverse(char *string);

int main()
{   
    char string[] = "Some text to reverse";

    print_reverse(string);


    return 0;
}

void print_reverse(char *string)
{
    if(*string !='\0')// base case- till end of string
    {
        print_reverse(string+1); // go through all char in string
        printf("%c", *string); //print current letter
    }
}