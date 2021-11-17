#include <stdio.h>
#include <conio.h>

int punto10 (int x)
{
	printf ("Inserte un numero menor que 100 para determinar si sus digitos son iguales: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if ((x / 10) == (x % 10))
		{
			printf ("Ambos digitos son iguales");
		}
		else{
			printf ("Los dos digitos no son iguales");
		}
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto10 (x);
	}
}

int main (void)
{
	int x;
	punto10 (x);
	getch();
}
