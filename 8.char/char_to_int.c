#include <stdio.h>

// Program to print char for endless
int main()
{   char c;

    while((c=getchar())!=EOF)
    {
        printf("%d\n",c);
    }

    return 0;
}

//data_char_in.txt as data