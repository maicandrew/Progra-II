#include <stdio.h>
#include <conio.h>

int ciclos45 (int x)
{
	printf ("Ingrese un numero para hallar su factorial: ");
	scanf ("%i", &x);
	if (x >= 0 && x < 13)
	{
		int z = 1;
		for (int y = 1; y <= x; y++) {
			z = z * y;
			printf ("El factorial de %i es: %i\n", y, z);
		}
	}
	else {
		printf ("El numero ingresado debe ser postivo menor que 13\n");
		ciclos45 (x);
	}
}

int main (void)
{
	int x;
	ciclos45 (x);
	getch();
}
