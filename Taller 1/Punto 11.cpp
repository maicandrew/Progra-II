#include <stdio.h>
#include <conio.h>

int punto11 (int x, int y)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	if (x >= y)
	printf ("%i es mayor que %i", x, y);
	else printf ("%i es mayor que %i", y, x);
}
int main (void)
{
	int x, y;
	punto11 (x, y);
	getch();
}
