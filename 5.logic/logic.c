#include <stdio.h>

int main()
{
    int t=1;
    int f=0;
    
    //negation
    printf("negation/negacja\n");
    printf("!%d=%d\n", t, !t);//negation true
    printf("!%d=%d\n", f, !f);//negation false
    printf("\n");
    
    //or/alternatywa ||
    printf("or/alternatywa\n");
    printf("%d||%d: %d\n", t,t,t||t);
    printf("%d||%d: %d\n", f,f,f||f);
    printf("%d||%d: %d\n", t,f,t||f);
    printf("%d||%d: %d\n", t,t,f||t);
    printf("\n");

    //and koniunkcja &&
    printf("and/koniunkcja\n");
    printf("%d&&%d: %d\n", t,t,t&&t);
    printf("%d&&%d: %d\n", f,f,f&&f);
    printf("%d&&%d: %d\n", t,f,t&&f);
    printf("%d&&%d: %d\n", t,t,f&&t);
    printf("\n");

    //xor
    printf("xor\n");
    printf("%d xor %d: %d\n", t,f, (t&&!f)||(!t&&f));
    printf("%d xor %d: %d\n", f,t, (t&&!f)||(!t&&f));
    printf("%d xor %d: %d\n", t,t, (t&&!t)||(!t&&t));
    printf("%d xor %d: %d\n", f,f, (f&&!f)||(!f&&f));

    return 0;
}