#include <stdio.h>
#include <conio.h>

int ciclos12 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	int y = 0;
	if (x >= 100 && x <= 999)
	{
		int v[3] = {(x / 100), ((x % 100) / 10), (x % 10)};
		while (v[y] != 1 && y <= 2) {
			y++;
		}
		if (y > 2)
		printf ("El numero %i no tiene al numero 1 en ninguno de sus digitos", x);
		else printf ("El numero %i tiene al numero 1 como digito en la posicion %i", x, y+1);
	}
	else {
		printf ("El numero debe ser de 3 digitos");
		ciclos12 (x);
	}
}

int main (void)
{
	int x;
	ciclos12 (x);
	getch();
}
