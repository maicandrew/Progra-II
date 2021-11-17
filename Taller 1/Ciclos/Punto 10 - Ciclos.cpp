#include <stdio.h>
#include <conio.h>

int ciclos10 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	int suma = 0;
	int y = 1;
	if (x > 0)
	{
		while (y <= x) {
			suma += y;
			y++;
		}
		printf ("La suma de los numeros entre 1 y %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos10 (x);
	}
}

int main (void)
{
	int x;
	ciclos10 (x);
	getch();
}
