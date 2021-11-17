#include <stdio.h>
#include <conio.h>
#include <math.h>

int punto47 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segnudo numero: ");
	scanf ("%i", &y);
	int dif = abs(x - y);
	if (x >= 10 && x <= 99 && y >= 10 && y <= 99)
	{
		if (dif % 2 == 0)
		{
			int sum = (x % 10) + (x / 10) + (y % 10) + (y / 10);
			printf ("La diferencia entre los numeros es par: %i\n", sum);
		}
		else ;
		if ((dif == 2) || (dif == 3) || (dif == 5) || (dif == 7))
			printf ("La diferencia entre los numeros es primo menor que 10: %i\n", x*y);
		else ;
		if (dif % 10 == 4)
			printf ("Unidad primer numero: %i\nDecena primer numero: %i\nUnidad segundo numero: %i\nDecena segundo numero: %i", x % 10, x / 10, y % 10, y / 10);
		else ;
	}
	else {
		printf ("Los numeros ingresados deben ser de 2 digitos");
		punto47 (x, y);
	}
}

int main (void)
{
	int x, y;
	punto47 (x, y);
	getch();
}
