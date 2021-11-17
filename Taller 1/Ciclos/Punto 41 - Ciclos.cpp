#include <stdio.h>
#include <conio.h>

int ciclos41 (void)
{
	int x = 0;
	int y = 1;
	int z = 1;
	int suma = 0;
	for (; z <= 100; z = x + y)
	{
		x = y;
		y = z;
		suma += z;
	}
	printf ("La sua de los elementos de la serie Fibonacci entre 0 y 100 es: %i\n", suma);
}
int main (void)
{
	ciclos41();
	getch();
}
