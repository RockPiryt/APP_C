#include <stdio.h>

// Program to check if char is number
// If true (char=number) print 1
// Else print 0

int main()
{   char c;

    while((c=getchar())!=EOF)
    {
        if(c>='0' && c<='9')
            putchar('1');
        else
            putchar('0');
    }

    return 0;
}

//if_number_data.txt