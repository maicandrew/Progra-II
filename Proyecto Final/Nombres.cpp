#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define N 50

FILE* nombres;

int crearnombres ()
{
	char nombre[15]={0};
	nombres = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/NombresH.dat", "r+");
	fseek(nombres, 0, 0);
	for (int i = 1; i <= N; i++)
	{
		strcpy (nombre,"");
		fflush (stdin);
		printf ("Ingrese el nombre %i: ", i);
		fflush(stdin);
		gets(nombre);
		fseek(nombres,0,SEEK_END);
		fwrite(&nombre, 15*sizeof(char), 1, nombres);
		fflush(stdin);
	}
	fclose (nombres);
}

int mostrarnombres ()
{
	char nombre[15]={0};
	nombres = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/NombresH.dat", "r");
	fseek(nombres, 0, 0);
	int i = 1;
	while (i <= N)
	{
		fread (&nombre, 15*sizeof(char), 1, nombres);
		printf ("Nombre %i: ", i);
		puts (nombre);
		printf ("\n");
		i++;
	}
	fclose (nombres);
}


int main (void)
{
	if ((nombres = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/NombresH.dat", "r"))  == NULL)
	nombres = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/NombresH.dat", "w");
	fclose (nombres);
	crearnombres();
	mostrarnombres();
	getch();
}
