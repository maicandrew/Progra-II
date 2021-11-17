#include <stdio.h>
#include <conio.h>

int punto43 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	if (x % (x - y) == 0 && y % (x - y) == 0)
		printf ("La diferencia entre los numeros es divisor de ambos numeros");
	else {
		if (x % (x - y)== 0)
			printf ("La diferencia entre los numeros es divisor del primero");
		else {
			if (y % (x - y) == 0)
				printf ("La diferencia entre los numeros es divisor del segundo");
			else
				printf ("La diferencia entre los numeros no es divisor de ninguno de los numeros");
		}
	}
}

int main (void)
{
	int x, y;
	punto43 (x, y);
	getch();
}
