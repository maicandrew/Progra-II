# include <stdio.h>
# include <math.h>
# include <conio.h>

int ciclos22 (int x)
{
	printf ("Inserte un numero para determinar cuantas veces tiene el numero 1: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		while (((x / (pow (10, z))) >= 10)) {
			z++;
		}
		int y = 0;
		int dig;
		while (z >= 0) {
		int exp = (pow (10, z + 1));
		dig = ((x % exp) / (pow (10, z)));
		if (dig == 1)
		{
			y++;
			z--;
		}
		else z--;
		}
		printf ("El numero %i tiene %i veces el digito 1", x, y);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos22 (x);
	}
}

int main (void)
{
	int x;
	ciclos22 (x);
	getch();
}
