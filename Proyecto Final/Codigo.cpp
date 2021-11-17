#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
	for (int i = 0; i < 100; i++)
	{
		int k = rand();
		unsigned long long int n = k * 11476503;
		printf ("%u\n", n);
	}
	getch();
}
