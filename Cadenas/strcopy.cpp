#include <stdio.h>
#include <conio.h>

char * strcopy (char * cad1, char * cad2)
{
	int i = 0;
	while (cad1[i] != '\0') {
		i++;
	}
	for (int j = 0; j <= i; j++) {
		cad2[j] = cad1[j];
	}
	return cad2;
}

int main (void)
{
	char cad1[999];
	char cad2[999];
	printf ("Ingrese la primera cadena: ");
	scanf ("%s", cad1);
	printf ("Ingrese la segunda cadena: ");
	scanf ("%s", cad2);
	strcopy (cad1, cad2);
	getch();
}
