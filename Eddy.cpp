#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int tam (char * cad)
{
	for (int i = 0;)
}

int main (void)
{
	char cadena [4096], resp[2];
	int i = 0;
	while (strcmp (resp, "no") != 0 && strcmp (resp, "NO") != 0 && strcmp (resp, "No") != 0) {
		gets(cadena+i);
		i = strlen(cadena);
		fflush(stdin);
		printf ("¿Desea continuar el texto?\n");
		gets (resp);
		fflush(stdin);
	}
	puts(cadena);
	/*edicion(cadena);*/
	getch();
}
