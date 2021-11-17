#include <stdio.h>
#include <conio.h>

int ciclos1 (int x)
{
	int z;
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	for (z = 1; z < x; z++){
	printf ("%i\n", z);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos1 (x);
	}
}

int main (void)
{
	int x;
	ciclos1 (x);
	getch();
}
