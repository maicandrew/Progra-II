#include <stdio.h>
#include <conio.h>

int punto28 (int x)
{
	printf("Inserte un numero menor que 50 para determinar si es primo: ");
	scanf ("%i", &x);
	if ((x > 0) && (x < 50))
	{
		if (((x % 2) == 0) || ((x % 3) == 0) || ((x % 5) == 0) || ((x % 7) == 0))
		{
			if ((x == 2) || (x == 3) || (x == 5) || (x == 7))
				printf ("El numero %i es primo", x);
			else
				printf ("El numero %i no es primo", x);			
		}
		else
			printf ("El numero %i es primo", x);
	}
 	else {
	 printf ("El numero debe ser positivo menor que 50\n");
	 punto28 (x);
	}
}

int main (void)
{
	int x;
	punto28 (x);
	getch();
}
