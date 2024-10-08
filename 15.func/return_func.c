#include <stdio.h>

int GetNumber()
{
    int num;
    printf("Enter number greater than 0:\n");

    do
    {
        scanf("%d", &num);
        if (num<=0)
        {
            printf("Invalid number. Please enter number greater than 0.\n");
        }
    } while (num<=0);

    return num;
    
}



int main()
{   
    int num1,num2;

    num1 = GetNumber();
    num2 = GetNumber();

    printf("%d+%d=%d", num1,num2, num1+num2);

    return 0;
}