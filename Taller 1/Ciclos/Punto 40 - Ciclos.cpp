#include <stdio.h>
#include <conio.h>

int ciclos40 (int x)
{
	printf ("Ingrese un numero de dos digitos para determinar si se encuentra en la serie Fibonacci: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
		int w = 0;
		int y = 1;
		int z = 1;
		while (z < 100) {
			if (x == z)
			{
				printf ("El numero %i pertenece a la serie Fibonacci", x);
				z = 100;
			}
			else {
				w = y;
				y = z;
				z = w + y;
			}
		}
		if (z != 100)
		printf ("El numero %i no pertenece a la serie Fibonacci", x);
		else;
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos40 (x);
	}
}

int main (void)
{
	int x;
	ciclos40 (x);
	getch();
}
