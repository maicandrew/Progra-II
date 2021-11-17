#include <stdio.h>
#include <conio.h>

int punto38 (int x, int y, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	printf ("Inserte otro numero: ");
	scanf ("%i", &z);
	if (x > 0 && y > 0 && z > 0)
	{
		if (((x % 10) == (y % 10)) && ((x % 10) == (z % 10)))
			printf ("El ultimo digito de los tres numeros es igual");
		else
			printf ("El ultimo digito de los tres numeros es diferente");
	}
	else {
		printf ("Lo numeros ingresados deben ser positivos\n");
		punto38 (x, y, z);
	}
}

int main (void)
{
	int x, y, z;
	punto38 (x, y, z);
	getch();
}
