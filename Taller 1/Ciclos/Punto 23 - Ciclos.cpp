# include <stdio.h>
# include <math.h>
# include <conio.h>

int ciclos23 (int x)
{
	printf ("Inserte un numero para determinar si la suma de sus digitos es un numero primo: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z;
		int w = 0;
		for (z = 0; ((x / (pow (10, z))) >= 10); z++) {}
		int suma = 0;
		for (; z >= 0; z--) {
		int exp = (pow (10, z + 1));
		suma += ((x % exp) / (pow (10, z)));
		}
		for (int y = 2; y <= (sqrt (suma)); y++) {
		if ((suma % y) == 0)
		w = 1;
		else ;
		}
		if (w == 1)
		printf ("La suma de los digitos de %i no es un numero primo", x);
		else printf ("La suma de los digitos de %i es un numero primo", x);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos23 (x);
	}
}

int main (void)
{
	int x;
	ciclos23 (x);
	getch();
}
