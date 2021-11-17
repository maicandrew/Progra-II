#include <stdio.h>
#include <conio.h>

int main (void)
{
	for (int i = 0; i <= 255; i++) {
		printf ("Caracter %i: %c\n", i, i);
	}
	getch();
}
