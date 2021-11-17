#include <stdio.h>
#include <conio.h>

int punto45 (int x)
{
	printf ("Ingrese un numero de 2 digitos: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
		int z = (x / 10) + (x % 10);
		if (x % 2 == 0)
			printf ("El numero es par de dos digitos: %i\n", z);
		else;
		if ((x % 5) == 0 && x > 0 && x < 30)
			printf ("El numero es nmultiplo de 5 menor que 30: %i", x/10);
	}
	else {
		if ((x == 2) || (x == 3) || (x == 5) || (x == 7))
			printf ("El numero es primo menor que 10: %i\n", x);
		else;
		if ((x % 5) == 0 && x > 0 && x < 30)
			printf ("El numero es nmultiplo de 5 menor que 30: %i", x/10);
		else;
	}
}

int main (void)
{
	int x;
	punto45 (x);
	getch();
}
