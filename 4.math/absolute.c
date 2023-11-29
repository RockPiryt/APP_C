#include <stdio.h>

int main()
{
    float num;
    float abs;

    printf("Enter number:\n");
    scanf("%f",&num);
    
    /*If statement
    if(num>=0)
        abs=num;
    else
        abs=-num;
    */

    // conditional assignment
    abs=(num>=0)?num:-num;
    
    printf("[%0.2f]=%0.2f",num, abs);
    
    return 0;
}