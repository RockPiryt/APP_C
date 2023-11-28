/*
Przepis na ciasteczka jest następujący:

1,5 szklanki cukru
1 szklanka masła
2,75 szklanki mąki
Z uzyskanej porcji można upiec 48 ciasteczek. Napisz program, który będzie pytał użytkownika ile ciasteczek chce upiec, a następnie wyświetli ile szklanek każdego ze składników będzie potrzebował użytkownik, aby upiec wskazane ciasteczka.

Sample Input:

48
Sample Output:

Ilość cukru: 1.50
Ilość masła: 1.00
Ilość mąki: 2.75
*/

#include <stdio.h>
int main()
{
    // Recipe
    int cookie_recipe=48; 
    float cup_sugar=1.5;
    float cup_butter=1.5;
    float cup_flour=2.75;
    

    int user_cookie;
    float user_sugar, user_flour, user_butter;
    float percent;


    // Ask user about cookie amount
    printf("Enter how many cookie do you want:\n");
    scanf("%f", &user_cookie);//6

    // Calculate amount of ingredients
    printf("%d\n", cookie_recipe);
    printf("%d\n", user_cookie);
    percent = user_cookie/cookie_recipe; //  6/48
    printf("%f", percent);
    user_sugar=percent*cup_sugar;
    user_butter=percent*cup_butter;
    user_flour=percent*cup_flour;

    /*Program show how many ingredients user need to buy*/
    printf("Sugar: %.2f\n", user_sugar);
    printf("Butter: %.2f\n", user_butter);
    printf("Flour: %.2f\n", user_flour);

    return 0;

}