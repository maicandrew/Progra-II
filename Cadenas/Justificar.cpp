#include <stdio.h>
#include <conio.h>

int strlength (char * cad)
{
	int i = 0;
	for (; cad[i] != '\0'; i++) {
	}
	return i;
}

int rango (char * cad, int i)
{
	if (cad[i] >= 48 && cad[i] <= 57)
	return 1;
	else {
		if ((cad[i] >= 65 && cad[i] <= 90) || (cad[i] >= 97 && cad[i] <= 122))
		return 2;
		else {
			if (cad[i] >= 0)
			return 3;
			else return 0;
		}
	}
}

int pal (char * cad)
{
	int i = 0, j = 0;
	for (;cad[j] != '\0';j++) {
		if (rango (cad, j+1) != rango (cad, j))
		i++;
		else;
	}
	return i;
}

char * just (char * cad)
{
	int l = strlength (cad), p = pal(cad), k = 0;
	char c[80] = {0};
	if (cad[0] != '\0')
	{
		for (int j = 0; cad[j] != '\0'; j++) {
			for (; (rango (cad, j) == rango (cad, j+1)) && cad[j] != '\0'; j++) {
				c[k] = cad[j];
				k++;
			}
			if (cad[j] != '\0')
			{
				c[k] = cad[j];
				k++;
			}
			else;
			if (p > 1)
			{
				for (int i = 0; i <= (80-l)/(p-1); i++) {
					c[k] = 32;
					k++;
				}
			}
			else {
				for (int i = 0; i <= (80-l)/p; i++) {
					c[k] = 32;
					k++;
				}
			}
		}
		return c;
	}
	else return c;
}

int main (void)
{
	char cad[80];
	printf ("Ingrese la cadena: ");
	gets(cad);
	just (cad);
	for (int i = 0; i<=80; i++) {
		printf ("%c", just (cad)[i]);
	}
	getch();
}
