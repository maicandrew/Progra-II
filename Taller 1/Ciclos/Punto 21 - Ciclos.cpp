# include <stdio.h>
# include <math.h>
# include <conio.h>

int ciclos21 (int x)
{
	printf ("Inserte un numero para determinar la suma de sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z, suma = 0;
		for (z = 0; ((x / (pow (10, z))) > 9); z++) {
			
		}
		for (; z >= 0; z--) {
		int exp = (pow (10, z + 1));
		suma += ((x % exp) / (pow (10, z)));
		}
		printf ("La suma de los digitos de %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser positivo");
		ciclos21 (x);
	}
}

int main (void)
{
	int x;
	ciclos21 (x);
	getch();
}
