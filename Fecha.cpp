#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int val_year (int year)
{
	printf ("Ingrese el a%co: ", 164);
	scanf ("%i", &year);
	if (year >= 1584 && year <= 9999)
	return year;
	else {
		printf ("El a%co esta fuera del rango. Presione una tecla para continuar.", 164);
		getch();
		system("cls");
		val_year (year);
	}
}

int val_mes (int mes)
{
	printf ("Ingrese el mes: ");
	scanf ("%i", &mes);
	if (mes >= 1 && mes <= 12)
	return mes;
	else {
		printf ("El mes esta fuera del rango. Presione una tecla para continuar.");
		getch();
		system("cls");
		val_mes (mes);
	}
}

int val_dia (int dia, int mes, int year)
{
	printf ("Ingrese el dia: ");
	scanf ("%i", &dia);
	if (mes == 2)
	{
		if ((year % 4 == 0 && year% 100 != 0) || year % 400 == 0)
		{
			if (dia >= 1 && dia <= 29)
			return dia;
			else {
				printf ("El dia esta fuera del rango. Presione una tecla para continuar.");
				getch();
				system("cls");
				val_dia (dia, mes, year);
			}
		}
		else {
			if (dia >= 1 && dia <= 28)
			return dia;
			else {
				printf ("El dia esta fuera del rango. Presione una tecla para continuar.");
				getch();
				system("cls");
				val_dia (dia, mes, year);
			}
		}
	}
	else {
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		{
			if (dia >= 1 && dia <= 31)
			return dia;
			else {
				printf ("El dia esta fuera del rango. Presione una tecla para continuar.");
				getch();
				system("cls");
				val_dia (dia, mes, year);
			}
		}
		else {
			if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
			{
				if (dia >= 1 && dia <= 30)
				return dia;
				else {
					printf ("El dia esta fuera del rango. Presione una tecla para continuar.");
					getch();
					system("cls");
					val_dia (dia, mes, year);
				}
			}
			else ;
		}
	}
}

int main (void)
{
	int year, mes, dia;
	char cad[8] = {0};
	year = val_year (year);
	mes = val_mes (mes);
	dia = val_dia (dia, mes, year);
	int date = (year*10000)+(mes*100)+dia;
	for (int i = 0; i <= 7; i++) {
		int num = (date/pow(10,7-i));
		cad[i] = (num % 10) + 48;
	}
	for (int i = 0; i <= 7; i++) {
		printf ("%c", cad[i]);
	}
	getch();
}
