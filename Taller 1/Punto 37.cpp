#include <stdio.h>
#include <conio.h>

int punto37 (int x, int y)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		if ((x % y) == 0)
			printf ("El numero %i es multiplo de %i", x, y);
		else {
			if ((y % x) == 0)
				printf ("El numero %i es multiplo de %i", y, x);
			else
				printf ("Ningun numero es multiplo del otro");
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos\n");
		punto37 (x, y);
	}
}

int main (void)
{
	int x, y;
	punto37 (x, y);
	getch();
}
