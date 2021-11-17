#include<stdio.h>
#include<conio.h>

int punto20 (int x, int y, int z)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	
	printf ("Ingrese el tercer numero: ");
	scanf ("%i", &z);
	
	int mayor, medio, menor;
	if (x>=y)
	{
		if (x>=z)
		{
			mayor = x;
			if (z >= y)
			{
				medio = z;
				menor = y;
			}
			else {
				medio = y;
				menor = z;
			}
		}
		else {
			mayor = z;
			medio = x;
			menor = y;
		}
	}
	else {
		if (y>=z)
		{
			mayor = y;
			if (z >= x)
			{
				medio = z;
				menor = x;
			}
			else {
				medio = x;
				menor = z;
			}
		}
		else {
			medio = y;
			menor = z;
		}
	}
	printf ("El mayor es: %i\n", mayor);
	printf ("El medio es: %i\n", medio);
	printf ("El menor es: %i\n", menor);
}
int main (void)
{
	int x, y, z;
	punto20 (x, y, z);
	getch();
}

    
