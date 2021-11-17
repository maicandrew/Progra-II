#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct estudiante {
	char nombre[30];
	char apellido[50];
	char genero[10];
	int edad;
	double codigo;
};
typedef struct estudiante men;
men persona;
FILE* grupo;

void inicializar (estudiante &persona)//PROCEDIMIENTO INICIALIZAR
{
    strcpy(persona.nombre,"");
    strcpy(persona.apellido,"");
    strcpy(persona.genero,"");
    persona.edad = 0;
    persona.codigo = 0;
}

int agregarestudiante (FILE* grupo)
{
	char c = ' ';
	for (int i = 0; i <= 9 && c != 'N' && c != 'n'; i++) {
		inicializar (persona);
		system("cls");
		printf ("Ingrese los nombres del estudiante: ");
		gets(persona.nombre);
		fflush(stdin);
		printf ("Ingrese los apellidos del estudiante: ");
		gets(persona.apellido);
		fflush(stdin);
		printf ("Ingrese el genero del estudiante: ");
		gets(persona.genero);
		fflush(stdin);
		printf ("Ingrese la edad del estudiante: ");
		scanf("%d", &persona.edad);
		fflush(stdin);
		printf ("Ingrese el codigo del estudiante: ");
		scanf("%lf", &persona.codigo);
		fflush(stdin);
		grupo = fopen ("E:/Trabajos Maicol/Ejemplo.dat","r+b");
		fseek(grupo,0,SEEK_END);
		fwrite(&persona, sizeof(estudiante),1,grupo);
		fclose(grupo);
		printf ("¿Desea agregar mas estudiantes? (S/N)\n");
		c = getchar();
	}
	return 0;
}

int contarest (FILE *grupo) 
{      //funcion que cuenta los registros en el archivo de libros
       int cont=0;
        grupo = fopen("E:/Trabajos Maicol/Ejemplo.dat","r+");
       fseek(grupo,0,0);     // posiciona el puntero de archivo en el registro 0
       while(!(feof(grupo)))
       {fread (&persona,sizeof(estudiante),1,grupo);
                 cont++;
       }        
       fclose(grupo);
       return cont;
}

void listarLibros (FILE *grupo)                       
{
   int cont=1;
   int cantidad = contarest (grupo);               //cuento los libros  que hay
   printf ("%d", cont);

   if (cantidad >= 1) {
       system("CLS");
       printf( " \n\n Listado de estudiantes en el grupo:  \n\n ");
       
       grupo = fopen("E:/Trabajos Maicol/Ejemplo.dat","r+b");             //abrir el archivo fisico
       fseek(grupo,0,0);                              //ubicar el puntero en la primera posicion
       while((!(feof(grupo)))&&(cont<cantidad))       //mientras no sea fin de archivo hacer
       {fread (&persona,sizeof(estudiante),1,grupo);        //lee el archivo registro por registro         
                       
          printf ("\n Estudiante  %d ",cont);
          puts (persona.nombre);
          printf ("\n");
          puts (persona.apellido);
          printf ("\n");
          puts (persona.genero);
          printf ("\n");
          printf ("Edad: %i", persona.edad);
          printf ("\n");
          printf ("Codigo: %d", persona.codigo);
          printf ("\n");
          cont++;
          getch();
       }        
       fclose(grupo);                                  //cierro la conexion con el archivo    
   }
   else {
       system("CLS");
       printf( " \n\n NO hay estudiantes en el grupo \n\n ");
       getch();
   }    
}

int main (void)
{
	if ((grupo = fopen("E:/Trabajos Maicol/Ejemplo.dat","r"))==NULL)
	{
    	printf("Ya que el archivo no existe, se creara en la ubicacion predeterminada\n");
    	getch();
    	grupo  = fopen("E:/Trabajos Maicol/Ejemplo.dat","w+b");
    }
    fclose(grupo);
    agregarestudiante (grupo, persona);
    listarLibros (grupo);
    getch();
}
