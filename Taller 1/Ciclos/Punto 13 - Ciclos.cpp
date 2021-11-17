#include <stdio.h>
#include <conio.h>

int ciclos13 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		printf ("Los mutiplos de 5 entre 1 y %i son: ", x);
		for (int z = 1; z <= x; z++) {
		if ((z % 5) == 0)
		printf ("%i, ", z);
		else ;
		}
	}
	else {
		printf ("El numero ingrsado debe ser positivo");
		ciclos13 (x);
	}
}

int main (void)
{
	int x;
	ciclos13 (x);
	getch();
}
