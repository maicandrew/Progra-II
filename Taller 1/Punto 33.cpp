#include <stdio.h>
#include <conio.h>

int punto33 (int x)
{
	printf ("Inserte un numero para determinar si termina en 7: ");
	scanf ("%i", &x);
	if (x > 0)
	{	
	if ((x % 10) == 7)
		printf ("El numero %i termina en 7", x);
	else
		printf ("El numero %i no termina en 7", x);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		punto33 (x);
	}
}

int main (void)
{
	int x;
	punto33 (x);
	getch();
}
