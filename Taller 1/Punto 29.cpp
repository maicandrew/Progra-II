#include <stdio.h>
#include <conio.h>

int punto29 (int x)
{
	printf ("Inserte un numero de 5 cifras: ");
	scanf ("%i", &x);
	if ((x >= 10000) && (x <= 99999))
	{
		if (((x / 10000) == (x % 10)) && (((x % 10000) / 1000) == ((x % 100) / 10)))
		printf ("El numero %i es capicuo", x);
		else {
			printf ("El numero %i no es capicuo", x);
		}
	}
	else {
		printf ("El numero debe ser de 5 digitos\n");
		punto29 (x);
	}
}

int main (void)
{
	int x;
	punto29 (x);
	getch();
}
