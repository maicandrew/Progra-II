#include <stdio.h>
#include <conio.h>

int punto48 (int x)
{
	printf ("Ingrese el numero: ");
	scanf ("%i", &x);
	if (x > 0 && x < 100)
	{
		if ((x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0) || (x % 7 == 0))
			printf ("El numero es no primo menor que 100");
		else 
			printf ("El numero es primo menor que 100");
	}
	else
		printf ("El numero no aplica para esta funcion");
}

int main (void)
{
	int x;
	punto48 (x);
	getch();
}
