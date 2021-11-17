#include <stdio.h>
#include <conio.h>
#include <math.h>

int ciclos35 (int x, int y)
{
	printf ("Inserte un numero para determinar su primer digito: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero para determinar su primer digito: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int z, w;
		for (z = 0; (x / pow (10, z)) >= 10; z++){
		}
		for (w = 0; (y / pow (10, w)) >= 10; w++){
		}
		int d1 = x / pow (10, z);
		int d2 = y / pow (10, w);
		printf ("El producto mutuo del primer digito de %i y %i es: %i", x, y, d1*d2);
	}
	else {
		printf ("Los numeros ingresados deben ser postivos\n");
		ciclos35 (x, y);
	}
}

int main (void)
{
	int x, y;
	ciclos35 (x, y);
	getch();
}
