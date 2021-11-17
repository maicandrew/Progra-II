# include <stdio.h>
# include <math.h>
# include <conio.h>

int ciclos24 (int x)
{
	printf ("Inserte un numero para determinar la suma de sus digitos pares: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		int suma = 0;
		while ((x / (pow (10, z))) >= 10) {
			z++;
		}
		int exp = (pow (10, z + 1));
		int dig = ((x % exp) / (pow (10, z)));
		while (z >= 0) {
			if ((dig  % 2) == 0)
			{
				suma += dig;
				z--;
				exp = (pow (10, z + 1));
				dig = ((x % exp) / (pow (10, z)));
			}
			else {
				z--;
				exp = (pow (10, z + 1));
				dig = ((x % exp) / (pow (10, z)));
			}
		}
		printf ("La suma de los digitos pares de %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos24 (x);
	}
}

int main (void)
{
	int x;
	ciclos24 (x);
	getch();
}
