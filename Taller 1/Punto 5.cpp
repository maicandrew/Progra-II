#include <stdio.h>
#include <conio.h>

int punto5 (int x)
{
	printf ("Ingrese un numero de dos digitos para determinar si ambos son pares: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
	if ((((x / 10) % 2) == 0) && (((x % 10) % 2) == 0))
	printf ("Ambos digitos del numero %i son pares", x);
	else
	printf ("Al menos uno de los digitos del numero %i no es par", x);
	}
	else {
		printf ("El numero ingresado debe ser de dos digitos\n");
		punto5 (x);
	}
}

int main (void)
{
	int x;
	punto5 (x);
	getch();
}
