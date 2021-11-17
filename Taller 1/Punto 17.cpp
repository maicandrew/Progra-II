#include <stdio.h>
#include <conio.h>

int punto17 (int x)
{
	printf ("Inserte un numero de 3 digitos para determinar el mayor de sus digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int dig1 = (x / 100);
		int dig2 = ((x % 100) / 10);
		int dig3 = (x % 10);
		if (dig1 >= dig2) {
			if (dig1 >= dig3) 
				printf ("El digito mayor es la centena con valor %i", dig1);
			else 
				printf ("El digito mayor es la unidad con valor %i", dig3);
		}
		else {
			if (dig2 >= dig3)
				printf ("El digito mayor es la decena con valor %i", dig2);
			else
				printf ("El digito mayor es la unidad con valor %i", dig3);
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto17 (x);
	}
}

int main (void)
{
	int x;
	punto17 (x);
	getch();
}
