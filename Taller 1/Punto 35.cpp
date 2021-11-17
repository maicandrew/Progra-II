#include <stdio.h>
#include <conio.h>

int punto35 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if ((x >= 0) && (x < 99)) {
		printf ("Decena: %i\nUnidad: %i", x / 10, x % 10);
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto35 (x);
	}
	
}

int main (void)
{
	int x;
	punto35 (x);
	getch();
}
