#include <stdio.h>
#include <conio.h>

int mult (int x, int y)
{
	printf ("Ingrese un numero: ");
	scanf ("%i", &x);
	printf ("Ingrese otro numero: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int ter= 0;
		for (int z = 1; z <= x; z++) {
			ter += y;
		}
		printf ("%i * %i = %i", x, y, ter);
	}
	else {
		printf ("Los numeros ingresados deben ser positivos\n");
		mult (x, y);
	}
}
int main (void)
{
	int x, y;
	mult (x, y);
	getch();
}
