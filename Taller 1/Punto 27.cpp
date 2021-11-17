#include <stdio.h>
#include <math.h>
#include <conio.h>

int punto27 (int x)
{
	printf ("Inserte un numero de 4 digitos: ");
	scanf ("%i", &x);
	if ((x >= 1000) && (x <= 9999))
	{
		int z = 0;
		int dig1 = (x / 1000);
		int dig2 = ((x % 1000) / 100);
		int dig3 = ((x % 100) / 10);
		int dig4 = (x % 10);
		if ((dig1 == 2) || (dig1 == 4) || (dig1 == 6) || (dig1 == 8))
			z++;
		else ;
		
		if ((dig2 == 2) || (dig2 == 4) || (dig2 == 6) || (dig2 == 8))
			z++;
		else ;
		
		if ((dig3 == 2) || (dig3 == 4) || (dig3 == 6) || (dig3 == 8))
			z++;
		else ;
	
		if ((dig4 == 2) || (dig4 == 4) || (dig4 == 6) || (dig4 == 8))
		{
			z++;
			printf ("El numero %i tiene %i digitos pares", x, z);
		}
		else printf ("El numero %i tiene %i digitos pares", x, z);
	}
	else {
		printf ("El numero debe ser de 4 digitos\n");
		punto27 (x);
	}
}

int main (void)
{
	int x;
	punto27 (x);
	getch();
}
