#include <stdio.h>
#include <conio.h>

int punto18 (int x)
{
	printf ("Inserte un numero de 3 digitos para determinar si un digito es multiplo de los otros: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int dig1 = (x / 100);
		int dig2 = ((x % 100) / 10);
		int dig3 = (x % 10);
		if ((dig1 % dig2) == 0)
		{
			if ((dig1 % dig3) == 0)
			printf ("El primer digito es multiplo de los otros dos");
			else {
				printf ("El primer digito es multiplo del segundo");
			}
		}
		else {
			if ((dig1 % dig3) == 0)
				printf ("El primer digito es multiplo del tercero");
			else {
				if ((dig2 % dig1) == 0)
				{
					if ((dig2 % dig3) == 0)
						printf ("El segundo digito es multiplo de los otros dos");
					else
						printf ("El segundo digito es multiplo del primero");
				}
				else {
					if ((dig2 % dig3) == 0)
						printf ("El segundo digito es multiplo del tercero");
					else {
						if ((dig3 % dig1) == 0)
						{
							if ((dig3 % dig2) == 0)
								printf ("El tercer digito es multiplo de los otros dos");
							else {
									printf ("El tercer digito es multiplo del primero");
							}
						}
						else {
							if ((dig3 % dig2) == 0)
								printf ("El tercer digito es multiplo de los otros dos");
							else {
								printf ("Ningun digito es multiplo de otro");
							}
						}
					}
				}
			}
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto18 (x);
	}
}

int main (void)
{
	int x;
	punto18 (x);
	getch();
}
