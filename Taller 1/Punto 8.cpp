#include <stdio.h>
#include <conio.h>

int punto8 (int x)
{
	printf ("Inserte un numero de dos digitos para determinar si sus digitos son primos: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if ((((x / 10) == 2) || ((x / 10) == 3) || ((x / 10) == 5) || ((x / 10) == 7)) && (((x % 10) == 2) || ((x % 10) == 3) || ((x % 10) == 5) || ((x % 10) == 7)))
			printf ("Ambos digitos del numero %i son primos", x);
		else printf ("Al menos uno de los digito del numero %i no es primo", x);
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto8 (x);
	}
}

int main (void)
{
	int x;
	punto8 (x);
	getch();
}
