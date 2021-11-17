#include <stdio.h>
#include <math.h>
#include <conio.h>

int ciclos33 (void)
{
	int x, y, z = 0, w = 0;
	for (x = 32768; w == 0; x--) {
		for (y = 2; y <= (sqrt (x)); y++) {
			if ((x % y) == 0)
			z = 1;
			else ;
		}
		if (z == 1)
		z = 0;
		else {
			w = 1;
		}
	}
	printf ("El numero primo mas cercano a 32768 es: %i", x+1);
}

int main (void)
{
	ciclos33 ();
	getch();
}
