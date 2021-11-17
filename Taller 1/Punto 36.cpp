#include <stdio.h>
#include <conio.h>
#include <math.h>

int punto36 (int x)
{
	printf ("Inserte un numero de 4 digitos: ");
	scanf ("%i", &x);
	int z = 0, y = 0;
	if ((x >= 1000) && (x <= 9999))
	{
		if (((x / 1000) % 2) == 0)
			z++;
		else
			y++;	
		if ((((x % 1000) / 100) % 2) == 0)
			z++;
		else
			y++;

		if ((((x % 100) / 10) % 2) == 0)
			z++;
		else
			y++;
		
		if (((x % 10) % 2) == 0)
		{
			z++;
			if (z > y)
				printf ("El numero tiene mas digitos pares que impares");
			else {
				if (z == y)
					printf ("El numero tiene tantos digitos pares como impares");
				else
					printf ("El numero tiene mas digitos impares que pares");
			}
		}
		else {
			y++;
			if (z > y)
				printf ("El numero tiene mas digitos pares que impares");
			else {
				if (z == y)
					printf ("El numero tiene tantos digitos pares como impares");
				else
					printf ("El numero tiene mas digitos impares que pares");
			}
		}
	}
	else {
		printf ("El numero debe ser de 4 digitos\n");
		punto36 (x);
	}
}

int main (void)
{
	int x;
	punto36 (x);
	getch();
}
