#include <stdio.h>
#include <conio.h>

int ciclos36 (void)
{
	printf ("Tabla de multiplicar del 5:\n");
	int x = 1;
	while (x <= 10) {
		printf (" 5 * %i = %i\n", x, 5*x);
		x++;
	}
}

int main (void)
{
	ciclos36 ();
	getch();
}
