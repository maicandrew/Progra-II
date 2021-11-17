#include <stdio.h>
#include <conio.h>

int punto44 (int x)
{
	printf("Ingrese un numero de 4 digitos: ");
	scanf ("%i", &x);
	if (x >= 1000 && x <= 9999)
	{
		if (((x/1000) % ((x /100) % 10) == 0) || ((x/1000) % ((x / 10) % 10) == 0) || ((x/1000) % (x % 10) == 0))
		{
			if ((x /100) % 10 != 0)
			{
				if ((x/1000) % ((x /100) % 10) == 0)
					printf("El primer digito es multiplo del segundo");
				else;
			}
			else ;
			if ((x /10) % 10 != 0)
			{
				if ((x/1000) % ((x / 10) % 10) == 0)
					printf("\nEl primer digito es multiplo del tercero");
				else;
			}
			else ;
			if (x % 10 != 0)
			{
				if ((x/1000) % (x % 10) == 0)
					printf("\nEl primer digito es multiplo del ultimo");
				else;
			}
			else ;
		}
		else 
			printf ("El primer digito no es multiplo de ninguno de los otros");
	}
		else {
		printf ("El numero debe ser de 4 digitos.");
		punto44 (x);
	}
}

int main (void)
{
	int x;
	punto44 (x);
	getch();
}
