#include <stdio.h>
#include <conio.h>

int ciclos42 (void)
{
	float x = 0, y = 1, z = 1, suma = 0, w = 0;
	for (; z <= 1000; z = x + y)
	{
		x = y;
		y = z;
		w++;
		suma += z;
	}
	float prom = suma / w;
	printf ("El promedio de los elementos de la serie Fibonacci entre 0 y 1000 es: %f\n", prom);
}
int main (void)
{
	ciclos42();
	getch();
}
