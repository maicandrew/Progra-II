#include <stdio.h>
#include <conio.h>

int punto34 (int x)
{
	printf ("Inserte un numero menor que 1000 para determinar cuantos digitos tiene: ");
	scanf ("%i", &x);
	if ((x >= 0) && (x < 1000)) {
		if (x <= 9)
		printf ("El numero %i tiene un digito", x);
		else {
			if ((x >= 10) && (x <= 99))
				printf ("El numero %i tiene dos digitos", x);
			else 
				printf ("El numero %i tiene 3 digitos", x);
		}
	}
	else {
		printf ("El numero ingresado debe ser positivo menor que 1000\n");
		punto34 (x);
	}
}

int main (void)
{
	int x;
	punto34 (x);
	getch();
}
