#include <stdio.h>
#include <conio.h>

int ciclos6 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	int dig1 = (x / 100);
	int dig2 = ((x % 100) / 10);
	int dig3 = (x % 10);
	int z = 1;
	if ((x >= 100) && (x <= 999)) {
	printf ("Numeros entre 1 y el primer digito: ");
	while (z < dig1){
	printf ("%i, ", z);
	z++;
		}
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		ciclos6 (x);
	}
	printf ("\nNumeros entre 1 y el segundo digito: ");
	z = 1;
	while (z < dig2){
	printf ("%i, ", z);
	z++;
		}
	printf ("\nNumeros entre 1 y el tercer digito: ");
	z = 1;
	while (z < dig3){
	printf ("%i, ", z);
	z++;
		}
}

int main (void)
{
	int x;
	ciclos6 (x);
	getch();
}
