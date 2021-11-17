#include <stdio.h>
#include <conio.h>

int punto2 (int x)
{
	printf ("Inserte un numero para determinar si tiene 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
		printf ("El numero %i tiene 3 digitos.", x);
	else
		printf ("El numero %i no tiene 3 digitos.", x);
}
int main (void)
{
	int x;
	punto2 (x);
	getch();
}
