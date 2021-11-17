#include <stdio.h>
#include <conio.h>

int ciclos3 (int x)
{
	int z;
	printf ("Inserte un numero para mostrar sus divisores: ");
	scanf ("%i", &x);
	if (x > 0)
	for (z = 2; z < x; z++){
		if ((x % z) == 0)
		printf ("%i\n", z);
		else ;
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos3 (x);
	}
}

int main (void)
{
	int x;
	ciclos3 (x);
	getch();
}
