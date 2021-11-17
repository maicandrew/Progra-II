#include <stdio.h>
#include <conio.h>

int punto19 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	printf("Ingrese el tercer numero: ");
	if (x >= y)
	{
		scanf ("%i", &y);
		if (x >= y)
			printf ("El mayor es %i", x);
		else
			printf ("El mayor es %i", y);
	}
	else {
		scanf ("%i", &x);
		if (x >= y)
			printf ("El mayor es %i", x);
		else
			printf ("El mayor es %i", y);
	}
}

int main (void)
{
	int x, y;
	punto19 (x, y);
	getch();
}
