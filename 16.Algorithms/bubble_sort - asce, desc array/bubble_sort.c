// To sort unsorted array ascending/descending


#include <stdio.h>

void bubble_asce(int tab[], int length);
void bubble_desc(int tab[], int length);

int main()
{   int k;
    //Array
    int tab1[]={5,6,4,3,2,8,9,1,0,7};
    int tab2[]={5,6,4,3,2,8,9,1,0,7};
    int length=10;

    //Function call
    bubble_asce(tab1, length);
    bubble_desc(tab2, length);

    //Print array ascending
    printf("Array ascending:\n");
    for (k=0; k<length; k++)
    {
        printf("tab[%d]=%d\n",k, tab1[k]);
    }
    //Print array descending
    printf("Array descending:\n");
    for (k=0; k<length; k++)
    {
        printf("tab[%d]=%d\n",k, tab2[k]);
    }

    return 0;
}

void bubble_asce(int tab[], int length)
{   int i, j, temp;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length-1; j++)
        {
            if(tab[j]>tab[j+1])
            {
                temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

void bubble_desc(int tab[], int length)
{   int i, j, temp;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length-1; j++)
        {
            if(tab[j]<tab[j+1])
            {
                temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}