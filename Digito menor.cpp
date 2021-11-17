# include <stdio.h>
# include <math.h>
# include <conio.h>

int digitos (int x)
{
	printf ("Inserte un numero para determinar el menor de sus digitos: ");
	scanf ("%i", &x);
	int z;
	for (z = 0; ((x / (pow (10, z))) >= 10); z++) {
		
	}
	int dig = (pow (10, z + 1));
	int dig2 = (pow (10, z));
	int y = ((x % dig) / dig2);
	for (; z >= 0; z--) {
		dig2 = (pow (10, z));
		if (y <= ((x / dig2) % 10))
		;
		else y = ((x / dig2) % 10);
	}
	printf ("%i", y);
}
	
int main (void)
{
	int x;
	digitos (x);
}
