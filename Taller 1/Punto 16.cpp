#include <stdio.h>
#include <conio.h>

int punto16 (int x)
{
	printf ("Inserte un numero de 3 digitos para determinar igualdad entre sus digitos: ");
	scanf ("%i", &x);
	int dig1 = (x / 100);
	int dig2 = ((x % 100) / 10);
	int dig3 = (x % 10);
	int z = 0;
	if ((x >= 100) && (x <= 999))
	{
		if (dig1 == dig2)
		{
			if (dig1 == dig3)
				printf ("Todos sus digitos son iguales");
			else
				printf ("Su primer y segundo digito son iguales");
		}
		else {
			if (dig1 == dig3)
				printf ("Su primer y tercer digito son iguales");
			else {
				if (dig2 == dig3)
				printf ("Su segundo y tercer digito son iguales");
				else {
				printf ("Ninguno de sus digitos es igual a otro");
				}
			}
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto16 (x);
	}
}

int main (void)
{
	int x;
	punto16 (x);
	getch();
}
