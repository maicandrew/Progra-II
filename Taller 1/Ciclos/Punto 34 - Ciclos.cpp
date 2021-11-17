#include <stdio.h>
#include <conio.h>

int ciclos34 (void)
{
	int x = 10;
	while (x > 0) {
		printf ("%i\n", 11-x);
		x--;
	}
}

int main (void)
{
	ciclos34 ();
	getch();
}
