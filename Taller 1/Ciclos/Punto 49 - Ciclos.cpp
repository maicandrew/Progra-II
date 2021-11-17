#include <stdio.h>
#include <conio.h>

int ciclos49 (void)
{
	int x, y, z = 1;
	for (x = 1; x < 10; x++)
	{
		printf ("%i ", x);
		for (y = ((x-1)/3) + 1; y <= (((x-1)/3)+1); y++)
		{
			printf ("%i ", y);
			if (z <= 3)
			{
				printf ("%i\n", z);
				z++;
			}
			else {
				z = 1;
				printf ("%i\n", z);
				z++;
			}
		}
	}
}

int main (void)
{
	ciclos49 ();
	getch();
}
