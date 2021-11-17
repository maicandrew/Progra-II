#include <stdio.h>
#include <conio.h>

int ciclos50 (void)
{
	int x;
	int y;
	for (x = 0; x < 7; x++)
	{
		printf ("%i ", x);
		for (y = (x/4)+1; y <= (x/4)+1; y++)
		{
			printf ("%i\n", y);
		}
	}
}

int main (void)
{
	ciclos50 ();
	getch();
}
