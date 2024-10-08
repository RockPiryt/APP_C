#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{   char c;
    char string[1000];
    int index=0;

    //User input multiline text
    printf("Please enter multiline text. At the end must be EOF (ctrl+Z)\n");
    while((c=getchar()) != EOF)
    {
         string[index] = c;
         ++index;
    }

    printf("User text:\n%s", string);

    int alphabet = 0; 
    int number = 0;
    int lower = 0;
    int upper = 0;
    int spaces = 0;
    int control = 0;

    for (int i = 0; string[i] != '\0'; i++) 
    {
     
        // check for alphabets
        if (isalpha(string[i]) != 0)
            alphabet++;
 
        // check for decimal digits
        else if (isdigit(string[i]) != 0)
            number++;
        
        
        // check for spaces
        else if (isspace(string[i]) != 0)
            spaces++;
        
        // check for control
        else if (iscntrl(string[i]) != 0)
            control++;

        // check for lower
        if (islower(string[i]) > 0)
            {
            //printf("%c\n", string[i]);
            lower++;
            //printf("%d\n", lower);
            }
        
        // check for upper
        else if (isupper(string[i]) > 0)
            upper++;
    }
 
    printf("Alpha == %d\n"
            "Digits == %d\n"
            "Lower == %d\n"
            "Upper == %d\n"
            "Spaces == %d\n"
            "Control == %d\n",
           alphabet, number, lower, upper, spaces, control);
 
    return 0;
}

