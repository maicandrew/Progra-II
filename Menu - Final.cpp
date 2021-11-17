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
		else;
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

int ciclos1 (int x)
{
	int z;
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	for (z = 1; z < x; z++){
	printf ("%i\n", z);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos1 (x);
	}
}

int ciclos2 (int x)
{
	int z = 2;
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	while (z < x){
	printf ("%i\n", z);
	z += 2;
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos2 (x);
	}
}

int ciclos3 (int x)
{
	int z;
	printf ("Inserte un numero para mostrar sus divisores: ");
	scanf ("%i", &x);
	if (x > 0)
	for (z = 2; z < x; z++){
		if ((x % z) == 0)
		printf ("%i\n", z);
		else ;
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos3 (x);
	}
}

int ciclos4 (int x, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &z);
	printf ("Inserte otro numero: ");
	scanf ("%i", &x);
	if (x > 0 && z > 0) {
		if (x > z)
		{
			int y = z + 1;
			while (y < x){
			printf ("%i\n", y);
			y++;
			}
		}
		else {
			int y = x + 1;
			while (y < z){
			printf ("%i\n", y);
			y++;
			}
		}
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos4 (x, z);
	}
}

int ciclos5 (int x, int z)
{
	
	printf ("Inserte un numero: ");
	scanf ("%i", &z);
	printf ("Inserte otro numero: ");
	scanf ("%i", &x);
	if (x > 0 && z > 0)
	{
		if (x > z)
		{
		for (int y = z + 1; y < x; y++){
			if ((y % 10) == 4)
			printf ("%i\n", y);
			else ;
			}
		}
		else {
		for (int y = x + 1; y < z; y++){
			if ((y % 10) == 4)
			printf ("%i\n", y);
			else ;
			}
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos\n");
		ciclos5 (x, z);
	}
}

int ciclos6 (int x)
{
	printf ("Inserte un numero de 3 digitos: ");
	scanf ("%i", &x);
	int dig1 = (x / 100);
	int dig2 = ((x % 100) / 10);
	int dig3 = (x % 10);
	int z = 1;
	if ((x >= 100) && (x <= 999)) {
	printf ("Numeros entre 1 y el primer digito: ");
	while (z < dig1){
	printf ("%i, ", z);
	z++;
		}
	}
	else {
		printf ("El numero debe ser de 3 digitos\n");
		ciclos6 (x);
	}
	printf ("\nNumeros entre 1 y el segundo digito: ");
	z = 1;
	while (z < dig2){
	printf ("%i, ", z);
	z++;
		}
	printf ("\nNumeros entre 1 y el tercer digito: ");
	z = 1;
	while (z < dig3){
	printf ("%i, ", z);
	z++;
		}
}

int ciclos7 (void)
{
	int x;
	for (x = 1; x <= 100; x++) {
		printf ("%i\n", x);
	}
}

int ciclos8 (void)
{
	int x;
	for (x = 20; x <= 200; x+=2) {
		printf ("%i\n", x);
	}
}

int ciclos9 (void)
{
	int x;
	for (x = 25; x <= 205; x++) {
		if ((x % 10) == 6)
		printf ("%i\n", x);
		else ;
	}
}

int ciclos10 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	int suma = 0;
	int y = 1;
	if (x > 0)
	{
		while (y <= x) {
			suma += y;
			y++;
		}
		printf ("La suma de los numeros entre 1 y %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos10 (x);
	}
}

int ciclos11 (int x)
{
	int y;
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if ((x >= 10) && (x <= 99))
	{
		if ((x / 10) > (x % 10))
		{
			printf ("Numero entre el segundo y el primer digito: ");
			for (y = ((x % 10) + 1); y < (x / 10); y++) {
			printf ("%i, ", y);
			}
		}
		else {
			printf ("Numero entre el primer y el segundo digito: ");
			for (y = ((x / 10) + 1); y < (x % 10); y++) {
			printf ("%i, ", y);
				}
			}
	}
	else {
	printf ("El numero debe tener 2 digitos\n");
	ciclos11 (x);
	}
}

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

int ciclos13 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		printf ("Los mutiplos de 5 entre 1 y %i son: ", x);
		for (int z = 1; z <= x; z++) {
		if ((z % 5) == 0)
		printf ("%i, ", z);
		else ;
		}
	}
	else {
		printf ("El numero ingrsado debe ser positivo");
		ciclos13 (x);
	}
}

int ciclos14 (void)
{
	int z = 1;
	printf ("Los primeros 20 multiplos de 3 son: ");
	while (z <= 20) {
	printf ("%i, ", 3*z);
	z++;
	}
}

int ciclos15 (void)
{
	int suma = 0;
	for (int z = 1; z <= 20; z++) {
	suma += z*3;
	}
	printf ("La suma de los 20 primeros multiplos de 3 es: %i", suma);
}

int ciclos16 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 1;
		int suma = 0;
		while (z <= x) {
		suma += z*3;
		z++;
		}
		printf ("El promedio de los %i primeros multiplos de 3 es: %d", x, suma/x);
	}
	else {
		printf ("El numero ingresado debeser positivo");
		ciclos16 (x);
	}
	
}

int ciclos17 (int x, int y)
{
	printf ("Inserte un numero para multiplos de 2: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero para multiplo de 5: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int suma2 = 0;
		int suma5 = 0;
		for (int z = 1; z <= x; z++) {
		suma2 += z*2;
		}
		for (int z = 1; z <= y; z++) {
		suma5 += z*5;
		}
		if (suma2 / x > suma5 / y)
			printf ("El promedio de los %i multiplos de 2 es mayor que el promedio de los %i primeros multiplos de 5\n", x, y);
		else
			printf ("El promedio de los %i multiplos de 5 es mayor que el promedio de los %i primeros multiplos de 2\n", y, x);
	}
	else {
		printf ("Los numero ingresados deben ser positivos\n");
		ciclos17 (x, y);
	}
}

int ciclos18 (int x, int z)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &z);
	printf ("Inserte otro numero: ");
	scanf ("%i", &x);
	if ((x > 0) && (z > 0))
	{
		if (x > z)
		{
			printf ("Los multiplos de 5 entre %i y %i son: ", z, x);
			int y = z + 1;
			while (y < x) {
				if ((y % 5) == 0)
				{
					printf ("%i, ", y);
					y++;
				}
				else y++;
			}
		}
		else {
			printf ("Los multiplos de 5 entre %i y %i son: ", x, z);
			int y = x + 1;
			while (y < z) {
				if ((y % 5) == 0)
				{
					printf ("%i, ", y);
					y++;
				}
				else y++;
			}
		}
	}
	else {
		printf ("Los numeros ingresados deben ser positivos");
		ciclos18 (x, z);
	}
}

int ciclos19 (int x)
{
	int y;
	int z = 0;
	printf ("Inserte un numero para determinar si es primo: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		for (y = 2; y <= (sqrt (x)); y++) {
		if ((x % y) == 0)
		z = 1;
		else ;
		}
		if (z == 1)
		printf ("El numero %i no es primo", x);
		else printf ("El numero %i es primo", x);
	}
	else {
		printf ("El numero ingrsado debe ser postivo");
		ciclos19 (x);
	}
}

int ciclos20 (int x)
{
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		while ((x / (pow (10, z))) >= 10) {
			z++;
		}
		printf ("El numero %i tiene %i digitos", x, (z + 1));
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos20 (x);
	}
}

int ciclos21 (int x)
{
	printf ("Inserte un numero para determinar la suma de sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z, suma = 0;
		for (z = 0; ((x / (pow (10, z))) > 9); z++) {
			
		}
		for (; z >= 0; z--) {
		int exp = (pow (10, z + 1));
		suma += ((x % exp) / (pow (10, z)));
		}
		printf ("La suma de los digitos de %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser positivo");
		ciclos21 (x);
	}
}

int ciclos22 (int x)
{
	printf ("Inserte un numero para determinar cuantas veces tiene el numero 1: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		while (((x / (pow (10, z))) >= 10)) {
			z++;
		}
		int y = 0;
		int dig;
		while (z >= 0) {
		int exp = (pow (10, z + 1));
		dig = ((x % exp) / (pow (10, z)));
		if (dig == 1)
		{
			y++;
			z--;
		}
		else z--;
		}
		printf ("El numero %i tiene %i veces el digito 1", x, y);
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos22 (x);
	}
}

int ciclos23 (int x)
{
	printf ("Inserte un numero para determinar si la suma de sus digitos es un numero primo: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z;
		int w = 0;
		for (z = 0; ((x / (pow (10, z))) >= 10); z++) {}
		int suma = 0;
		for (; z >= 0; z--) {
		int exp = (pow (10, z + 1));
		suma += ((x % exp) / (pow (10, z)));
		}
		for (int y = 2; y <= (sqrt (suma)); y++) {
		if ((suma % y) == 0)
		w = 1;
		else ;
		}
		if (w == 1)
		printf ("La suma de los digitos de %i no es un numero primo", x);
		else printf ("La suma de los digitos de %i es un numero primo", x);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos23 (x);
	}
}

int ciclos24 (int x)
{
	printf ("Inserte un numero para determinar la suma de sus digitos pares: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		int suma = 0;
		while ((x / (pow (10, z))) >= 10) {
			z++;
		}
		int exp = (pow (10, z + 1));
		int dig = ((x % exp) / (pow (10, z)));
		while (z >= 0) {
			if ((dig  % 2) == 0)
			{
				suma += dig;
				z--;
				exp = (pow (10, z + 1));
				dig = ((x % exp) / (pow (10, z)));
			}
			else {
				z--;
				exp = (pow (10, z + 1));
				dig = ((x % exp) / (pow (10, z)));
			}
		}
		printf ("La suma de los digitos pares de %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos24 (x);
	}
}

int ciclos25 (int x)
{
	printf ("Inserte un numero para determinar el promedio entero de sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z;
		for (z = 0; ((x / (pow (10, z))) >= 10); z++) {}
		int w = z + 1;
		int suma = 0;
		for (; z >= 0; z--) {
		int exp = (pow (10, z + 1));
		suma += ((x % exp) / (pow (10, z)));
		}
		int prom = suma / w;
		printf ("El promedio entero de los digitos de %i es: %i", x, prom);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos25 (x);
	}
}

int ciclos26 (int x)
{
	printf ("Inserte un numero para determinar el mayor de sus digitos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z = 0;
		while ((x / (pow (10, z))) >= 10) {
			z++;
		}
		int dig = (pow (10, z + 1));
		int dig2 = (pow (10, z));
		int y = ((x % dig) / dig2);
		while (z >= 0) {
			dig2 = (pow (10, z));
			if (y >= ((x / dig2) % 10))
			z--;
			else {
				y = ((x / dig2) % 10);
				z--;
			}
		}
		printf ("El mayor digito de %i es: %i", x, y);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos26 (x);
	}
}

int ciclos27 (int x, int y)
{
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &x);
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &y);
	if (x > 0)
	{
		int z;
		int w;
		for (z = 0; ((x / (pow (10, z))) >= 10); z++) {
		}
		for (w = 0; ((y / (pow (10, w))) >= 10); w++) {
		}
		if (z >= w)
		printf ("El numero con mas digitos es %i", x);
		else printf ("El numero con mas digitos es %i", y);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos27 (x, y);
	}
}

int ciclos28 (int x, int y)
{
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &x);
	printf ("Inserte un numero para determinar sus digitos: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int t = x;
		int z = 0;
		int r = y;
		int w = 0;
		while (x > 0) {
			if (((x % 10) == 2) || ((x % 10) == 3) || ((x % 10) == 5) || ((x % 10) == 7))
			{
				z++;
				x = x / 10;
			}
			else x = x / 10;
		}
		while (y > 0) {
			if (((y % 10) == 2) || ((y % 10) == 3) || ((y % 10) == 5) || ((y % 10) == 7))
			{
				w++;
				y = y / 10;
			}
			else y = y / 10;
		}
		if (z >= w)
		printf ("El numero con mas digitos primos es: %i", t);
		else printf ("El numero con mas digitos primos es: %i", r);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos28 (x, y);
	}
}

int ciclos29 (int x)
{
	printf ("Inserte un numero para determinar su primer digito: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		int z;
		for (z = 0; (x / pow (10, z)) >= 10; z++){
		}
		int y = x / pow (10, z);
		printf ("El primer digito de %i es: %i", x, y);
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos29 (x);
	}
}

int ciclos30 (int x)
{
	printf ("Inserte un numero para mostrar sus compenentes numericos: ");
	scanf ("%i", &x);
	if (x > 0)
	{
		printf ("Los componentes numericos del numero son: ");
		int z = 2;
		while (z < x){
			if ((x % z) == 0){
				printf ("%i, ", z);
				z++;
			}
			else z++;
		}
	}
	else {
		printf ("El numero ingresado debe ser positivo\n");
		ciclos30 (x);
	}
}

int ciclos31 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	int suma = 0;
	int z = 0;
	for (; x != 0;) {
		printf ("Inserte un numero: ");
		scanf ("%i", &x);
		if ((x % 10) == 5) {
		suma += x;
		z++;
		}
		else ;
	}
	if (z == 0)
	printf ("El promedio de los numeros terminados en 5 es: 0");
	else {
		float prom = (suma / z);
		printf ("El promedio de los numeros terminados en 5 es: %f", prom);
	}
}

int ciclos32 (int x)
{
	printf ("Inserte un numero: ");
	scanf ("%i", &x);
	float suma = 0, w = 0;
	while (x != 0) {
		int z = 0, y = 2;
		while (y <= (sqrt (x))) {
			if ((x % y) == 0)
			{
				z = 1;
				y++;
			}
			else 
				y++;
		}
		if (z == 0)
		{
			suma += x;
			w++;
			printf ("Inserte un numero: ");
			scanf ("%i", &x);
		}
		else {
			printf ("Inserte un numero: ");
			scanf ("%i", &x);
		}
	}
	if (w == 0)
	printf ("El promedio de los numeros primos es: 0");
	else {
		float prom = (suma / w);
		printf ("El promedio de los numeros primos es: %f", prom);
	}
}

int ciclos33 (void)
{
	int x, y, z = 0, w = 0;
	for (x = 32768; w == 0; x--) {
		for (y = 2; y <= (sqrt (x)); y++) {
			if ((x % y) == 0)
			z = 1;
			else ;
		}
		if (z == 1)
		z = 0;
		else {
			w = 1;
		}
	}
	printf ("El numero primo mas cercano a 32768 es: %i", x+1);
}

int ciclos34 (void)
{
	int x = 10;
	while (x > 0) {
		printf ("%i\n", 11-x);
		x--;
	}
}

int ciclos35 (int x, int y)
{
	printf ("Inserte un numero para determinar su primer digito: ");
	scanf ("%i", &x);
	printf ("Inserte otro numero para determinar su primer digito: ");
	scanf ("%i", &y);
	if (x > 0 && y > 0)
	{
		int z, w;
		for (z = 0; (x / pow (10, z)) >= 10; z++){
		}
		for (w = 0; (y / pow (10, w)) >= 10; w++){
		}
		int d1 = x / pow (10, z);
		int d2 = y / pow (10, w);
		printf ("El producto mutuo del primer digito de %i y %i es: %i", x, y, d1*d2);
	}
	else {
		printf ("Los numeros ingresados deben ser postivos\n");
		ciclos35 (x, y);
	}
}

int ciclos36 (void)
{
	printf ("Tabla de multiplicar del 5:\n");
	int x = 1;
	while (x <= 10) {
		printf (" 5 * %i = %i\n", x, 5*x);
		x++;
	}
}

int ciclos37 (void)
{
	
	for (int z = 1; z <= 10; z++)
	{
		printf ("\nTabla del %i:\n", z);
		for (int x = 1; x <= 10; x++)
		{
		printf ("%i * %i = %i\n", z, x, x*z);
		}
	}
}

int ciclos38 (int x)
{
	printf ("Ingrese un numero para mostrar en pantalla su tabla de multiplicar: ");
	scanf ("%i", &x);
	printf ("Tabla de multiplicar de %i\n", x);
	int y = 1;
	while (y <= 10) {
		printf ("%i * %i = %i\n", x, y, x*y);
		y++;
	}
}

int ciclos39 (void)
{
	int x = 0;
	int y = 1;
	int z = 1;
	printf ("Elementos de la serie de Fibonacci:\n");
	for (; y < 10000; z = x + y)
	{
		printf ("%i\n", z);
		x = y;
		y = z;
	}
}

int ciclos40 (int x)
{
	printf ("Ingrese un numero de dos digitos para determinar si se encuentra en la serie Fibonacci: ");
	scanf ("%i", &x);
	if (x >= 10 && x <= 99)
	{
		int w = 0;
		int y = 1;
		int z = 1;
		while (z < 100) {
			if (x == z)
			{
				printf ("El numero %i pertenece a la serie Fibonacci", x);
				z = 100;
			}
			else {
				w = y;
				y = z;
				z = w + y;
			}
		}
		if (z != 100)
		printf ("El numero %i no pertenece a la serie Fibonacci", x);
		else;
	}
	else {
		printf ("El numero ingresado debe ser postivo\n");
		ciclos40 (x);
	}
}

int ciclos41 (void)
{
	int x = 0;
	int y = 1;
	int z = 1;
	int suma = 0;
	for (; z <= 100; z = x + y)
	{
		x = y;
		y = z;
		suma += z;
	}
	printf ("La sua de los elementos de la serie Fibonacci entre 0 y 100 es: %i\n", suma);
}

int ciclos42 (void)
{
	float x = 0, y = 1, z = 1, suma = 0, w = 0;
	for (; z <= 1000; z = x + y)
	{
		x = y;
		y = z;
		w++;
		suma += z;
	}
	float prom = suma / w;
	printf ("El promedio de los elementos de la serie Fibonacci entre 0 y 1000 es: %f\n", prom);
}

int ciclos43 (void)
{
	int x = 0;
	int y = 1;
	int z = 1;
	int w = 0;
	for (; z <= 2000; z = x + y)
	{
		x = y;
		y = z;
		if (z>=1000)
		w++;
		else ;
	}
	printf ("La serie Fibonacci tiene %i elementos entre 1000 y 2000\n", w);
}

int ciclos44 (int x)
{
	printf ("Ingrese un numero para determinar su factorial: ");
	scanf ("%i", &x);
	if (x >= 0 && x < 13)
	{
		int z = 1;
		int y = 1;
		while (z <= x) {
			y = y*z;
			z++;
		}
		printf ("El factorial de %i es %i", x, y);
	}
	else {
		printf ("El numero ingresado debe ser postivo menor que 13\n");
		ciclos44 (x);
	}
}

int ciclos45 (int x)
{
	printf ("Ingrese un numero para hallar su factorial: ");
	scanf ("%i", &x);
	if (x >= 0 && x < 13)
	{
		int z = 1;
		for (int y = 1; y <= x; y++) {
			z = z * y;
			printf ("El factorial de %i es: %i\n", y, z);
		}
	}
	else {
		printf ("El numero ingresado debe ser postivo menor que 13\n");
		ciclos45 (x);
	}
}

int ciclos46 (int x)
{
	printf ("Inserte un numero para mostrar los factoriales hasta el: ");
	scanf ("%i", &x);
	if (x > 0 && x < 13)
	{
		float y, z = 1, suma = 0;
		for (y = 1; y <= x; y++)
		{
			z = z * y;
			suma += z;
		}
		float prom = suma / x;
		printf ("El promedio de los factoriales hasta %i es: %f", x, prom);
	}
	else {
		printf ("El numero ingresado debe ser postivo menor que 13\n");
		ciclos46 (x);
	}
}

int ciclos47 (int x)
{
	printf ("Inserte un numero para mostrar los factoriales hasta el: ");
	scanf ("%i", &x);
	if (x > 0 && x < 13)
	{
		int y, z = 1, suma = 0;
		for (y = 1; y <= x; y++)
		{
			z = z * y;
			suma += z;
		}
		printf ("La suma de los factoriales hasta %i es: %i", x, suma);
	}
	else {
		printf ("El numero ingresado debe ser postivo me7nor que 13\n");
		ciclos47 (x);
	}
}

int ciclos48 (void)
{
	int x, y;
	for (x = 0; x < 10; x++)
	{
		printf ("%i ", x);
		for (y = (x/2)+1; y <= (x/2)+1; y++)
		{
			printf ("%i\n", y);
		}
	}
}

int ciclos49 (void)
{
	int x, y, z = 1;
	for (x = 1; x < 10; x++)
	{
		printf ("%i ", x);
		for (y = ((x-1)/3) + 1; y <= (((x-1)/3)+1); y++)
		{
			printf ("%i ", y);
			if (z <= 3)
			{
				printf ("%i\n", z);
				z++;
			}
			else {
				z = 1;
				printf ("%i\n", z);
				z++;
			}
		}
	}
}

int ciclos50 (void)
{
	int x;
	int y;
	for (x = 0; x < 7; x++)
	{
		printf ("%i ", x);
		for (y = (x/4)+1; y <= (x/4)+1; y++)
		{
			printf ("%i\n", y);
		}
	}
}

int ciclos110 (void)
{
	int opc = -1, x = 0, y = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 1 al 10\n");
		printf ("1. Leer un numero entero y mostrar todos los enteros comprendidos entre 1 y el numero leido.\n");
		printf ("2. Leer un numero entero y mostrar todos los pares comprendidos entre 1 y el numero leido.\n");
		printf ("3. Leer un numero entero y mostrar todos los divisores exactos del numero comprendidos entre 1 y el numero leido.\n");
		printf ("4. Leer dos numeros y mostrar todos los enteros comprendidos entre ellos.\n");
		printf ("5. Leer dos numeros y mostrar todos los numeros terminados en 4 comprendidos entre ellos.\n");
		printf ("6. Leer un numero entero de tres digitos y mostrar todos los enteros comprendidos entre 1 y cada uno de los digitos.\n");
		printf ("7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100.\n");
		printf ("8. Mostrar en pantalla todos los pares comprendidos entre 20 y 200.\n");
		printf ("9. Mostrar en pantalla todos los numeros terminados en 6 comprendidos entre 25 y 205.\n");
		printf ("10. Leer un numero entero y determinar a cuanto es igual la suma de todos los enteros comprendidos entre 1 y el numero leido.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: ciclos1 (x);
					getch();
					break;
			case 2:	ciclos2 (x);
					getch();
					break;
			case 3: ciclos3 (x);
					getch();
					break;
			case 4: ciclos4 (x, y);
					getch();
					break;
			case 5: ciclos5 (x, y);
					getch();
					break;
			case 6: ciclos6 (x);
					getch();
					break;
			case 7: ciclos7 ();
					getch();
					break;
			case 8: ciclos8 ();
					getch();
					break;
			case 9: ciclos9 ();
					getch();
					break;
			case 10: ciclos10 (x);
					getch();
					break;
		}
	}
}

int ciclos1120 (void)
{
	int opc = -1, x = 0, y = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 11 al 20\n");
		printf ("1. Leer un numero entero de dos digitos y mostrar en pantalla todos los enteros comprendidos entre un digito y otro.\n");
		printf ("2. Leer un numero entero de 3 digitos y determinar si tiene el digito 1.\n");
		printf ("3. Leer un entero y mostrar todos los multiplos de 5 comprendidos entre 1 y el numero leido.\n");
		printf ("4. Mostrar en pantalla los primeros 20 multiplos de 3.\n");
		printf ("5. Escribir en pantalla el resultado de sumar los primeros 20 multiplos de 3.\n");
		printf ("6. Mostrar en pantalla el promedio entero de los n primeros multiplos de 3 para un numero n leido.\n");
		printf ("7. Promediar los x primeros multiplos de 2 y determinar si ese promedio es mayor que los y primeros multiplos de 5 para valores de x y y leidos.\n");
		printf ("8. Leer dos numeros entero y mostrar todos los multiplos de 5 comprendidos entre el menor y el mayor.\n");
		printf ("9. Leer un numero entero y determinar si es primo.\n");
		printf ("10. Leer un numero entero y determinar cuantos digitos tiene.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: ciclos11 (x);
					getch();
					break;
			case 2:	ciclos12 (x);
					getch();
					break;
			case 3: ciclos13 (x);
					getch();
					break;
			case 4: ciclos14 ();
					getch();
					break;
			case 5: ciclos15 ();
					getch();
					break;
			case 6: ciclos16 (x);
					getch();
					break;
			case 7: ciclos17 (x, y);
					getch();
					break;
			case 8: ciclos18 (x, y);
					getch();
					break;
			case 9: ciclos19 (x);
					getch();
					break;
			case 10: ciclos20 (x);
					getch();
					break;
		}
	}
}

int ciclos2130 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Condicionales - Ejercicios 21 al 30\n");
		printf ("1. Leer un numero entero y determinar a cuanto es igual la suma de sus digitos.\n");
		printf ("2. Leer un numero entero y determinar cuantas veces tiene el digito 1.\n");
		printf ("3. Leer un numero entero y determinar si la suma de sus digitos es tambien un numero primo.\n");
		printf ("4. Leer un numero entero y determinar a cuanto es igual al suma de sus digitos pares.\n");
		printf ("5. Leer un numero entero y determinar a cuanto es igual el promedio entero de sus digitos.\n");
		printf ("6. Leer un numero entero y determinar cual es el mayor de sus digitos.\n");
		printf ("7. Leer 2 numeros enteros y determinar cual de los dos tiene mayor cantidad de digitos.\n");
		printf ("8. Leer 2 numeros enteros y determinar cual de luos dos tiene mayor cantidad de digitos primos.\n");
		printf ("9. Leer un numero entero y determinar a cuanto es igual el primero de sus digitos.\n");
		printf ("10. Leer un numero entero y mostrar todos sus componentes numericos o sea aquellos para quienes sea un multiplo.\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: ciclos21 (x);
					getch();
					break;
			case 2:	ciclos22 (x);
					getch();
					break;
			case 3: ciclos23 (x);
					getch();
					break;
			case 4: ciclos24 (x);
					getch();
					break;
			case 5: ciclos25 (x);
					getch();
					break;
			case 6: ciclos26 (x);
					getch();
					break;
			case 7: ciclos27 (x, y);
					getch();
					break;
			case 8: ciclos28 (x, y);
					getch();
					break;
			case 9: ciclos29 (x);
					getch();
					break;
			case 10: ciclos30 (x);
					getch();
					break;
		}
	}
}

int ciclos3140 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Ciclos - Ejercicios 31 al 40\n");
		printf ("1. Leer numeros hasta que digiten 0 y determinar a cuanto es igual el promedio de los numeros terminados en 5.\n");
		printf ("2. Leer numeros hasta que digiten 0 y determinar a cuanto es igual el promedio entero de los numero primos leidos.\n");
		printf ("3. Si 32768 es el tope superior para los numeros entero cortos, determinar cual es el numero primo mas cercano por debajo de el.\n");
		printf ("4. Generar los numeros del 1 al 10 utilizando un ciclo que vaya de 10 a 1.\n");
		printf ("5. Leer dos numeros enteros y determinar a cuanto es igual el producto mutuo del primer digito de cada uno.\n");
		printf ("6. Mostrar en pantalla la tabla de multiplicar del numero 5.\n");
		printf ("7. Generar todas las tablas de multiplicar del 1 al 10.\n");
		printf ("8. Leer un numero entero y mostrar en pantalla su tabla de multiplicar.\n");
		printf ("9. Se define la serie de Fibonacci como la serie que comienza con los digitos 1 y 0 y va sumando progresivamente los dos ultimos elementos de la serie, asi: 0 1 1 2 3 5 8 13 21 34...");
		printf ("   Utilizando el concepto de ciclo generar la serie de Fibonacci hasta llegar o sobrepasas el numero 10000.\n");
		printf ("10. Leer un numero de dos digitos y determinar si pertenece a la serie de fibonacci\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: ciclos31 (x);
					getch();
					break;
			case 2:	ciclos32 (x);
					getch();
					break;
			case 3: ciclos33 ();
					getch();
					break;
			case 4: ciclos34 ();
					getch();
					break;
			case 5: ciclos35 (x, y);
					getch();
					break;
			case 6: ciclos36 ();
					getch();
					break;
			case 7: ciclos37 ();
					getch();
					break;
			case 8: ciclos38 (x);
					getch();
					break;
			case 9: ciclos39 ();
					getch();
					break;
			case 10: ciclos40 (x);
					getch();
					break;
		}
	}
}

int ciclos4150 (void)
{
	int opc = -1, x = 0, y = 0, z = 0;
	while (opc != 0) {
		system ("cls");
		printf ("Ciclos - Ejercicios 41 al 50\n");
		printf ("1. Determinar a cuanto es igual la suma de los elementos de la serie de Fibonacci entre 0 y 100.\n");
		printf ("2. Determinar a cuanto es igual el promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000.\n");
		printf ("3. Determinar cuantos elementos de la serie de Fibonacci se encuentran entre 1000 y 2000.\n");
		printf ("4. Leer un numero y calcularle su factorial.\n");
		printf ("5. Leer un numero y calcularle el factorial a todos los enteros comprendidos entre 1 y el numero leido.\n");
		printf ("6. Leer un numero entero y calcular el promedio entero de los factoriales de los enteros comprendidos entre 1 y el numero leido.\n");
		printf ("7. Leer un numero entero y calcular a cuanto es igual la sumatoria de todos los factoriales de los numeros comprendidos entre 1 y el numero leido.\n");
		printf ("8. Utilizando ciclos anidados generar las siguientes parejas de enteros \n0 1\n1 1\n2 2\n3 2\n4 3\n5 3\n6 4\n7 4\n8 5\n9 5\n");
		printf ("9. Utilizando ciclos anidados generar las siguientes ternas de numeros \n1 1 1\n2 1 2\n3 1 3\n4 2 1\n5 2 2\n6 2 3\n7 3 1\n8 3 2\n9 3 3\n");
		printf ("10. 50. Utilizando ciclos anidados generar las siguientes parejas de numeros \n0 1\n1 1\n2 1\n3 1\n4 2\n5 2\n6 2\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: ciclos41 ();
					getch();
					break;
			case 2:	ciclos42 ();
					getch();
					break;
			case 3: ciclos43 ();
					getch();
					break;
			case 4: ciclos44 (x);
					getch();
					break;
			case 5: ciclos45 (x);
					getch();
					break;
			case 6: ciclos46 (x);
					getch();
					break;
			case 7: ciclos47 (x);
					getch();
					break;
			case 8: ciclos48 ();
					getch();
					break;
			case 9: ciclos49 ();
					getch();
					break;
			case 10: ciclos50 ();
					getch();
					break;
		}
	}
}

int ciclos_menu (void)
{
	int opc = -1;
	while (opc != 0) {
		system ("cls");
		printf ("TALLER 1 - CICLOS\n");
		printf ("1. Ejercicios del 1 al 10\n");
		printf ("2. Ejercicios del 11 al 20\n");
		printf ("3. Ejercicios del 21 al 30\n");
		printf ("4. Ejercicios del 31 al 40\n");
		printf ("5. Ejercicios del 41 al 50\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: ciclos110();
					break;
			case 2: ciclos1120 ();
					break;
			case 3: ciclos2130 ();
					break;
			case 4: ciclos3140();
					break;
			case 5: ciclos4150();
					break;
		}
	}
}

int main (void)
{
	int opc = -1;
	while (opc!=0) {
		system ("cls");
		printf ("\tTALLER 1\n\n");
		printf ("1. Ejercicios Condicionales\n");
		printf ("2. Ejercicios Ciclos\n");
		printf ("0. Salir\n\n");
		printf ("Ingrese la opcion deseada: ");
		scanf ("%i", &opc);
		switch (opc) {
			case 1: cond_menu ();
					break;
			case 2: ciclos_menu();
					break;
		}
	}
	printf ("Gracias por visitarnos.\nHasta pronto.");
	getch ();
}
