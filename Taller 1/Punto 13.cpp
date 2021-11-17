#include <stdio.h>
#include <conio.h>

int punto13 (int x, int y)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		if (((x + y) % 2) == 0)
			printf ("La suma de los numeros es par");
		else 
			printf ("La suma de los numeros es impar");
	}
	else {
		printf ("Los numeros ingresados deben ser postivos\n");
		punto13 (x, y);
	}
}

int main (void)
{
	int x, y;
	punto13 (x, y);
	getch();
}
