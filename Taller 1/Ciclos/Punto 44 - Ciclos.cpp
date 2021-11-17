#include <stdio.h>
#include <conio.h>

int ciclos44 (int x)
{
	printf ("Ingrese un numero para determinar su factorial: ");
	scanf ("%i", &x);
	if (x >= 0 && x < 13)
	{
		int z = 1;
		int y = 1;
		while (z <= x) {
			y = y*z;
			z++;
		}
		printf ("El factorial de %i es %i", x, y);
	}
	else {
		printf ("El numero ingresado debe ser postivo menor que 13\n");
		ciclos44 (x);
	}
}
int main (void)
{
	int x;
	ciclos44 (x);
	getch();
}
