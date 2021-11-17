#include <stdio.h>
#include <conio.h>

int ciclos43 (void)
{
	int x = 0;
	int y = 1;
	int z = 1;
	int w = 0;
	for (; z <= 2000; z = x + y)
	{
		x = y;
		y = z;
		if (z>=1000)
		w++;
		else ;
	}
	printf ("La serie Fibonacci tiene %i elementos entre 1000 y 2000\n", w);
}
int main (void)
{
	ciclos43();
	getch();
}
