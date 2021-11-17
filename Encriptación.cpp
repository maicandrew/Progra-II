#include <stdio.h>
#include <conio.h>
#include <math.h>

char perra_shin_chan (char x, char y)
{
	printf ("Ingrese el primer dato a encriptar: ");
	scanf ("%c", &x);
	scanf ("%c", &y);
	int w = (y*3+x*2)/3;
	printf ("%i\n%c\n", w);
	printf ("%i, %i\n", x, y);
	printf ("%c, %c", x, y);
	
}
int main (void)
{
	char x, y;
	perra_shin_chan (x, y);
	getch();
}
