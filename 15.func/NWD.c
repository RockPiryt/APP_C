
/*Największy wspólny dzielnik
Uzupełnij ciało funkcji greatest_common_divisor w poniższym kodzie tak, aby poprawnie obliczała ona największy wspólny dzielnik zmiennych a i b.

Wskazówka: Do obliczenia największego wspólnego dzielnika możesz wykorzystać np. algorytm Euklidesa (https://pl.wikipedia.org/wiki/Algorytm_Euklidesa).

Przykładowe wejście

12 4
9 15
72 48

Przykładowe wyjście

4
3
24*/



#include <stdio.h>

int greatest_common_divisor(int a, int b)
{
    /*Umieść swoje rozwiązanie w tym miejscu*/
    /****************************************/
}

int main_test()
{
	int a;
	int b;

	while (scanf("%d %d",&a,&b)>=2)
	{
		printf("%d\n",greatest_common_divisor(a,b));
	}

	return 0;
}