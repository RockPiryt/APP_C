
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
	int r;
	int NWD;
    /*Umieść swoje rozwiązanie w tym miejscu*/

	
	while(b > 0)
	{
		r = a % b; //jeżeli r!=0 to przypisuje nowe wartości dla a i b i wykonuje dalej dzielenia z resztą
		a=b;// przypisanie nowej wartości zgodnie z algorytmem
		b=r;// przypisanie nowej wartości zgodnie z algorytmem
	}

	NWD = a;

	return NWD;
    /****************************************/
}

int main()
{
	int a;
	int b;

	while (scanf("%d %d",&a,&b)>=2)//czemu est większe równe 2??
	{
		printf("%d\n",greatest_common_divisor(a,b));
	}

	return 0;
}