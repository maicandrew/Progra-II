# include <stdio.h>
# include <conio.h>

int ciclos4 (int x, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &z);
	printf ("Inserte otro numero: ");
	scanf ("%i", &x);
	if (x > 0 && z > 0) {
		if (x > z)
		{
			int y = z + 1;
			while (y < x){
			printf ("%i\n", y);
			y++;
			}
		}
		else {
			int y = x + 1;
			while (y < z){
			printf ("%i\n", y);
			y++;
			}
		}
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos4 (x, z);
	}
}

int main (void)
{
	int x, z;
	ciclos4 (x, z);
	getch();
}
