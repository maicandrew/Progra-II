#include <stdio.h>
#include <conio.h>

int punto1 (int x)
{

	printf ("Inserte un numero para determinar si termina en 4: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		if ((x % 10) == 4)
		printf ("El numero %i termina en 4.", x);
		else
		printf ("El numero %i no termina en 4.", x);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		punto1 (x);
	}
}

int main (void)
{
	int x;
	punto1 (x);
	getch();
}
