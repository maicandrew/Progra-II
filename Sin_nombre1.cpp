#include <stdio.h>
#include <conio.h>

int main (void)
{
	int x, i;
	scanf ("%i", &x);
	for (; x != 0; x = x / 10) {
		i = x%10;
	}
	printf ("%i", i);
}
