#include <stdio.h>
#include <conio.h>

int ciclos15 (void)
{
	int suma = 0;
	for (int z = 1; z <= 20; z++) {
	suma += z*3;
	}
	printf ("La suma de los 20 primeros multiplos de 3 es: %i", suma);
}
int main (void)
{
	ciclos15 ();
	getch();
}
