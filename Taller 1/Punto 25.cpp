#include <stdio.h>
#include <conio.h>

int punto25 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	int dig1 = (x / 100);
	int dig2 = ((x % 100) / 10);
	int dig3 = (x % 10);
	if ((x >= 100) && (x <= 999))
	{
		if (dig1 == (dig2 + dig3))
		printf ("El primer digito es igual a la suma de los otros dos");	
		else {
			if (dig2 == (dig3 + dig1))
			printf ("El segundo digito es igual a la suma de los otros dos");
			else {
				if (dig3 == (dig2 + dig1))
				printf ("El tercer digito es igual a la suma de los otros dos");
				else {
					printf ("Ningun digito es igual a la suma de los otros dos");
				}
			}
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto25 (x);
	}
}

int main (void)
{
	int x;
	punto25 (x);
	getch();
}
