#include <stdio.h>
#include <conio.h>

int ciclos30 (int x)
{
	printf ("Inserte un numero para mostrar sus compenentes numericos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		printf ("Los componentes numericos del numero son: ");
		int z = 2;
		while (z < x){
			if ((x % z) == 0){
				printf ("%i, ", z);
				z++;
			}
			else z++;
		}
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos30 (x);
	}
}

int main (void)
{
	int x;
	ciclos30 (x);
	getch();
}
