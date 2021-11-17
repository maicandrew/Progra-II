#include <stdio.h>
#include <conio.h>

int punto46 (int x)
{
	printf ("Ingrese un numero de dos digitos: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
		if (x % 10 == 1)
			printf ("El numero termina en 1: %i", x / 10);
		else {
			if (x % 10 == 2)
				printf ("El numero termina en 2: %i", (x % 10) + (x / 10));
			else {
				if (x % 10 == 3)
					printf ("El numero termina en 3: %i", (x % 10) * (x / 10));
				else
					printf ("El numero no cumple ninguna condicion");
			}
		}
	}
	else {
		printf ("El numero debe ser de dos digitos");
		punto46 (x);
	}
}

int main (void)
{
	int x;
	punto46 (x);
	getch();
}
