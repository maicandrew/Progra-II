#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int punto1 (int x)
{

	printf ("Inserte un numero para determinar si termina en 4: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		if ((x % 10) == 4)
		printf ("El numero %i termina en 4.", x);
		else
		printf ("El numero %i no termina en 4.", x);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		punto1 (x);
	}
}

int punto2 (int x)
{
	printf ("Inserte un numero para determinar si tiene 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
		printf ("El numero %i tiene 3 digitos.", x);
	else
		printf ("El numero %i no tiene 3 digitos.", x);
}
int punto3 (int x)
{
	printf ("Inserte un numero para determinar si es negativo: ");
	scanf ("%i", &x);
	if (x < 0)
	printf ("El numero %i es negativo.", x);
	else
	printf ("El numero %i no es negativo.", x);
}
int punto4 (int x)
{
	printf ("Inserte un numero de dos digitos: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
	int suma = ((x / 10) + (x % 10));
	printf ("La suma de los digitos es: %i", suma);
	}
	else {
		printf ("El numero deben ser de dos digitos\n");
		punto4 (x);
	}
}

int punto5 (int x)
{
	printf ("Ingrese un numero de dos digitos para determinar si ambos son pares: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
	if ((((x / 10) % 2) == 0) && (((x % 10) % 2) == 0))
	printf ("Ambos digitos del numero %i son pares", x);
	else
	printf ("Al menos uno de los digitos del numero %i no es par", x);
	}
	else {
		printf ("El numero ingresado debe ser de dos digitos\n");
		punto5 (x);
	}
}

int punto6 (int x)
{
	printf("Inserte un numero menor que 20 para determinar si es primo: ");
	scanf ("%i", &x);
	if (x > 0 && x < 20)
	{
		if (((x % 2)== 0) || ((x % 3)== 0) || ((x % 4) == 0))
		printf ("El numero %i no es primo", x);
		else
		printf ("El numero %i es primo", x);
	}
	else {
 		printf ("El numero debe ser menor que 20\n");
		punto6 (x);
	}
}

int punto7 (int x, int y)
{
	printf("Inserte un numero menor que 100 para determinar si es primo o negativo: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if (((x % 2)== 0) || ((x % 3)== 0) || ((x % 4) == 0) || ((x % 5) == 0) || ((x % 6) == 0) || ((x % 7) == 0) || ((x % 8) == 0) || ((x % 9) == 0))
		printf ("El numero %i no es primo", x);
		else
		printf ("El numero %i es primo", x);
	}
	else {
		if (x > 0)
		{
 		printf ("El numero debe ser de dos digitos\n");
 		punto7 (x, y);
		}
		else printf ("El numero es negativo.");
 	}
}

int punto8 (int x)
{
	printf ("Inserte un numero de dos digitos para determinar si sus digitos son primos: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if ((((x / 10) == 2) || ((x / 10) == 3) || ((x / 10) == 5) || ((x / 10) == 7)) && (((x % 10) == 2) || ((x % 10) == 3) || ((x % 10) == 5) || ((x % 10) == 7)))
			printf ("Ambos digitos del numero %i son primos", x);
		else printf ("Al menos uno de los digito del numero %i no es primo", x);
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto8 (x);
	}
}

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

int punto10 (int x)
{
	printf ("Inserte un numero menor que 100 para determinar si sus digitos son iguales: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if ((x / 10) == (x % 10))
		{
			printf ("Ambos digitos son iguales\n");
		}
		else{
			printf ("Los dos digitos no son iguales\n");
		}
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto10 (x);
	}
}

int punto11 (int x, int y)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	if (x >= y)
	printf ("%i es mayor que %i", x, y);
	else printf ("%i es mayor que %i", y, x);
}

int punto12 (int x, int y)
{
	printf ("Inserte un numero de dos digitos: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero de dos digitos: ");
	scanf ("%i", &y);
	if ((x >= 10) && (x <= 99) && (y >= 10) && (y <= 99))
	{
		if (((x / 10) == (y / 10)) || ((x / 10) == (y % 10)) || ((x % 10) == (y / 10)) || ((x % 10) == (y % 10)))
		printf ("Los numeros tienen al menos un digito en comun");
		else 
		printf("Los numeros no tienen digitos en comun");
	}
	else {
		printf ("Ambos numeros deben ser de dos digitos\n");
		punto12 (x, y);
	}
}

int punto13 (int x, int y)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		if (((x + y) % 2) == 0)
			printf ("La suma de los numeros es par");
		else 
			printf ("La suma de los numeros es impar");
	}
	else {
		printf ("Los numeros ingresados deben ser postivos\n");
		punto13 (x, y);
	}
}

int punto14 (int x, int y)
{
	printf ("Inserte un numero de dos digitos: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero de dos digitos: ");
	scanf ("%i", &y);
	if ((x >= 10) && (x <= 99) && (y >= 10) && (y <= 99))
	{
		int suma = ((x / 10)+ (x % 10) + (y / 10) + (y % 10));
		printf ("La suma de los digitos es: %i", suma);
	}
	else {
		printf ("Ambos numeros deben ser de dos digitos\n");
		punto14 (x, y);
	}	
}

int punto15 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int suma = ((x / 100) + ((x % 100) / 10) + (x % 10));
		printf ("La suma de los digitos del numero %i es: %i", x, suma);
	}
	else {
	printf ("El numero debe ser de tres digitos\n");
	punto15 (x);
	}
}

int punto16 (int x)
{
	printf ("Inserte un numero de 3 digitos para determinar igualdad entre sus digitos: ");
	scanf ("%i", &x);
	int dig1 = (x / 100);
	int dig2 = ((x % 100) / 10);
	int dig3 = (x % 10);
	int z = 0;
	if ((x >= 100) && (x <= 999))
	{
		if (dig1 == dig2)
		{
			if (dig1 == dig3)
				printf ("Todos sus digitos son iguales");
			else
				printf ("Su primer y segundo digito son iguales");
		}
		else {
			if (dig1 == dig3)
				printf ("Su primer y tercer digito son iguales");
			else {
				if (dig2 == dig3)
				printf ("Su segundo y tercer digito son iguales");
				else {
				printf ("Ninguno de sus digitos es igual a otro");
				}
			}
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto16 (x);
	}
}

int punto17 (int x)
{
	printf ("Inserte un numero de 3 digitos para determinar el mayor de sus digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int dig1 = (x / 100);
		int dig2 = ((x % 100) / 10);
		int dig3 = (x % 10);
		if (dig1 >= dig2) {
			if (dig1 >= dig3) 
				printf ("El digito mayor es la centena con valor %i", dig1);
			else 
				printf ("El digito mayor es la unidad con valor %i", dig3);
		}
		else {
			if (dig2 >= dig3)
				printf ("El digito mayor es la decena con valor %i", dig2);
			else
				printf ("El digito mayor es la unidad con valor %i", dig3);
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto17 (x);
	}
}

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

int punto19 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	printf("Ingrese el tercer numero: ");
	if (x >= y)
	{
		scanf ("%i", &y);
		if (x >= y)
			printf ("El mayor es %i", x);
		else
			printf ("El mayor es %i", y);
	}
	else {
		scanf ("%i", &x);
		if (x >= y)
			printf ("El mayor es %i", x);
		else
			printf ("El mayor es %i", y);
	}
}

int punto20 (int x, int y, int z)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	
	printf ("Ingrese el tercer numero: ");
	scanf ("%i", &z);
	
	int mayor, medio, menor;
	if (x>=y)
	{
		if (x>=z)
		{
			mayor = x;
			if (z >= y)
			{
				medio = z;
				menor = y;
			}
			else {
				medio = y;
				menor = z;
			}
		}
		else {
			mayor = z;
			medio = x;
			menor = y;
		}
	}
	else {
		if (y>=z)
		{
			mayor = y;
			if (z >= x)
			{
				medio = z;
				menor = x;
			}
			else {
				medio = x;
				menor = z;
			}
		}
		else {
			medio = y;
			menor = z;
		}
	}
	printf ("El menor es: %i\n", menor);
	printf ("El medio es: %i\n", medio);
	printf ("El mayor es: %i\n", mayor);
}

int punto21 (int x, int y, int z)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	printf ("Ingrese el tercer numero: ");
	scanf ("%i", &z);
	if (x >= 10 && x <= 99 && y >= 10 && y <= 99 && z >= 10 && z <= 99)
	{
		if (((x % 10 >= y % 10) && (x % 10 >= z % 10) && (x % 10 >= y / 10) && (x / 10 >= z / 10)) || ((x / 10 >= y % 10) && (x / 10 >= z % 10) && (x / 10 >= y / 10) && (x / 10 >= z / 10)))
			printf ("El digito mayor esta en %i", x);
		else {
			if (((y % 10 >= z % 10) && (y % 10 >= z / 10))|| ((y / 10 >= z % 10) && (y / 10 >= z / 10)))
				printf ("El digito mayor esta en %i", y);
			else
				printf ("El digito mayor esta en %i", z);
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos de dos digitos\n");
		punto21 (x, y, z);
	}
}

int punto22 (int x)
{
	printf ("Inserte un numero de 3 cifras: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		if ((x / 100) == (x % 10))
		printf ("El primer y ultimo digito son iguales");
		else {
			printf ("El primer y ultimo digito no son iguales");
		}
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		punto22 (x);
	}
}

int punto23 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int z = 0;
		int dig1 = (x / 100);
		int dig2 = ((x % 100) / 10);
		int dig3 = (x % 10);
		if ((dig1 == 2) || (dig1 == 3) || (dig1 == 5) || (dig1 == 7))
			z++;
		else ;
		
		if ((dig2 == 2) || (dig2 == 3) || (dig2 == 5) || (dig2 == 7))
			z++;
		else ;
	
		if ((dig3 == 2) || (dig3 == 3) || (dig3 == 5) || (dig3 == 7))
		{
			z++;
			printf ("El numero %i tiene %i digitos primos", x, z);
		}
		else printf ("El numero %i tiene %i digitos primos", x, z);
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		punto23 (x);
	}
}

int punto24 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	if ((x >= 100) && (x <= 999))
	{
		int z = 0;
		int dig1 = (x / 100);
		int dig2 = ((x % 100) / 10);
		int dig3 = (x % 10);
		if ((dig1 == 2) || (dig1 == 4) || (dig1 == 6) || (dig1 == 8))
			z++;
		else ;
		
		if ((dig2 == 2) || (dig2 == 4) || (dig2 == 6) || (dig2 == 8))
			z++;
		else ;
	
		if ((dig3 == 2) || (dig3 == 4) || (dig3 == 6) || (dig3 == 8))
		{
			z++;
			printf ("El numero %i tiene %i digitos pares", x, z);
		}
		else printf ("El numero %i tiene %i digitos pares", x, z);
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		punto24 (x);
	}
}

int punto25 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	int dig1 = (x / 100);
	int dig2 = ((x % 100) / 10);
	int dig3 = (x % 10);
	if ((x >= 100) && (x <= 999))
	{
		if (dig1 == (dig2 + dig3))
		printf ("El primer digito es igual a la suma de los otros dos");	
		else {
			if (dig2 == (dig3 + dig1))
			printf ("El segundo digito es igual a la suma de los otros dos");
			else {
				if (dig3 == (dig2 + dig1))
				printf ("El tercer digito es igual a la suma de los otros dos");
				else {
					printf ("Ningun digito es igual a la suma de los otros dos");
				}
			}
		}
	}
	else {
		printf ("El numero debe ser de tres digitos\n");
		punto25 (x);
	}
}

int punto26 (int x)
{
	printf ("Inserte un numero de 4 digitos: ");
	scanf ("%i", &x);
	if ((x >= 1000) && (x <= 9999))
	{
	int suma = ((x / 1000) + ((x % 1000) / 100) + ((x % 100) / 10) + (x % 10));
	printf ("La suma de los digitos es: %i", suma);
	}
	else {
		printf ("El numero deben ser de 4 digitos\n");
		punto26 (x);
	}
}

int punto27 (int x)
{
	printf ("Inserte un numero de 4 digitos: ");
	scanf ("%i", &x);
	if ((x >= 1000) && (x <= 9999))
	{
		int z = 0;
		int dig1 = (x / 1000);
		int dig2 = ((x % 1000) / 100);
		int dig3 = ((x % 100) / 10);
		int dig4 = (x % 10);
		if ((dig1 == 2) || (dig1 == 4) || (dig1 == 6) || (dig1 == 8))
			z++;
		else ;
		
		if ((dig2 == 2) || (dig2 == 4) || (dig2 == 6) || (dig2 == 8))
			z++;
		else ;
		
		if ((dig3 == 2) || (dig3 == 4) || (dig3 == 6) || (dig3 == 8))
			z++;
		else ;
	
		if ((dig4 == 2) || (dig4 == 4) || (dig4 == 6) || (dig4 == 8))
		{
			z++;
			printf ("El numero %i tiene %i digitos pares", x, z);
		}
		else printf ("El numero %i tiene %i digitos pares", x, z);
	}
	else {
		printf ("El numero debe ser de 4 digitos\n");
		punto27 (x);
	}
}

int punto28 (int x)
{
	printf("Inserte un numero menor que 50 para determinar si es primo: ");
	scanf ("%i", &x);
	if ((x > 0) && (x < 50))
	{
		if (((x % 2) == 0) || ((x % 3) == 0) || ((x % 5) == 0) || ((x % 7) == 0))
		{
			if ((x == 2) || (x == 3) || (x == 5) || (x == 7))
				printf ("El numero %i es primo", x);
			else
				printf ("El numero %i no es primo", x);			
		}
		else
			printf ("El numero %i es primo", x);
	}
 	else {
	 printf ("El numero debe ser positivo menor que 50\n");
	 punto28 (x);
	}
}

int punto29 (int x)
{
	printf ("Inserte un numero de 5 cifras: ");
	scanf ("%i", &x);
	if ((x >= 10000) && (x <= 99999))
	{
		if (((x / 10000) == (x % 10)) && (((x % 10000) / 1000) == ((x % 100) / 10)))
		printf ("El numero %i es capicuo", x);
		else {
			printf ("El numero %i no es capicuo", x);
		}
	}
	else {
		printf ("El numero debe ser de 5 digitos\n");
		punto29 (x);
	}
}

int punto30 (int x)
{
	printf ("Inserte un numero de 4 cifras: ");
	scanf ("%i", &x);
	if ((x >= 1000) && (x <= 9999))
	{
		if (((x % 1000) / 100) == ((x % 100) / 10))
			printf ("El segundo y penultimo digito son iguales");
		else 
			printf ("El segundo y penultimo digito no son iguales");
	}
	else {
		printf ("El numero debe ser de 4 digitos\n");
		punto30 (x);
	}
}

int punto31 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x == 10)
		printf ("El numero es igual a 10");
	else
		printf ("El numero no es igual a 10");
}

int punto32 (int x)
{

	printf ("Inserte un numero para determinar si es multiplo de 7: ");
	scanf ("%i", &x);
	if (x > 0)
	{
	if ((x % 7) == 0)
		printf ("El numero %i es multiplo de 7", x);
	else
		printf ("El numero %i no es multiplo de 7", x);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		punto32 (x);
	}
}

int punto33 (int x)
{
	printf ("Inserte un numero para determinar si termina en 7: ");
	scanf ("%i", &x);
	if (x > 0)
	{	
	if ((x % 10) == 7)
		printf ("El numero %i termina en 7", x);
	else
		printf ("El numero %i no termina en 7", x);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		punto33 (x);
	}
}

int punto34 (int x)
{
	printf ("Inserte un numero menor que 1000 para determinar cuantos digitos tiene: ");
	scanf ("%i", &x);
	if ((x >= 0) && (x < 1000)) {
		if (x <= 9)
		printf ("El numero %i tiene un digito", x);
		else {
			if ((x >= 10) && (x <= 99))
				printf ("El numero %i tiene dos digitos", x);
			else 
				printf ("El numero %i tiene 3 digitos", x);
		}
	}
	else {
		printf ("El numero ingresado debe ser positivo menor que 1000\n");
		punto34 (x);
	}
}

int punto35 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if ((x >= 0) && (x < 99)) {
		printf ("Decena: %i\nUnidad: %i", x / 10, x % 10);
	}
	else {
		printf ("El numero debe ser de dos digitos\n");
		punto35 (x);
	}
	
}

int punto36 (int x)
{
	printf ("Inserte un numero de 4 digitos: ");
	scanf ("%i", &x);
	int z = 0, y = 0;
	if ((x >= 1000) && (x <= 9999))
	{
		if (((x / 1000) % 2) == 0)
			z++;
		else
			y++;	
		if ((((x % 1000) / 100) % 2) == 0)
			z++;
		else
			y++;

		if ((((x % 100) / 10) % 2) == 0)
			z++;
		else
			y++;
		
		if (((x % 10) % 2) == 0)
		{
			z++;
			if (z > y)
				printf ("El numero tiene mas digitos pares que impares");
			else {
				if (z == y)
					printf ("El numero tiene tantos digitos pares como impares");
				else
					printf ("El numero tiene mas digitos impares que pares");
			}
		}
		else {
			y++;
			if (z > y)
				printf ("El numero tiene mas digitos pares que impares");
			else {
				if (z == y)
					printf ("El numero tiene tantos digitos pares como impares");
				else
					printf ("El numero tiene mas digitos impares que pares");
			}
		}
	}
	else {
		printf ("El numero debe ser de 4 digitos\n");
		punto36 (x);
	}
}

int punto37 (int x, int y)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		if ((x % y) == 0)
			printf ("El numero %i es multiplo de %i", x, y);
		else {
			if ((y % x) == 0)
				printf ("El numero %i es multiplo de %i", y, x);
			else
				printf ("Ningun numero es multiplo del otro");
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos\n");
		punto37 (x, y);
	}
}

int punto38 (int x, int y, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	printf ("Inserte otro numero: ");
	scanf ("%i", &z);
	if (x > 0 && y > 0 && z > 0)
	{
		if (((x % 10) == (y % 10)) && ((x % 10) == (z % 10)))
			printf ("El ultimo digito de los tres numeros es igual");
		else
			printf ("El ultimo digito de los tres numeros es diferente");
	}
	else {
		printf ("Lo numeros ingresados deben ser positivos\n");
		punto38 (x, y, z);
	}
}

int punto39 (int x, int y, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero: ");
	scanf ("%i", &y);
	printf ("Inserte otro numero: ");
	scanf ("%i", &z);
	if (x > 0 && y > 0 && z > 0)
	{
		if (((x % 100) / 10) == ((y % 100) / 10) && ((x % 100) / 10) == ((z % 100) / 10))
			printf ("El penultimo digito de los tres numeros es igual");
		else
			printf ("El penultimo digito de los tres numeros es diferente");
	}
	else {
		printf ("Los numeros ingresados deben ser positivos\n");
		punto39 (x, y, z);
	}
}

int punto40 (int x, int y)
{
	if (x >= y)
	{
		if ((x - y) <= 10)
		{
			if (y < x)
			{
				printf ("%i\n", y);
				y++;
				punto40 (x, y);
			}
			else ;
		}
		else
			printf ("La diferencia entre los numeros es mayor que 10");
	}
	else {
		if ((y - x) <= 10)
		{
			if (x < y)
			{
				printf ("%i\n", x);
				x++;
				punto40 (x, y);
			}
			else ;
		}
		else
			printf ("La diferencia entre los numeros es mayor que 10");
	}
}

int punto41 (int x, int y)
{
	printf ("Ingrese un numero: ");
	scanf ("%i", &x);
	printf ("Ingrese otro numero: ");
	scanf ("%i", &y);
	if (x >= y)
	{
		int w = 0;
		for (int z = 2; z <= (sqrt (x - y)); z++) {
			if (((x - y) % z) == 0)
			w = 1;
			else ;
		}
		if (w == 1)
			printf ("La diferencia de los numeros no es un numero primo");
		else 
			printf ("La diferencia de los numeros es un numero primo");
	}
	else {
		int w = 0;
		for (int z = 2; z <= (sqrt (y - x)); z++) {
			if (((y - x) % z) == 0)
			w = 1;
			else ;
		}
		if (w == 1)
			printf ("La diferencia de los numeros no es un numero primo");
		else 
			printf ("La diferencia de los numeros es un numero primo");
	}
}

int punto42 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	if (((x - y) % 2) == 0)
		printf ("La diferencia entre los numweros es un numero par");
	else 
		printf ("La diferencia entre los numeros es un numero impar");
}

int punto43 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segundo numero: ");
	scanf ("%i", &y);
	if (x % (x - y) == 0 && y % (x - y) == 0)
		printf ("La diferencia entre los numeros es divisor de ambos numeros");
	else {
		if (x % (x - y)== 0)
			printf ("La diferencia entre los numeros es divisor del primero");
		else {
			if (y % (x - y) == 0)
				printf ("La diferencia entre los numeros es divisor del segundo");
			else
				printf ("La diferencia entre los numeros no es divisor de ninguno de los numeros");
		}
	}
}

int punto44 (int x)
{
	printf("Ingrese un numero de 4 digitos: ");
	scanf ("%i", &x);
	if (x >= 1000 && x <= 9999)
	{
		if (((x/1000) % ((x /100) % 10) == 0) || ((x/1000) % ((x / 10) % 10) == 0) || ((x/1000) % (x % 10) == 0))
		{
			if ((x /100) % 10 != 0)
			{
				if ((x/1000) % ((x /100) % 10) == 0)
					printf("El primer digito es multiplo del segundo");
				else;
			}
			else ;
			if ((x /10) % 10 != 0)
			{
				if ((x/1000) % ((x / 10) % 10) == 0)
					printf("\nEl primer digito es multiplo del tercero");
				else;
			}
			else ;
			if (x % 10 != 0)
			{
				if ((x/1000) % (x % 10) == 0)
					printf("\nEl primer digito es multiplo del ultimo");
				else;
			}
			else ;
		}
		else 
			printf ("El primer digito no es multiplo de ninguno de los otros");
	}
		else {
		printf ("El numero debe ser de 4 digitos.");
		punto44 (x);
	}
}

int punto45 (int x)
{
	printf ("Ingrese un numero de 2 digitos: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
		int z = (x / 10) + (x % 10);
		if (x % 2 == 0)
			printf ("El numero es par de dos digitos: %i\n", z);
		else;
		if ((x % 5) == 0 && x > 0 && x < 30)
			printf ("El numero es nmultiplo de 5 menor que 30: %i", x/10);
	}
	else {
		if ((x == 2) || (x == 3) || (x == 5) || (x == 7))
			printf ("El numero es primo menor que 10: %i\n", x);
		else;
		if ((x % 5) == 0 && x > 0 && x < 30)
			printf ("El numero es nmultiplo de 5 menor que 30: %i", x/10);
		else;
	}
}

int punto46 (int x)
{
	printf ("Ingrese un numero de dos digitos: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
		if (x % 10 == 1)
			printf ("El numero termina en 1: %i", x / 10);
		else {
			if (x % 10 == 2)
				printf ("El numero termina en 2: %i", (x % 10) + (x / 10));
			else {
				if (x % 10 == 3)
					printf ("El numero termina en 3: %i", (x % 10) * (x / 10));
				else
					printf ("El numero no cumple ninguna condicion");
			}
		}
	}
	else {
		printf ("El numero debe ser de dos digitos");
		punto46 (x);
	}
}

int punto47 (int x, int y)
{
	printf ("Ingrese el primer numero: ");
	scanf ("%i", &x);
	printf ("Ingrese el segnudo numero: ");
	scanf ("%i", &y);
	int dif = abs(x - y);
	if (x >= 0 && x <= 99 && y >= 0 && y <= 99)
	{
		int z = 0;
		if (dif % 2 == 0)
		{
			int sum = (x % 10) + (x / 10) + (y % 10) + (y / 10);
			printf ("La diferencia entre los numeros es par: %i\n", sum);
		}
		else z++;
		if ((dif == 2) || (dif == 3) || (dif == 5) || (dif == 7))
			printf ("La diferencia entre los numeros es primo menor que 10: %i\n", x*y);
		else z++;
		if (dif % 10 == 4)
			printf ("Unidad primer numero: %i\nDecena primer numero: %i\nUnidad segundo numero: %i\nDecena segundo numero: %i", x % 10, x / 10, y % 10, y / 10);
		else z++;
		if (z == 3)
		printf ("Esta pareja de numeros no cumple con ninguna condicion");
		else ;
	}
	else {
		printf ("Los numeros ingresados deben ser positivos menores que 100\n");
		punto47 (x, y);
	}
}

int punto48 (int x)
{
	printf ("Ingrese el numero: ");
	scanf ("%i", &x);
	if (x > 0 && x < 100)
	{
		if ((x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0) || (x % 7 == 0))
			printf ("El numero es no primo menor que 100");
		else 
			printf ("El numero es primo menor que 100");
	}
	else
		printf ("El numero no aplica para esta funcion");
}

int punto49 (int x)
{
	printf ("Ingrese un numero: ");
	scanf ("%i", &x);
	if (x % 4 == 0)
	{
		if ((x % 10 == 2) || (x % 10 == 3) || (x % 10 == 5) || (x % 10 == 7))
			printf ("El ultimo digito del numero es primo");
		else 
			printf ("El ultimo digito del numero no es primo");
	}
	else 
		printf ("El numero no es multiplo de 4");
}

int punto50 (int x)
{
	printf ("Ingrese el numero: ");
	scanf ("%i", &x);
	if (x >= 0 && x <= 99)
	{
		int z = 0;
		if (x % 4 == 0)
		printf ("El numero es multiplo de 4: %i\n", x / 2);
		else z++;
		if (x % 5 == 0)
		printf ("El numero es multiplo de 5: %i\n", x*x);
		else z++;
		if (x % 6 == 0)
		printf ("El numero es multiplo de 6: %i", x/10);
		else z++;
		if (z == 3)
		printf ("Este numero no cumple ninguna condicion");
		else ;
	}
	else {
		printf ("El numero ingresado debe ser positivo menor que 100\n");
		punto50 (x);
	}
}

int cond110 (void)
{
	int opc = -1, x = 0, y = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 1 al 10\n");
		printf ("1. Leer un numero entero y determinar si es un numero terminado en 4.\n");
		printf ("2. Leer un numero entero y determinar si tiene 3 digitos.\n");
		printf ("3. Leer un numero entero y determinar si es negativo.\n");
		printf ("4. Leer un numero entero de dos digitos y determinar a cuanto es igual la suma de sus dgitos.\n");
		printf ("5. Leer un numero entero de dos digitos y determinar si ambos digitos son pares.\n");
		printf ("6. Leer un numero entero de dos digitos menor que 20 y determinar si es primo.\n");
		printf ("7. Leer un numero entero de dos digitos y determinar si es primo y ademas si es negativo.\n");
		printf ("8. Leer un numero entero de dos digitos y determinar si sus dos digitos son primos.\n");
		printf ("9. Leer un numero entero de dos digitos y determinar si un digito es multiplo del otro.\n");
		printf ("10. Leer un numero entero de dos digitos y determinar si los dos digitos son iguales.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: punto1 (x);
					getch();
					break;
			case 2:	punto2 (x);
					getch();
					break;
			case 3: punto3 (x);
					getch();
					break;
			case 4: punto4 (x);
					getch();
					break;
			case 5: punto5 (x);
					getch();
					break;
			case 6: punto6 (x);
					getch();
					break;
			case 7: punto7 (x, y);
					getch();
					break;
			case 8: punto8 (x);
					getch();
					break;
			case 9: punto9 (x);
					getch();
					break;
			case 10: punto10 (x);
					getch();
					break;
		}
	}
}

int cond1120 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 11 al 20\n");
		printf ("1. Leer dos numeros enteros y determinar cual es el mayor.\n");
		printf ("2. Leer dos numeros enteros de dos digitos y determinar si tienen digitos comunes.\n");
		printf ("3. Leer dos numeros enteros de dos digitos y determinar si la suma de los dos numeros origina un numero par.\n");
		printf ("4. Leer dos numeros enteros de dos digitos y determinar a cuanto es igual la suma de todos los digitos.\n");
		printf ("5. Leer un numero entero de tres digitos y determinar a cuanto es igual la suma de sus digitos.\n");
		printf ("6. Leer un numero entero de tres digitos y determinar si al menos dos de sus tres digitos son iguales.\n");
		printf ("7. Leer un numero entero de tres digitos y determinar en que posicion esta el mayor digito.\n");
		printf ("8. Leer un numero entero de tres digitos y determinar si algun digito es multiplo de los otros.\n");
		printf ("9. Leer tres numeros enteros y determinar cual es el mayor. Usar solamente dos variables.\n");
		printf ("10. Leer tres numeros enteros y mostrarlos ascendentemente.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: punto11 (x, y);
					getch();
					break;
			case 2:	punto12 (x, y);
					getch();
					break;
			case 3: punto13 (x, y);
					getch();
					break;
			case 4: punto14 (x, y);
					getch();
					break;
			case 5: punto15 (x);
					getch();
					break;
			case 6: punto16 (x);
					getch();
					break;
			case 7: punto17 (x);
					getch();
					break;
			case 8: punto18 (x);
					getch();
					break;
			case 9: punto19 (x, y);
					getch();
					break;
			case 10: punto20 (x, y, z);
					getch();
					break;
		}
	}
}

int cond2130 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 21 al 30\n");
		printf ("1. Leer tres numeros enteros de dos digitos cada uno y determinar en cual de ellos se encuentra el mayor digito.\n");
		printf ("2. Leer un numero entero de tres digitos y determinar si el primer digito es igual al ultimo.\n");
		printf ("3. Leer un numero entero de tres digitos y determinar cuantos digitos primos tiene.\n");
		printf ("4. Leer un numero entero de tres digitos y determinar cuantos digitos pares tiene.\n");
		printf ("5. Leer un numero entero de tres digitos y determinar si alguno de sus digitos es igual a la suma de los otros dos.\n");
		printf ("6. Leer un numero entero de cuatro digitos y determinar a cuanto es igual la suma de sus digitos.\n");
		printf ("7. Leer un numero entero de cuatro digitos y determinar cuantos digitos pares tiene.\n");
		printf ("8. Leer un numero entero menor que 50 y positivo y determinar si es un numero primo.\n");
		printf ("9. Leer un numero entero de cinco digitos y determinar si es un numero capicuo.\n");
		printf ("10. Leer un numero entero de cuatro digitos y determinar si el segundo digito es igual al penultimo.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: punto21 (x, y, z);
					getch();
					break;
			case 2:	punto22 (x);
					getch();
					break;
			case 3: punto23 (x);
					getch();
					break;
			case 4: punto24 (x);
					getch();
					break;
			case 5: punto25 (x);
					getch();
					break;
			case 6: punto26 (x);
					getch();
					break;
			case 7: punto27 (x);
					getch();
					break;
			case 8: punto28 (x);
					getch();
					break;
			case 9: punto29 (x);
					getch();
					break;
			case 10: punto30 (x);
					getch();
					break;
		}
	}
}

int cond3140 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 31 al 40\n");
		printf ("1. Leer un numero entero y determina si es igual a 10.\n");
		printf ("2. Leer un numero entero y determinar si es multiplo de 7.\n");
		printf ("3. Leer un numero entero y determinar si termina en 7.\n");
		printf ("4. Leer un numero entero menor que mil y determinar cuantos digitos tiene.\n");
		printf ("5. Leer un numero entero de dos digitos, guardar cada digito en una variable diferente y luego mostrarlas en pantalla.\n");
		printf ("6. Leer un numero entero de 4 digitos y determinar si tiene mas digitos pares o impares.\n");
		printf ("7. Leer dos numeros enteros y determinar cual es multiplo de cual.\n");
		printf ("8. Leer tres numeros enteros y determinar si el ultimo digito de los tres numeros es igual.\n");
		printf ("9. Leer tres numeros enteros y determinar si el penultimo digito de los tres numeros es igual.\n");
		printf ("10. Leer dos nmeros enteros y si la diferencia entre los dos es menor o igual a 10 entonces mostrar en pantalla todos\n    los enteros comprendidos entre el menor y el mayor de los numeros leidos.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: punto31 (x);
					getch();
					break;
			case 2:	punto32 (x);
					getch();
					break;
			case 3: punto33 (x);
					getch();
					break;
			case 4: punto34 (x);
					getch();
					break;
			case 5: punto35 (x);
					getch();
					break;
			case 6: punto36 (x);
					getch();
					break;
			case 7: punto37 (x, y);
					getch();
					break;
			case 8: punto38 (x, y, z);
					getch();
					break;
			case 9: punto39 (x, y, z);
					getch();
					break;
			case 10: printf ("Ingrese el primer numero: ");
					scanf ("%i", &x);
					printf ("Ingrese el segundo numero: ");
					scanf ("%i", &y);
					punto40(x, y);
					getch();
					break;
		}
	}
}

int cond4150 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 41 al 50\n");
		printf ("1. Leer dos numeros enteros y determinar si la diferencia entre los dos es un numero primo.\n");
		printf ("2. Leer dos numeros enteros y determinar si la diferencia entre los dos es un numero par.\n");
		printf ("3. Leer dos numeros enteros y determinar si la diferencia entre los dos es un numero divisor exacto de alguno de los dos   numeros.\n");
		printf ("4. Leer un numero entero de 4 digitos y determinar si el primer digito es multiplo de alguno de los otros digitos.\n");
		printf ("5. Leer un numero entero de 2 digitos y si es par mostrar en pantalla la suma de sus digitos, si es primo\n   y menor que 10 mostrar en pantalla su ultimo digito y si es multiplo de 5 y menor que 30 mostrar en pantalla\n   el primer digito.\n");
		printf ("6. Leer un numero entero de 2 digitos y si terminar en 1 mostrar en pantalla su primer digito, si termina en 2\n   mostrar en pantalla la suma de sus digitos y si termina en 3 mostrar en pantalla el producto de sus dos digitos.\n");
		printf ("7. Leer dos numeros enteros y si la diferencia entre los dos numeros es par mostrar en pantalla la suma de los digitos\n   de los numeros, si dicha diferencia es un numero primo menor que 10 entonces mostrar en pantalla el producto\n   de los dos numeros y si la diferencia entre ellos terminar en 4 mostrar en pantalla todos los digitos por separado.\n");
		printf ("8. Leer un numero entero y si es menor que 100 determinar si es primo.\n");
		printf ("9. Leer un numero entero y si es multiplo de 4 determinar si su ultimo digito es primo.\n");
		printf ("10. Leer un numero entero y si es multiplo de 4 mostrar en pantalla su mitad, si es multiplo de 5 mostrar en pantalla su\n   cuadrado y si es multiplo el 6 mostrar en pantalla su primer digito.\n   Asumir que el numero no es mayor que 100.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: punto41 (x, y);
					getch();
					break;
			case 2:	punto42 (x, y);
					getch();
					break;
			case 3: punto43 (x, y);
					getch();
					break;
			case 4: punto44 (x);
					getch();
					break;
			case 5: punto45 (x);
					getch();
					break;
			case 6: punto46 (x);
					getch();
					break;
			case 7: punto47 (x, y);
					getch();
					break;
			case 8: punto48 (x);
					getch();
					break;
			case 9: punto49 (x);
					getch();
					break;
			case 10: punto50(x);
					getch();
					break;
		}
	}
}

int cond_menu (void)
{
	int opc = -1;
	while (opc != 0) {
		system ("cls");
		printf ("TALLER 1 - CONDICIONALES\n");
		printf ("1. Ejercicios del 1 al 10\n");
		printf ("2. Ejercicios del 11 al 20\n");
		printf ("3. Ejercicios del 21 al 30\n");
		printf ("4. Ejercicios del 31 al 40\n");
		printf ("5. Ejercicios del 41 al 50\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: cond110();
					break;
			case 2: cond1120 ();
					break;
			case 3: cond2130 ();
					break;
			case 4: cond3140();
					break;
			case 5: cond4150();
					break;
		}
	}
}

int main (void)
{
	cond_menu ();
}
