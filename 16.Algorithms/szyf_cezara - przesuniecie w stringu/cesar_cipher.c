#include <stdio.h>

int main()
{   
    char array[100];//string array
    int option;
    int shift;

    //User enter string to array
    printf("Enter a string:\n");
    fgets(array, 100, stdin);

    //User enter string to array
    printf("Enter a shift:\n");
    scanf("%d", &shift);

    //Menu
    printf("Choose option:\n");
    printf("1-encryption\n");
    printf("2- decryption\n");
    scanf("%d", &option);

    switch (option)
    {
    //Encryption
    case 1:
        for(int i=0; (i<100 && array[i]!='\0'); i++)
        {
            if(array[i]==' ')
            {
                continue;
            }
            array[i] = array[i]+shift;
        }
        printf("%s", array);
        break;

    //Decryption
    case 2:
        for(int i=0; (i<100 && array[i]!='\0'); i++)
        {
            if(array[i]==' ')
            {
                continue;
            }
            array[i] = array[i]-shift;
        }
        printf("%s", array);
        break;

    //Wrong option
    default:
        printf("Invalid option!", option);
        break;
    }

    return 0;
}