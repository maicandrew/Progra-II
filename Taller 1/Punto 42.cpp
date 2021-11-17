#include <stdio.h>
#include <conio.h>

int punto42 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	if (((x - y) % 2) == 0)
		printf ("La diferencia entre los numeros es un numero par");
	else 
		printf ("La diferencia entre los numeros es un numero impar");
}

int main (void)
{
	int x, y;
	punto42 (x, y);
	getch();
}
