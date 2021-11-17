#include <stdio.h>
#include <conio.h>

int punto31 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x == 10)
		printf ("El numero es igual a 10");
	else
		printf ("El numero no es igual a 10");
}

int main (void)
{
	int x;
	punto31 (x);
	getch ();
}
