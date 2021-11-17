#include <stdio.h>
#include <conio.h>

int punto4 (int x)
{
	printf ("Inserte un numero de dos digitos: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
	int suma = ((x / 10) + (x % 10));
	printf ("La suma de los digitos es: %i", suma);
	}
	else {
		printf ("El numero deben ser de dos digitos\n");
		punto4 (x);
	}
}

int main (void)
{
	int x;
	punto4 (x);
	getch();
}
