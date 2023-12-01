#include <stdio.h>
#include <ctype.h>

// Program to check if char is number
// If true (char=number) print 1
// Else print 0

int main()
{   char c;

    while((c=getchar())!=EOF)
    {
        if(isdigit(c))
            putchar('1');
        else
            putchar('0');
    }

    return 0;
}

//ctype_is_digit_data.txt