#include <stdio.h>
#include <conio.h>

int ciclos39 (void)
{
	int x = 0;
	int y = 1;
	int z = 1;
	printf ("Elementos de la serie de Fibonacci:\n");
	for (; y < 10000; z = x + y)
	{
		printf ("%i\n", z);
		x = y;
		y = z;
	}
}
int main (void)
{
	ciclos39();
	getch();
}
