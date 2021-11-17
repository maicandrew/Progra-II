#include <stdio.h>
#include <conio.h>

int punto32 (int x)
{

	printf ("Inserte un numero para determinar si es multiplo de 7: ");
	scanf ("%i", &x);
	if (x > 0)
	{
	if ((x % 7) == 0)
		printf ("El numero %i es multiplo de 7", x);
	else
		printf ("El numero %i no es multiplo de 7", x);
	}
	else {
		printf ("El numero ingresad debe ser postivo\n");
		punto32 (x);
	}
}

int main (void)
{
	int x;
	punto32 (x);
	getch();
}
