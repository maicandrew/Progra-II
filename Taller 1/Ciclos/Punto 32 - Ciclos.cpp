#include <stdio.h>
#include <conio.h>
#include <math.h>

int ciclos32 (int);

int ciclos32 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	float suma = 0, w = 0;
	while (x != 0) {
		int z = 0, y = 2;
		while (y <= (sqrt (x))) {
			if ((x % y) == 0)
			{
				z = 1;
				y++;
			}
			else 
				y++;
		}
		if (z == 0)
		{
			suma += x;
			w++;
			printf ("Inserte un numero: ");
			scanf ("%i", &x);
		}
		else {
			printf ("Inserte un numero: ");
			scanf ("%i", &x);
		}
	}
	if (w == 0)
	printf ("El promedio de los numeros primos es: 0");
	else {
		float prom = (suma / w);
		printf ("El promedio de los numeros primos es: %f", prom);
	}
}

int main (void)
{
	int x;
	ciclos32 (x);
	getch();
}
