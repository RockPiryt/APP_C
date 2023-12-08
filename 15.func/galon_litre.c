/*Jednostki imperialne
Uzupełnij ciało funkcji unit_conversion w poniższym kodzie tak, aby poprawnie zamieniała informację o zużyciu paliwa podaną w milach na galon na informację podaną w litrach na sto kilometrów.

Zużycie w litrach na sto kilometrów jest objętością paliwa (w litrach) spaloną po przejechaniu stu kilometrów.

Zużycie w milach na galon jest odległością (w milach) jaką można przejechać spalając jeden galon paliwa.

Przyjmij, że jedna mila jest równa 1,609 km, a jeden galon 3,785 l.*/

/*Przykładowe wejście 20

Przykładowe wyjście 11.762

Przykładowe wejście
25
30

Przykładowe wyjście
9.410
7.841*/

#include <stdio.h>
#define MILE 1.609
#define GALLON 3.785

double unit_conversion(double usage_in_miles_per_galon)
{
	double usage_in_liters_per_100km;
    double km;

	/*Tutaj umieść swój kod*/

    //20mil ile to km?
    km=usage_in_miles_per_galon*MILE;
    //ile zuzyjemy paliwa aby przejechać 100km
    usage_in_liters_per_100km = (100 * GALLON)/ km;
	
	/***********************/
	
	return usage_in_liters_per_100km;
}

int main()
{
	double usage_in_miles_per_galon;
	double usage_in_liters_per_100km;

	while(scanf("%lf",&usage_in_miles_per_galon)>0)
	{
		usage_in_liters_per_100km=unit_conversion(usage_in_miles_per_galon);
		printf("%.3f\n",usage_in_liters_per_100km);
	}

	return 0;
}