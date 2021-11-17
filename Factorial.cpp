#include <stdio.h>

int fact (int);

int fact (int n)
{
	if (n == 1)
	return 1;
	else
	return (n * fact(n-1));
}

int main (void)
{
	int n=0;
	scanf ("%d", &n);
	printf ("Factorial de %d es: %d", n, fact (n));
}
