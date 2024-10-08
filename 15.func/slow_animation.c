#include <stdio.h>

/*Print dots in slow motion*/

/*My functions*/
void animate()
{  
    unsigned long long int i;
    int j;
    /*Animation loop*/
    for(j=0;j<3;j++)
        {
            /*print dot- long loop causes program to delay*/
            for(i=0;i<160000000;i++);
            printf(".");
        }

    /*print empty line long loop causes program to delay*/
    for(i=0;i<160000000;i++);
    printf("\n");

}



int main()
{   

    printf("Hello");
    animate();
    printf("Go with me");
    animate();

    return 0;
}

