#include <stdio.h>
#include <conio.h>

int punto30 (int x)
{
	printf ("Inserte un numero de 4 cifras: ");
	scanf ("%i", &x);
	if ((x >= 1000) && (x <= 9999))
	{
		if (((x % 1000) / 100) == ((x % 100) / 10))
			printf ("El segundo y penultimo digito son iguales");
		else 
			printf ("El segundo y penultimo digito no son iguales");
	}
	else {
		printf ("El numero debe ser de 4 digitos\n");
		punto30 (x);
	}
}

int main (void)
{
	int x;
	punto30 (x);
	getch ();
}
