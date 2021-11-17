#include <stdio.h>
#include <conio.h>

int ciclos14 (void)
{
	int z = 1;
	printf ("Los primeros 20 multiplos de 3 son: ");
	while (z <= 20) {
	printf ("%i, ", 3*z);
	z++;
	}
}
int main (void)
{
	ciclos14 ();
	getch();
}
