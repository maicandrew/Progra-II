#include <stdio.h>
#include <math.h>
#include <conio.h>

int punto6 (int x)
{
	printf("Inserte un numero menor que 20 para determinar si es primo: ");
	scanf ("%i", &x);
	if (x > 0 && x < 20)
	{
		if (((x % 2)== 0) || ((x % 3)== 0) || ((x % 4) == 0))
		printf ("El numero %i no es primo", x);
		else
		printf ("El numero %i es primo", x);
	}
	else {
 		printf ("El numero debe ser menor que 20\n");
		punto6 (x);
	}
}

int main (void)
{
	int x;
	punto6 (x);
	getch();
}
