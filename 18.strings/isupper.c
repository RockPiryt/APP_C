#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{   
    //char string_test[] = "Some Random Text to AAAnalyze";
    char string_test[] = "Nowy Rok juz jest";

    printf("User text:\n%s", string_test);
    int lower = 0;
    for (int i = 0; string_test[i] != '\0'; i++) 
    {
     
        
        // check for lower
        if (islower(string_test[i]) > 0)
            {
            printf("%c\n", string_test[i]);
            lower++;
            printf("%d\n", lower);
            }
        
        // // check for upper
        // else if (isupper(string_test[i]) > 0)
        //     upper++;
    }
    printf("Lower == %d\n",lower);
    return 0;
}