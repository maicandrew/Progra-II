#include <stdio.h>
#include <conio.h>

int ciclos17 (int x, int y)
{
	printf ("Inserte un numero para multiplos de 2: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero para multiplo de 5: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int suma2 = 0;
		int suma5 = 0;
		for (int z = 1; z <= x; z++) {
		suma2 += z*2;
		}
		for (int z = 1; z <= y; z++) {
		suma5 += z*5;
		}
		if (suma2 / x > suma5 / y)
			printf ("El promedio de los %i multiplos de 2 es mayor que el promedio de los %i primeros multiplos de 5\n", x, y);
		else
			printf ("El promedio de los %i multiplos de 5 es mayor que el promedio de los %i primeros multiplos de 2\n", y, x);
	}
	else {
		printf ("Los numero ingresados deben ser positivos\n");
		ciclos17 (x, y);
	}
}

int main (void)
{
	int x, y;
	ciclos17 (x, y);
	getch();
}
