#include <stdio.h>
#include <stdlib.h>//exit()
#include <stdbool.h>//bool value

//Poprawić zaokrąglenie float i zmienić na symbole zamiast liczb

int main()
{   int choice;
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
        printf("1=+ to Addtion(dodawanie)\n");
        printf("2=- to Subtraction(odejmowanie)\n");
        printf("3=/ to Division(dzielenie)\n");
        printf("4=* to Multiplication (mnożenie)\n");
        printf("5=q to Quit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        //Addtion
        case 1:
        printf("You choose Addtion\n");
        calc= num_1+num_2;
        printf("Addtion: %d+%d = %.2f", num_1, num_2, calc);
        break;

        //Subtraction
        case 2:
        printf("You choose Subtraction\n");
        calc= num_1-num_2;
        printf("Subtraction: %d-%d = %.2f", num_1, num_2, calc);
        break;

        //Division
        case 3:
        printf("You choose Division\n");
        calc= (float) num_1/num_2;
        printf("Division: %d/%d = %.2f", num_1, num_2, calc);
        break;

        //Multiplication
        case 4:
        printf("You choose Multiplication\n");
        calc= num_1*num_2;
        printf("Multiplication: %d*%d = %d", num_1, num_2, calc);
        break;

        //Quit
        case 5:
        printf("You choose to Quit\n");
        exit(0);
        }
    }



    return 0; 
}