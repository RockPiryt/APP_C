#include <stdio.h>
#include <stdlib.h>//exit()
#include <stdbool.h>//bool value

int main()
{   char operator;
    int num_1, num_2;
    float calc;

    //User enter value
    printf("Please enter a number 1: ");
    scanf("%d", &num_1);
    printf("Please enter a number 2: ");
    scanf("%d", &num_2);
    


    //Ask user about calculation - menu
    while(true)
    {   
        //Show menu
        printf("+ to Addition(dodawanie)\n");
        printf("- to Subtraction(odejmowanie)\n");
        printf("/ to Division(dzielenie)\n");
        printf("* to Multiplication (mnożenie)\n");
        printf("q to Quit\n");

        //Choose an operator
        printf("Please enter an operator (+ - / *):");
        scanf("%c", &operator);

        switch (operator)
        {
            //Addition
            case '+':
            printf("You choose Addition\n");
            calc = num_1 + num_2;
            printf("Addition: %d+%d = %d\n", num_1, num_2, (int)calc);
            printf("\n");
            break;

            //Subtraction
            case '-':
            printf("You choose Subtraction\n");
            calc = num_1 - num_2;
            printf("Subtraction: %d-%d = %d\n", num_1, num_2, (int)calc);
            printf("\n");
            break;

            //Division
            case '/':
            printf("You choose Division\n");
            calc = (float) num_1 / num_2;
            printf("Division: %d/%d = %.2f\n", num_1, num_2, calc);
            printf("\n");
            break;

            //Multiplication
            case '*':
            printf("You choose Multiplication\n");
            calc = num_1 * num_2;
            printf("Multiplication: %d*%d = %d\n", num_1, num_2, (int)calc);
            printf("\n");
            break;

            //Quit
            case 'q':
            printf("You choose to Quit\n");
            exit(0);

            //Wrong operator
            default:
            printf("'%c' Wrong operator\n", operator);
            break;
        }
    }



    return 0; 
}