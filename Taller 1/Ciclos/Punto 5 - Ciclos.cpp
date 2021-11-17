# include <stdio.h>
# include <conio.h>

int ciclos5 (int x, int z)
{
	
	printf ("Inserte un numero: ");
	scanf ("%i", &z);
	printf ("Inserte otro numero: ");
	scanf ("%i", &x);
	if (x > 0 && z > 0)
	{
		if (x > z)
		{
		for (int y = z + 1; y < x; y++){
			if ((y % 10) == 4)
			printf ("%i\n", y);
			else ;
			}
		}
		else {
		for (int y = x + 1; y < z; y++){
			if ((y % 10) == 4)
			printf ("%i\n", y);
			else ;
			}
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos\n");
		ciclos5 (x, z);
	}
}

int main (void)
{
	int x, z;
	ciclos5 (x, z);
	getch();
}
