#include <stdio.h>
#include <conio.h>
#include <math.h>

int ciclos20 (int x)
{
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		while ((x / (pow (10, z))) >= 10) {
			z++;
		}
		printf ("El numero %i tiene %i digitos", x, (z + 1));
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos20 (x);
	}
}

int main (void)
{
	int x;
	ciclos20 (x);
	getch();
}
