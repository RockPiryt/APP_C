#include <stdio.h>

int main()
{
    printf("sizeof(int)=%d\n", sizeof(int));//4
    printf("sizeof(short int)=%d\n", sizeof(short int));//2
    printf("sizeof(long int)=%d\n", sizeof(long int));//4
    printf("sizeof(long long int)=%d\n", sizeof(long long int));//8
    printf("sizeof(char)=%d\n", sizeof(char));//1
    return 0;
}