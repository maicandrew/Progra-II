#include <stdio.h>
#include <conio.h>

int punto40 (int x, int y)
{
	if (x >= y)
	{
		if ((x - y) <= 10)
		{
			if (y < x)
			{
				printf ("%i\n", y);
				y++;
				punto40 (x, y);
			}
			else ;
		}
		else
			printf ("La diferencia entre los numeros es mayor que 10");
	}
	else {
		if ((y - x) <= 10)
		{
			if (x < y)
			{
				printf ("%i\n", x);
				x++;
				punto40 (x, y);
			}
			else ;
		}
		else
			printf ("La diferencia entre los numeros es mayor que 10");
	}
}

int main (void)
{
	int x, y;
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	punto40 (x, y);
	getch();
}
