#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;
  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
  printf("%d %d\n", ref[indeks], *wsk);
  return 0;
}

int main () 
{   
    //Initialize pointer to array
    int *a;

    //User enter size of array
    int length=0;
    
    printf("enter a length:\n");
    scanf("%d", &length);

    //Allocate space memory for array
    a = malloc(length* sizeof(int));
    for (int i=0; i<length; i++)
    {
        a[i]=i;
    }

    free(a);


}