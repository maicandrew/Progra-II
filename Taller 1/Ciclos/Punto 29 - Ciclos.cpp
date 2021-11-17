#include <stdio.h>
#include <conio.h>
#include <math.h>

int punto29 (int x)
{
	printf ("Inserte un numero para determinar su primer digito: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z;
		for (z = 0; (x / pow (10, z)) >= 10; z++){
		}
		int y = x / pow (10, z);
		printf ("El primer digito de %i es: %i", x, y);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		punto29 (x);
	}
}

int main (void)
{
	int x;
	punto29 (x);
	getch();
}
