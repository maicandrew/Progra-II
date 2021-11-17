//31. Leer números hasta que digiten 0 y determinar a cuánto es igual el promedio de los números
//terminados en 5.
#include <stdio.h>
#include <conio.h>

int ciclos31 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	int suma = 0;
	int z = 0;
	for (; x != 0;) {
		printf ("Inserte un numero: ");
		scanf ("%i", &x);
		if ((x % 10) == 5) {
		suma += x;
		z++;
		}
		else ;
	}
	if (z == 0)
	printf ("El promedio de los numeros terminados en 5 es: 0");
	else {
		float prom = (suma / z);
		printf ("El promedio de los numeros terminados en 5 es: %f", prom);
	}
}
int main (void)
{
	int x;
	ciclos31 (x);
	getch();
}
