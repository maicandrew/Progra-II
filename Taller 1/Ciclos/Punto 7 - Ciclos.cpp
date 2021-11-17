#include <stdio.h>
#include <conio.h>

int ciclos7 (void)
{
	int x;
	for (x = 1; x <= 100; x++) {
		printf ("%i\n", x);
	}
}
int main (void)
{
	ciclos7 ();
	getch();
}
