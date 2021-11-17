#include <stdio.h>
#include <conio.h>

int punto49 (int x)
{
	printf ("Ingrese un numero: ");
	scanf ("%i", &x);
	if (x % 4 == 0)
	{
		if ((x % 10 == 2) || (x % 10 == 3) || (x % 10 == 5) || (x % 10 == 7))
			printf ("El ultimo digito del numero es primo");
		else 
			printf ("El ultimo digito del numero no es primo");
	}
	else 
		printf ("El numero no es multiplo de 4");
}

int main (void)
{
	int x;
	punto49 (x);
	getch();
}
