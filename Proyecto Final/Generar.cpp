# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <string.h>
# include <math.h>
# include <time.h>

#define N 100

using namespace std;

struct trabajador {
	char codigo[10];
	char nombre[30];
	char apellido[30];
	char gen;
	char year[5];
	char mes[3];
	char dia[3];
	char ocupacion[20];
	char sal[1];
};
typedef struct trabajador men;
men persona;

FILE* nombres1;
FILE* nombres2;
FILE* datos;

void ini_trab (void)
{
	strcpy(persona.codigo,"");
	strcpy (persona.nombre,"");
	strcpy (persona.year,"");
	strcpy (persona.mes,"");
	strcpy (persona.dia,"");
	strcpy (persona.ocupacion,"");
}

int generartrab (int i)
{
	srand(time(0));
	char nombre1[15], nombre2[15];
	char nombre[31], code[10];
	for (; i <= N; i++)
	{
		int cont = 0;
		nombres1 = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/NombresH.dat", "r");
		datos = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/Base de datos.dat", "r+");
		long long int n = 10000000 + ((1 + (rand() % 27466)) * rand());
		printf("Numero generado: %lli\n", n);
		itoa (n,code,10);
		strcpy(nombre,"");
		rewind (datos);
		while (!feof(datos))
		{
			fread (&persona, sizeof(trabajador), 1, datos);
			if (strcmp(persona.codigo,code) == 0)
			cont++;
		}
		ini_trab;
		if (cont == 0)
		{
			strcpy (persona.codigo,code);
			long int l = (rand() % 50), m = (rand() % 50);
			fseek(nombres1, l*15*sizeof(char), 0);
			fread(&nombre1, 15*sizeof(char), 1, nombres1);
			fseek(nombres1, m*15*sizeof(char), 0);
			fread(&nombre2, 15*sizeof(char), 1, nombres1);
			strcat (nombre, nombre1);
			strcat (nombre, " ");
			strcat (nombre, nombre2);
			strcpy (persona.nombre, nombre);
			strcpy(persona.apellido,"Grisales");
			int dia = 11 + (rand() % 28), mes = 11 + (rand() % 12), year = 1951 + (rand() % (1998 - 1951));
			fflush(stdin);
			persona.dia[0] = (dia / 10) + 47;
			persona.dia[1] = (dia % 10) + 48;
			persona.dia[2] = '\0';
			persona.mes[0] = (mes / 10) + 47;
			persona.mes[1] = (mes % 10) + 48;
			persona.mes[2] = '\0';
			itoa (year, persona.year, 10);
			printf ("Dia: %i Mes: %i Year: %i\n", dia-10, mes-10, year);
			strcpy (persona.sal,"\n");
			strcpy (persona.ocupacion, "Gerente");
			fflush(stdin);
			fseek(datos, 0, SEEK_END);
			fwrite (&persona, sizeof(trabajador), 1, datos);
			ini_trab();
			fflush(stdin);	
			fclose(nombres1);
			fclose(nombres2);
			fclose(datos);
		}
		else {
			generartrab(i);
		}
	}
}

int main (void)
{
	if ((datos = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/Base de datos.dat", "r")) == NULL)
	datos = fopen ("E:/Trabajos Maicol/Programación/Progra II/Proyecto Final/Base de datos.dat", "w+");
	fclose (datos);
	clock_t ti1 = (double)clock();
	generartrab(0);
	clock_t ti2 = (double)clock();
	double tit = ti2-ti1/CLOCKS_PER_SEC;
	printf ("El tiempo que tarda en generar os datos es: %lf segundos", tit/1000);
	getch();
}
