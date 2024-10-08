// Reverse string using recursion

#include <stdio.h>


void print_reverse(char *string, int n);

int main()
{   
    char string[] = "Some text to reverse";//20char+\0
    int n = sizeof(string) - 1;
    printf("Length of sting: %i\n", n);

    print_reverse(string, n);


    return 0;
}

void print_reverse(char *string, int n)
{
    if(n != 0)// base case- till end of string
    {
        printf("%c", string[n-1]); //print current letter
        print_reverse(string, n-1); // go through all char in string
    }

}