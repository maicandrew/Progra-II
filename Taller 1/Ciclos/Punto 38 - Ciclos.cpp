#include <stdio.h>
#include <conio.h>

int ciclos38 (int x)
{
	printf ("Ingrese un numero para mostrar en pantalla su tabla de multiplicar: ");
	scanf ("%i", &x);
	printf ("Tabla de multiplicar de %i\n", x);
	int y = 1;
	while (y <= 10) {
		printf ("%i * %i = %i\n", x, y, x*y);
		y++;
	}
}

int main (void)
{
	int x;
	ciclos38 (x);
	getch();
}
