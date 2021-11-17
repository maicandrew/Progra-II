#include <stdio.h>
#include <conio.h>

int punto12 (int x, int y)
{
	printf ("Inserte un numero de dos digitos: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero de dos digitos: ");
	scanf ("%i", &y);
	if ((x >= 10) && (x <= 99) && (y >= 10) && (y <= 99))
	{
		if (((x / 10) == (y / 10)) || ((x / 10) == (y % 10)) || ((x % 10) == (y / 10)) || ((x % 10) == (y % 10)))
		printf ("Los numeros tienen al menos un digito en comun");
		else 
		printf("Los numeros no tienen digitos en comun");
	}
	else {
		printf ("Ambos numeros deben ser de dos digitos\n");
		punto12 (x, y);
	}
}

int main (void)
{
	int x;
	int y;
	punto12 (x, y);
	getch();
	
}
