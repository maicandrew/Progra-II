#include <stdio.h>
#include <conio.h>
#include <math.h>

float num (char * cad)
{
	int i = 0;
	float cont = 0;
	while (cad[i] != '\0') {
		if (cad[i] >= 48 && cad[i] <= 57)
		{
			int d = *(cad+i)-48;
			cont += d/pow(10,i);
			i++;
		}
		else i++;
	}
	return cont;
}

int strlength (char *c)
{
	int i = 0;
	while (c[i] != '\0') {
		i++;
	}
	return i;
}

int main (void)
{
	char cad[999];
	printf ("Ingrese la cadena: ");
	scanf ("%s", cad);
	printf ("%f * 10^%i", num(cad), strlength(cad)-1);
	getch();
}
