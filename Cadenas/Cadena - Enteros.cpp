#include <stdio.h>
#include <conio.h>
#include <math.h>

int num (char * cad)
{
	int i = 0, cont = 0;
	while (cad[i] != '\0') {
		if (cad[i] >= 48 && cad[i] <= 57)
		{
			int d = *(cad+i)-48;
			cont = (cont*10)+d;
			i++;
		}
		else i++;
	}
	return cont;
}

int main (void)
{
	char cad[999];
	printf ("Ingrese la cadena: ");
	scanf ("%s", cad);
	getch();
}
