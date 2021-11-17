#include <stdio.h>
#include <math.h>
#include <conio.h>

int ciclos26 (int x)
{
	printf ("Inserte un numero para determinar el mayor de sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		while ((x / (pow (10, z))) >= 10) {
			z++;
		}
		int dig = (pow (10, z + 1));
		int dig2 = (pow (10, z));
		int y = ((x % dig) / dig2);
		while (z >= 0) {
			dig2 = (pow (10, z));
			if (y >= ((x / dig2) % 10))
			z--;
			else {
				y = ((x / dig2) % 10);
				z--;
			}
		}
		printf ("El mayor digito de %i es: %i", x, y);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos26 (x);
	}
}
	
int main (void)
{
	int x;
	ciclos26 (x);
	getch();
}
