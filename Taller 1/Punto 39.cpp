#include <stdio.h>
#include <conio.h>

int punto39 (int x, int y, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	printf ("Inserte otro numero: ");
	scanf ("%i", &z);
	if (x > 0 && y > 0 && z > 0)
	{
		if (((x % 100) / 10) == ((y % 100) / 10) && ((x % 100) / 10) == ((z % 100) / 10))
			printf ("El penultimo digito de los tres numeros es igual");
		else
			printf ("El penultimo digito de los tres numeros es diferente");
	}
	else {
		printf ("Lo numeros ingresados deben ser positivos\n");
		punto39 (x, y, z);
	}
}

int main (void)
{
	int x, y, z;
	punto39 (x, y, z);
	getch();
}
