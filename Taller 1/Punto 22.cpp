#include <stdio.h>
#include <conio.h>

int punto22 (int x)
{
	printf ("Inserte un numero de 3 cifras: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		if ((x / 100) == (x % 10))
		printf ("El primer y ultimo digito son iguales");
		else {
			printf ("El primer y ultimo digito no son iguales");
		}
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		punto22 (x);
	}
}

int main (void)
{
	int x;
	punto22 (x);
	getch();
}
