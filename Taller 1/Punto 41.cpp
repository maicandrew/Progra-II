#include <stdio.h>
#include <conio.h>
#include <math.h>

int punto41 (int x, int y)
{
	printf ("Ingrese un numero: ");
	scanf ("%i", &x);
	printf ("Ingrese otro numero: ");
	scanf ("%i", &y);
	if (x >= y)
	{
		int w = 0;
		for (int z = 2; z <= (sqrt (x - y)); z++) {
			if (((x - y) % z) == 0)
			w = 1;
			else ;
		}
		if (w == 1)
			printf ("La diferencia de los numeros no es un numero primo");
		else 
			printf ("La diferencia de os nueros es un numeros primo");
	}
	else {
		int w = 0;
		for (int z = 2; z <= (sqrt (y - x)); z++) {
			if (((y - x) % z) == 0)
			w = 1;
			else ;
		}
		if (w == 1)
			printf ("La diferencia de los numeros no es un numero primo");
		else 
			printf ("La diferencia de os nueros es un numeros primo");
	}
}

int main (void)
{
	int x, y;
	punto41 (x, y);
	getch();
}
