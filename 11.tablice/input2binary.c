/*Napisz program, który dla wczytanej przez użytkownika liczby poda jego reprezentacje binarną.

Wykorzystaj do tego wyłącznie tablice!!!*/

#include <stdio.h>

int dec_bin();

int main()

{   int n;
    int i,j;

    //Tab initialization
    int binaryNum[100];

    //User enter number
    printf("Enter a number: \n");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Error");
        return 0; //for stepik test
    }

    else if(n==0)
    {
        binaryNum[0] = 0;
        printf("%d", binaryNum[n]);
    }
    else
    {

        // Add value to array
        i=0;
        while(n>0)
        {   // storing remainder in binary array 
            binaryNum[i] = n % 2;
            n /= 2;
            i++;
            //printf("%d\n",i);
        }
        // printing binary array in reverse order 
        for (j = i - 1; j >= 0; j--) 
            printf("%d", binaryNum[j]); 
    }
    


    // n=i;
    // printf("\nBinary Value:\n");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d",binaryNum[n-i-1]);
    // }


    return 0; 
}



