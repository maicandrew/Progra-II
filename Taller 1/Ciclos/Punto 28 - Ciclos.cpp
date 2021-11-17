#include <stdio.h>
#include <conio.h>
#include <math.h>

int ciclos28 (int x, int y)
{
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &x);
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int t = x;
		int z = 0;
		int r = y;
		int w = 0;
		while (x > 0) {
			if (((x % 10) == 2) || ((x % 10) == 3) || ((x % 10) == 5) || ((x % 10) == 7))
			{
				z++;
				x = x / 10;
			}
			else x = x / 10;
		}
		while (y > 0) {
			if (((y % 10) == 2) || ((y % 10) == 3) || ((y % 10) == 5) || ((y % 10) == 7))
			{
				w++;
				y = y / 10;
			}
			else y = y / 10;
		}
		if (z >= w)
		printf ("El numero con mas digitos primos es: %i", t);
		else printf ("El numero con mas digitos primos es: %i", r);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos28 (x, y);
	}
}

int main (void)
{
	int x, y;
	ciclos28 (x, y);
	getch();
}
