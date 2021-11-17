#include <stdio.h>
#include <conio.h>

int ciclos46 (int x)
{
	printf ("Inserte un numero para mostrar los factoriales hasta el: ");
	scanf ("%i", &x);
	if (x > 0 && x < 13)
	{
		float y, z = 1, suma = 0;
		for (y = 1; y <= x; y++)
		{
			z = z * y;
			suma += z;
		}
		float prom = suma / x;
		printf ("El promedio de los factoriales hasta %i es: %f", x, prom);
	}
	else {
		printf ("El numero ingresado debe ser postivo menor que 13\n");
		ciclos46 (x);
	}
}

int main (void)
{
	int x;
	ciclos46(x);
	getch();
}
