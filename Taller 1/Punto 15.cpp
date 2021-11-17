#include <stdio.h>
#include <conio.h>

int punto15 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int suma = ((x / 100) + ((x % 100) / 10) + (x % 10));
		printf ("La suma de los digitos del numero %i es: %i", x, suma);
	}
	else {
	printf ("El numero debe ser de tres digitos\n");
	punto15 (x);
	}
}

int main (void)
{
	int x;
	punto15 (x);
	getch();
}
