/*
Napisz program, który pobierze od użytkownika imię oraz liczbę rzeczywistą określający jego zarobki.

Następnie program ma wyswietlić imię podane przez użytkownika oraz dwukrotność jego zarobków.

Zarobki zaokrąglamy na drugiego miejsca po przecinku.

Sample Input:

Jan
2000
Sample Output:

Jan: 4000.00
*/

#include <stdio.h>
int main()
{
    char name[20]; 
    float salary;

    /* User enters name and salary*/
    printf("Enter name:\n");
    gets(name);
    printf("Enter salary:\n");
    scanf("%f", &salary);



    /*Program show name and 2xsalary*/
    printf("%s: %.2f", name, 2*salary);

    return 0;

}