#include <stdio.h>
#include <conio.h>

int punto3 (int x)
{
	printf ("Inserte un numero para determinar si es negativo: ");
	scanf ("%i", &x);
	if (x < 0)
	printf ("El numero %i es negativo.", x);
	else
	printf ("El numero %i no es negativo.", x);
}

int main (void)
{
	int x;
	punto3 (x);
	getch();
}
