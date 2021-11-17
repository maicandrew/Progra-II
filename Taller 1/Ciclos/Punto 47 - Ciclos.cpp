#include <stdio.h>
#include <conio.h>

int ciclos47 (int x)
{
	printf ("Inserte un numero para mostrar los factoriales hasta el: ");
	scanf ("%i", &x);
	if (x > 0 && x < 13)
	{
		int y, z = 1, suma = 0;
		for (y = 1; y <= x; y++)
		{
			z = z * y;
			suma += z;
		}
		printf ("La suma de los factoriales hasta %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser postivo me7nor que 13\n");
		ciclos47 (x);
	}
}

int main (void)
{
	int x;
	ciclos47(x);
	getch();
}
