# include <stdio.h>
# include <conio.h>

int ciclos2 (int x)
{
	int z = 2;
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	while (z < x){
	printf ("%i\n", z);
	z += 2;
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos2 (x);
	}
}

int main (void)
{
	int x;
	ciclos2 (x);
	getch();
}
