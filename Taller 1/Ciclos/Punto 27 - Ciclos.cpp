#include <stdio.h>
#include <conio.h>
#include <math.h>

int ciclos27 (int x, int y)
{
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &x);
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &y);
	if (x > 0)
	{
		int z;
		int w;
		for (z = 0; ((x / (pow (10, z))) >= 10); z++) {
		}
		for (w = 0; ((y / (pow (10, w))) >= 10); w++) {
		}
		if (z >= w)
		printf ("El numero con mas digitos es %i", x);
		else printf ("El numero con mas digitos es %i", y);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos27 (x, y);
	}
}

int main (void)
{
	int x, y;
	ciclos27 (x, y);
	getch();
}
