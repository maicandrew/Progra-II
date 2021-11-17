/* Construir una función que reciba 2 cadenas de caracteres y return -1 si cad1 < cad2; return 0 si cad1 == cad2; return 1 si cad1 > cad2 */
#include <stdio.h>
#include <conio.h>

int mayo (char * cad1, char * cad2)
{
	int i = 0;
	for (; cad1[i] != '\0' && cad2[i] != '\0'; i++) {
		if (cad1[i] > cad2[i])
		return 1;
		else {
			if (cad1[i] < cad2[i])
			return -1;
			else;
		}
	}
	if (cad1[i] == '\0' && cad2[i] == '\0')
		return 0;
		else {
			if (cad1[i] == '\0')
			return -1;
			else return 1;
		}
}
int main (void)
{
	char cad1[999];
	char cad2[999];
	printf ("Ingrese la primera cadena: ");
	scanf ("%s", cad1);
	printf ("Ingrese la segunda cadena: ");
	scanf ("%s", cad2);
	getch();
}
