#include <stdio.h>
#include <conio.h>

long long int fact (int x)
{
	long long int z = 1;
	for (int j = 1; j <= x; j++) {
		z = z * j;
	}
	return z;
}

int fact2 (int y, long long int* cad)
{
	for (int i = 0; i <= y; i++) {
		cad[i] = fact (i);
	}
}

int main (void)
{
	int x;
	long long int cad[999];
	printf ("Ingrese el numero: ");
	scanf ("%lli", &x);
	fact2 (x, cad);
	puts(cad);
	getch();
}
