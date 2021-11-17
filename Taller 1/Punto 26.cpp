#include <stdio.h>
#include <conio.h>

int punto26 (int x)
{
	printf ("Inserte un numero de 4 digitos: ");
	scanf ("%i", &x);
	if ((x >= 1000) && (x <= 9999))
	{
	int suma = ((x / 1000) + ((x % 1000) / 100) + ((x % 100) / 10) + (x % 10));
	printf ("La suma de los digitos es: %i", suma);
	}
	else {
		printf ("El numero deben ser de 4 digitos\n");
		punto26 (x);
	}
}

int main (void)
{
	int x;
	punto26 (x);
	getch();
}
