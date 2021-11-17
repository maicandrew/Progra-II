#include <stdio.h>
#include <conio.h>

int cont_char (char * c)
{
	int i = 0;
	while (c[i] != '\0') {
		i++;
	}
	char cad1[i];
	int j = 0;
	while (j < i) {
		if (c[j] >= 0 && c[j] <= 31)
		{
			cad1[j] = c[j];
			j++;
		}
		else {
			cad1[j] = '\0';
			j++;
		}
		printf ("%s\n", cad1);
	}	
}

int alp_char (char * c)
{
	int i = 0;
	while (c[i] != '\0') {
		i++;
	}
	char cad2[i];
	int j = 0;
	while (j < i) {
		if ((c[j] >= 48 && c[j] <= 57) || (c[j] >= 65 && c[j] <= 90) || (c[j] >= 97 && c[j] <= 122))
		{
			cad2[j] = c[j];
			j++;
		}
		else {
			cad2[j] = '\0';
			j++;
		}
	}
	printf ("%s", cad2);
}

int main (void)
{
	char c[999];
	printf ("Ingrese la cadena: ");
	scanf ("%s", c);
	cont_char (c);
	alp_char (c);
	getch();
}
