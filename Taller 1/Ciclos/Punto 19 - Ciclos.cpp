#include <stdio.h>
#include <math.h>
#include <conio.h>

int ciclos19 (int x)
{
	int y;
	int z = 0;
	printf ("Inserte un numero para determinar si es primo: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		for (y = 2; y <= (sqrt (x)); y++) {
		if ((x % y) == 0)
		z = 1;
		else ;
		}
		if (z == 1)
		printf ("El numero %i no es primo", x);
		else printf ("El numero %i es primo", x);
	}
	else {
		printf ("El numero ingrsado debe ser postivo");
		ciclos19 (x);
	}
}
int main (void)
{
	int x;
	ciclos19 (x);
	getch();
}
