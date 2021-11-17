#include <stdio.h>
#include <math.h>
#include <conio.h>

int punto23 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int z = 0;
		int dig1 = (x / 100);
		int dig2 = ((x % 100) / 10);
		int dig3 = (x % 10);
		if ((dig1 == 2) || (dig1 == 3) || (dig1 == 5) || (dig1 == 7))
			z++;
		else ;
		
		if ((dig2 == 2) || (dig2 == 3) || (dig2 == 5) || (dig2 == 7))
			z++;
		else ;
	
		if ((dig3 == 2) || (dig3 == 3) || (dig3 == 5) || (dig3 == 7))
		{
			z++;
			printf ("El numero %i tiene %i digitos primos", x, z);
		}
		else printf ("El numero %i tiene %i digitos primos", x, z);
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		punto23 (x);
	}
}

int main (void)
{
	int x;
	punto23 (x);
	getch();
}
