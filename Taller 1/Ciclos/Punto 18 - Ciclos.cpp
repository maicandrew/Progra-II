#include <stdio.h>
#include <conio.h>

int ciclos18 (int x, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &z);
	printf ("Inserte otro numero: ");
	scanf ("%i", &x);
	if ((x > 0) && (z > 0))
	{
		if (x > z)
		{
			printf ("Los multiplos de 5 entre %i y %i son: ", z, x);
			int y = z + 1;
			while (y < x) {
				if ((y % 5) == 0)
				{
					printf ("%i, ", y);
					y++;
				}
				else y++;
			}
		}
		else {
			printf ("Los multiplos de 5 entre %i y %i son: ", x, z);
			int y = x + 1;
			while (y < z) {
				if ((y % 5) == 0)
				{
					printf ("%i, ", y);
					y++;
				}
				else y++;
			}
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos");
		ciclos18 (x, z);
	}
}

int main (void)
{
	int x;
	int z;
	ciclos18 (x, z);
	getch();
}
