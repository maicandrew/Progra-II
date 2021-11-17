#include <stdio.h>
#include <conio.h>

int punto21 (int x, int y, int z)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	printf ("Ingrese el tercer numero: ");
	scanf ("%i", &z);
	if (x >= 10 && x <= 99 && y >= 10 && y <= 99 && z >= 10 && z <= 99)
	{
		if (((x % 10 >= y % 10) && (x % 10 >= z % 10) && (x % 10 >= y / 10) && (x / 10 >= z / 10)) || ((x / 10 >= y % 10) && (x / 10 >= z % 10) && (x / 10 >= y / 10) && (x / 10 >= z / 10)))
			printf ("El digito mayor esta en %i", x);
		else {
			if (((y % 10 >= z % 10) && (y % 10 >= z / 10))|| ((y / 10 >= z % 10) && (y / 10 >= z / 10)))
				printf ("El digito mayor esta en %i", y);
			else
				printf ("El digito mayor esta en %i", z);
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos de dos digitos\n");
		punto21 (x, y, z);
	}
}

int main (void)
{
	int x, y, z;
	punto21 (x, y, z);
	getch();
}
