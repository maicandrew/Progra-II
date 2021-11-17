#include <stdio.h>
#include <conio.h>

int punto9 (int x)
{
	printf ("Inserte un numero menor que 100 para determinar si un digito es multiplo del otro: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if (((x / 10) % (x % 10)) == 0)
		{
			printf ("El primer digito es multiplo del segundo");
		}
		else{
			if (((x % 10) % (x / 10)) == 0)
			printf ("El segundo digito es multipo del primero");
			else 
			printf ("Ningun digito es multiplo del otro");
		}
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto9 (x);
	}
}

int main (void)
{
	int x;
	punto9 (x);
	getch();
}
