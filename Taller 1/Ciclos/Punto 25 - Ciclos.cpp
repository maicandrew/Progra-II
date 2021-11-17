# include <stdio.h>
# include <math.h>
# include <conio.h>

int ciclos25 (int x)
{
	printf ("Inserte un numero para determinar el promedio entero de sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z;
		for (z = 0; ((x / (pow (10, z))) >= 10); z++) {}
		int w = z + 1;
		int suma = 0;
		for (; z >= 0; z--) {
		int exp = (pow (10, z + 1));
		suma += ((x % exp) / (pow (10, z)));
		}
		int prom = suma / w;
		printf ("El promedio entero de los digitos de %i es: %i", x, prom);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos25 (x);
	}
}

int main (void)
{
	int x;
	ciclos25 (x);
	getch ();
}
