#include <stdio.h>
#include <conio.h>

int punto14 (int x, int y)
{
	printf ("Inserte un numero de dos digitos: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero de dos digitos: ");
	scanf ("%i", &y);
	if ((x >= 10) && (x <= 99) && (y >= 10) && (y <= 99))
	{
		int suma = ((x / 10)+ (x % 10) + (y / 10) + (y % 10));
		printf ("La suma de los digitos es: %i", suma);
	}
	else {
		printf ("Ambos numeros deben ser de dos digitos\n");
		punto14 (x, y);
	}	
}

int main (void)
{
	int x, y;
	punto14 (x, y);
	getch();
}
