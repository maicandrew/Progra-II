#include <stdio.h>
#include <conio.h>

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
	char d[9999];
	printf ("Ingrese una cadena para determinar su longitud: ");
	scanf ("%s", d);
	printf ("%i", strlength (d));
	getch();
}
