#include <stdio.h>
#include <conio.h>

int punto50 (int x)
{
	printf ("Ingrese el numero: ");
	scanf ("%i", &x);
	if (x >= 0 && x <= 99)
	{
		int z = 0;
		if (x % 4 == 0)
		printf ("El numero es multiplo de 4: %i\n", x / 2);
		else z++;
		if (x % 5 == 0)
		printf ("El numero es multiplo de 5: %i\n", x*x);
		else z++;
		if (x % 6 == 0)
		printf ("El numero es multiplo de 6: %i", x/10);
		else z++;
		if (z == 3)
		printf ("Este numero no cumple ninguna condicion");
		else ;
	}
	else {
		printf ("El numero ingresado debe ser positivo menor que 100\n");
		punto50 (x);
	}
}
int main (void)
{
	int x;
	punto50 (x);
	getch();
}
