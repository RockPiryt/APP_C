#include <stdio.h>

// Program to change small letter to big letter
int main()
{   char c;

    while((c=getchar())!=EOF)
    {
        putchar(c + 'A'-'a');
    }

    return 0;
}

//big_letter_data.txt