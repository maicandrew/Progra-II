#include <stdio.h>
#include <conio.h>

int ciclos16 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 1;
		int suma = 0;
		while (z <= x) {
		suma += z*3;
		z++;
		}
		printf ("El promedio de los %i primeros multiplos de 3 es: %d", x, suma/x);
	}
	else {
		printf ("El numero ingresado debeser positivo");
		ciclos16 (x);
	}
	
}
int main (void)
{
	int x;
	ciclos16 (x);
	getch();
}
