#include <stdio.h>
#include <conio.h>

int ciclos48 (void)
{
	int x, y;
	for (x = 0; x < 10; x++)
	{
		printf ("%i ", x);
		for (y = (x/2)+1; y <= (x/2)+1; y++)
		{
			printf ("%i\n", y);
		}
	}
}

int main (void)
{
	ciclos48 ();
	getch();
}
