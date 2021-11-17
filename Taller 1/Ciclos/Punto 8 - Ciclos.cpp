#include <stdio.h>
#include <conio.h>

int ciclos8 (void)
{
	int x;
	for (x = 20; x <= 200; x+=2) {
		printf ("%i\n", x);
	}
}
int main (void)
{
	ciclos8 ();
	getch();
}
