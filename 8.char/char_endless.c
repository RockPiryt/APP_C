#include <stdio.h>

// Program to print char for endless
int main()
{   char c;

    while((c=getchar())!=EOF)
    {
        putchar(c);
    }

    return 0;
}

//data_in.txt
//data_out.txt