#include <stdio.h>
#include <conio.h>

int punto7 (int x, int y)
{
	printf("Inserte un numero menor que 100 para determinar si es primo o negativo: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if (((x % 2)== 0) || ((x % 3)== 0) || ((x % 4) == 0) || ((x % 5) == 0) || ((x % 6) == 0) || ((x % 7) == 0) || ((x % 8) == 0) || ((x % 9) == 0))
		printf ("El numero %i no es primo", x);
		else
		printf ("El numero %i es primo", x);
	}
	else {
		if (x > 0)
		{
 		printf ("El numero debe ser de dos digitos\n");
 		punto7 (x, y);
		}
		else printf ("El numero es negativo.");
 	}
}

int main (void)
{
	int x, y;
	punto7 (x, y);
	getch ();
}
