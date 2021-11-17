#include <stdio.h>
#include <conio.h>
#include <math.h>

int leer (int ** cad)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf ("%i", &cad[i][j]);
		}
	}
}

int mostrar (int ** cad)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf ("%i ", cad[i][j]);
		}
		printf ("\n");
	}
}

int primo (int  x)
{
	int d = 1;
	for (int k = 1; k < x; k++) {
		if (x % k == 0)
		d++;
		else;
	}
	if (d == 2)
	return x;
	else return -1;
}

int comp (int ** mat, int j)
{
	int  pri = 9999999998;
	for (int i = 0; i < 3; i++) {
		if (mat[i][j] <= pri)
		{
			if (primo(mat[i][j]) != -1)
			pri = mat[i][j];
		}
		else;
	}
	return pri;
}

int main (void)
{
	int v[3], u[3], w[3];
	int* matriz[3] = {v,u,w};
	leer (matriz);
	mostrar(matriz);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf ("%i ", primo(matriz[i][j]));
		}
		printf("\n");
	}
	int vect[3];
	for (int i = 0; i < 3; i++) {
		vect[i] = comp(matriz, i);
	}
	for (int i = 0; i < 3; i++) {
		printf ("%i ", vect[i]);
	}
	getch();
}
