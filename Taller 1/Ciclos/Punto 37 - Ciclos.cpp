#include <stdio.h>
#include <conio.h>

int ciclos37 (void)
{
	
	for (int z = 1; z <= 10; z++)
	{
		printf ("\nTabla del %i:\n", z);
		for (int x = 1; x <= 10; x++)
		{
		printf ("%i * %i = %i\n", z, x, x*z);
		}
	}
}
int main (void)
{
	ciclos37 ();
	getch();
}
