	#include <stdio.h>
#include <conio.h>
#include <math.h>

int wea (long long int);

int dig (long long int x)
{
	int i = 0;
	for (; x / (pow(10, 3*i)) >= 1000; i++) {
	}
	return i;
}

int  rellenar (int x)
{
	
	char un[3] = {'U', 'n', '\0'};
	char dos[4] = {'D', 'o', 's', '\0'};
	char tres[5] = {'T', 'r', 'e', 's', '\0'};
	char cuat[7] = {'C', 'u', 'a', 't', 'r', 'o', '\0'};
	char cinco[6] = {'C', 'i', 'n', 'c', 'o', '\0'};
	char seis[5] = {'S', 'e', 'i', 's', '\0'};
	char siete[6] = {'S', 'i', 'e', 't', 'e', '\0'};
	char ocho[5] = {'O', 'c', 'h', 'o', '\0'};
	char nueve[6] = {'N', 'u', 'e', 'v', 'e', '\0'};
	char diez[5] = {'D', 'i', 'e', 'z', '\0'};
	char once[5] = {'O', 'n', 'c', 'e', '\0'};
	char doce[5] = {'D', 'o', 'c', 'e', '\0'};
	char trece[6] = {'T', 'r', 'e', 'c', 'e', '\0'};
	char cat[8] = {'C', 'a', 't', 'o', 'r', 'c', 'e', '\0'};
	char quince[7] = {'Q', 'u', 'i', 'n', 'c', 'e', '\0'};
	char* uni[15] = {un, dos, tres, cuat, cinco, seis, siete, ocho, nueve, diez, once, doce, trece, cat, quince};
	for (int j = 0; uni[x-1][j] != '\0'; j++){
		printf ("%c", uni[x-1][j]);
	}
	return 0;
}

int rellenar2 (int x)
{
	char veinte[6] = {'V', 'e', 'i', 'n', 't', '\0'};
	char treinta[8] = {'T', 'r', 'e', 'i', 'n', 't', 'a', '\0'};
	char cuarenta[9] = {'C', 'u', 'a', 'r', 'e', 'n', 't', 'a', '\0'};
	char cincuenta[10] = {'C', 'i', 'n', 'c', 'u', 'e', 'n', 't', 'a', '\0'};
	char sesenta[8] = {'S', 'e', 's', 'e', 'n', 't', 'a', '\0'};
	char setenta[8] = {'S', 'e', 't', 'e', 'n', 't', 'a', '\0'};
	char ochenta[8] = {'O', 'c', 'h', 'e', 'n', 't', 'a', '\0'};
	char noventa[8] = {'N', 'o', 'v', 'e', 'n', 't', 'a', '\0'};
	char dieci[5] = {'D', 'i', 'e', 'c', '\0'};
	char* k;
	switch (x) {
		case 0: break;
		case 1: k = dieci;
				break;
		case 2: k = veinte;
				break;
		case 3: k = treinta;
				break;
		case 4: k = cuarenta;
				break;
		case 5: k = cincuenta;
				break;
		case 6: k = sesenta;
				break;
		case 7: k = setenta;
				break;
		case 8: k = ochenta;
				break;
		case 9: k = noventa;
				break;
	}
	for (int i = 0; k[i] != '\0'; i++) {
		printf ("%c", k[i]);
	}
	return 0;
}

int cientos (int x)
{
	if ((x/100) == 1)
	{
		printf ("Cien");
		if (x > 100)
		printf ("to ");
		else;
	}
	else {
		if ((x/100) == 9)
		{
			printf ("Novecientos ");
		}
		else {
			if  (x / 100 == 5)
			printf ("Quinientos ");
			else {
				if (x / 100 == 7)
				printf ("Setecientos ");
				else {
					rellenar (x/100);
					printf ("cientos ");
				}
			}
		}
	}
}

int rellenar3 (int x, int z, long long int w)
{
	if (z >= 1 && z <= 5)
	{
		char mil[4] = {'M', 'i', 'l', '\0'};
		char millon[7] = {'M', 'i', 'l', 'l', 'o', 'n', '\0'};
		char millones[9] = {'M', 'i', 'l', 'l', 'o', 'n', 'e', 's', '\0'};
		char billon[7] = {'B', 'i', 'l', 'l', 'o', 'n', '\0'};
		char billones[9] = {'B', 'i', 'l', 'l', 'o', 'n', 'e', 's', '\0'};
		char * k, *j;
		if ( w < 2000000)
			k = millon;
			else
			k = millones;
		if ( w < 2000000000000)
			j = billon;
			else
			j = billones;
		char* val[5] = {mil, k, mil, j, mil};
		if (x >= 1)
		{
			printf (" ");
			for (int i = 0; val[z-1][i] != '\0'; i++) { 
				printf ("%c", val[z-1][i]);
			}
			printf (" ");
		}
		else {
			if (z == 2)
			{
				if (w % 1000000 == 0)
				{
					for (int i = 0; val[z-1][i] != '\0'; i++) { 
						printf ("%c", val[z-1][i]);
					}
					printf (" ");
				}
				else;
			}
			else {
				if (z == 4)
				{
					if (w % 1000000000000 == 0)
					{
						for (int i = 0; val[z-1][i] != '\0'; i++) { 
							printf ("%c", val[z-1][i]);
						}
						printf (" ");
					}
					else;
				}
				else ;
			}
		}
	}
	return 0;
}

int wea (long long int x)
{
	long long int z = x;
	int  i = dig (x);
	long long int num = pow (10,3*i);
	for (; z >= 1; z = z % num) {
		num = pow (10,3*i);
		int y = z / num;
		if (y >= 1)
		{
			if (y/100 >= 1)
				cientos (y);
			else;
			if (y % 100 < 16)
			{
				if (y % 100 >= 1)
				rellenar(y % 100);
				else ;
			}
			else {
				if (((y % 100) / 10) >= 1)
				{
					rellenar2 ((y % 100) / 10);
					if (y % 10 >= 1)
					{
						if (((y % 100) / 10) == 2 || ((y % 100) / 10) == 1)
						printf ("i");
						else 
						printf (" y ");
						rellenar (y % 10);
					}
					else {
						if (((y % 100) / 10) == 2)
						printf ("e");
					}
				}
				else {
					if (y % 10 >= 1)
						rellenar (y % 10);
					else;
				}
			}
		}
		else ;
		rellenar3 (y,i, x);
		i--;
	}
	rellenar3 (z/num,i, x);
}

int main (void)
{
	double x; 
	printf ("Ingrese el numero que desea transcribir a texto: $");
	scanf ("%lf", &x);
	long long int l = x;
	double w = (x-l) * 100;
	if (x >= 1 && x <= 9000000000000000)
	{
		wea(l);
		if (l % 1000000 == 0)
		printf ("de");
		else ;
		printf (" peso");
		if (x >= 2)
		printf ("s");
		else;
		if (w > 0)
		{
			printf (" con ");
			wea (w);
			printf (" centavo");
			if (w >= 2)
			printf ("s");
			else;
		}
		else;
		
	}
	else {
		if (x == 0)
		printf ("Cero pesos");
		else {
			if (x > 0)
			{
				wea(w);
				printf (" centavo");
				if (w >= 2)
				printf ("s");
				else;
			}
			else 
			printf ("Valor inv%clido", 160);
		}
	}
	getch();
}
