#include <stdio.h>
#include <conio.h>

int ciclos11 (int x)
{
	int y;
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if ((x / 10) > (x % 10))
		{
			printf ("Numero entre el segundo y el primer digito: ");
			for (y = ((x % 10) + 1); y < (x / 10); y++) {
			printf ("%i, ", y);
			}
		}
		else {
			printf ("Numero entre el primer y el segundo digito: ");
			for (y = ((x / 10) + 1); y < (x % 10); y++) {
			printf ("%i, ", y);
				}
			}
	}
	else {
	printf ("El numero debe tener 2 digitos\n");
	ciclos11 (x);
	}
}

int main (void)
{
	int x;
	ciclos11 (x);
	getch();
}
