#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct datos_fecha {
	int year;
	int mes;
	int dia;
};

struct trabajador {
	char codigo[14];
	char nombre[64];
	datos_fecha fecha;
	char ocupacion[20];
};
trabajador persona;

struct device {
	char codigo[10];
	char tipo[20];
};
device maquina;

struct materia {
	char codigo[10];
	char tipo[20];
};
materia prima;

struct prod {
	char codigo[10];
	char nombre[64];
	int cant_min;
	int existencias;
	int tiempo;
};
prod producto;

void ini_trab (void)
{
	strcpy (persona.codigo,"");
	strcpy (persona.nombre,"");
	persona.fecha.year = 0;
	persona.fecha.mes = 0;
	persona.fecha.dia = 0;
	strcpy (persona.ocupacion,"");
}

FILE* empleados;
FILE* maquinaria;
FILE* mate;
FILE* catalogo;

void ini_maq (void)
{
	strcpy (maquina.codigo,"");
	strcpy (maquina.tipo,"");
}

void ini_mat (void)
{
	strcpy (prima.codigo,"");
	strcpy (prima.tipo,"");
}

void ini_prod (void)
{
	strcpy (producto.codigo,"");
	strcpy (producto.nombre,"");
	producto.cant_min = 0;
	producto.existencias = 0;
	producto.tiempo = 0;
}

int val_year (int year)
{
	printf ("Ingrese el a%co: ", 164);
	fflush(stdin);
	scanf ("%d", &year);
	if (year >= 1584 && year <= 9999)
	return year;
	else {
		printf ("El a%co esta fuera del rango. Presione una tecla para continuar.\n", 164);
		getch();
		val_year (year);
	}
}

int val_mes (int mes)
{
	printf ("Ingrese el mes: ");
	fflush(stdin);
	scanf ("%d", &mes);
	if (mes >= 1 && mes <= 12)
	return mes;
	else {
		printf ("El mes esta fuera del rango. Presione una tecla para continuar.\n");
		getch();
		val_mes (mes);
	}
}

int val_dia (int dia, int mes, int year)
{
	printf ("Ingrese el dia: ");
	fflush(stdin);
	scanf ("%d", &dia);
	if (mes == 2)
	{
		if ((year % 4 == 0 && year% 100 != 0) || year % 400 == 0)
		{
			if (dia >= 1 && dia <= 29)
			return dia;
			else {
				printf ("El dia esta fuera del rango. Presione una tecla para continuar.\n");
				getch();
				val_dia (dia, mes, year);
			}
		}
		else {
			if (dia >= 1 && dia <= 28)
			return dia;
			else {
				printf ("El dia esta fuera del rango. Presione una tecla para continuar.\n");
				getch();
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
				printf ("El dia esta fuera del rango. Presione una tecla para continuar.\n");
				getch();
				val_dia (dia, mes, year);
			}
		}
		else {
			if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
			{
				if (dia >= 1 && dia <= 30)
				return dia;
				else {
					printf ("El dia esta fuera del rango. Presione una tecla para continuar.\n");
					getch();
					val_dia (dia, mes, year);
				}
			}
			else ;
		}
	}
}

trabajador editartrab (FILE* empleados, char* code, int p)
{
	empleados = fopen ("C:/Trabajos Maicol/Empleados.dat", "r+");
	strcpy(persona.codigo,code);
	fflush(stdin);
	printf ("Ingrese el nombre del trabajador: ");
	gets(persona.nombre);
	fflush(stdin);
	printf ("Ingrese la fecha de nacimiento del trabajador: \n");
	printf ("Ingrese el año: ");
	persona.fecha.year = val_year(persona.fecha.year);
	persona.fecha.mes = val_mes(persona.fecha.mes);
	persona.fecha.dia = val_dia(persona.fecha.dia, persona.fecha.mes, persona.fecha.year);
	fflush(stdin);
	gets(persona.ocupacion);
	fflush(stdin);
	fseek (empleados, 0, SEEK_END);
	fwrite(&persona, sizeof(trabajador), 1, empleados);
	fclose (empleados);
	ini_trab ();
}

trabajador agregartrab (FILE* empleados)
{
	int cont = 0, opc = -1, pointer = 0;
	char code[14];
	system("cls");
	fflush (stdin);
	printf ("Ingrese el codigo del trabajador: ");
	gets(code);
	empleados = fopen ("C:/Trabajos Maicol/empleados.dat", "r+");
	fseek(empleados, 0, 0);
	while (!(feof(empleados)) && (cont == 0))
	{
		fread(&persona, sizeof(trabajador), 1, empleados);
		if ((strcmp(persona.codigo,code) == 0) || strcmp(code,"") == 0)
		{
			cont++;
		}
		pointer++;
	}
	if (cont == 0)
	{
		strcpy(persona.codigo,code);
		fflush(stdin);
		printf ("Ingrese el nombre del trabajador: ");
		gets(persona.nombre);
		fflush(stdin);
		printf ("Ingrese la fecha de nacimiento del trabajador: \n");
		persona.fecha.year = val_year(persona.fecha.year);
		persona.fecha.mes = val_mes(persona.fecha.mes);
		persona.fecha.dia = val_dia(persona.fecha.dia, persona.fecha.mes, persona.fecha.year);
		fflush(stdin);
		printf ("Ingrese la ocupacion: ");
		gets(persona.ocupacion);
		fflush(stdin);
		fseek (empleados, 0, SEEK_END);
		fwrite(&persona, sizeof(trabajador), 1, empleados);
		fclose (empleados);
		ini_trab ();
	}
	else {
		if (strcmp(persona.codigo,"") == 0)
		{
			printf ("Codigo invalido");
			getch();
			system("cls");
			agregartrab (empleados);
		}
		else{
			while (opc != 0) {
				printf ("El trabajador ya existe.\n");
				printf ("1. Eliminar al trabajador\n");
				printf ("2. Editar al trabajador\n");
				printf ("0. SALIR\n\n");
				fflush(stdin);
				scanf ("%i", &opc);
				switch(opc) {
					/*case 1: eliminartrab (empleados, pointer);
							break;
					case 2: editartrab (empleados, code, pointer);
							break;*/
				}
			}
		}
	}
}

device agregarmaquina (FILE* maquinaria)
{
	int cont = 0;
	char code[14];
	printf ("Ingrese el codigo de la maquina: ");
	fflush (stdin);
	gets(code);
	maquinaria = fopen ("C:/Trabajos Maicol/Maquinaria.dat","r+b");
	fseek (maquinaria, 0, 0);
	while (!(feof(maquinaria)))
	{
		fread (&maquina, sizeof(device), 1, maquinaria);
		if ((strcmp(maquina.codigo,code) == 0) || strcmp(code,"") == 0)
		cont++;
	}
	fclose (maquinaria);
	if (cont == 0)
	{
		strcpy(maquina.codigo,code);
		fflush (stdin);
		printf ("Ingrese el tipo de maquina: ");
		gets(maquina.tipo);
		fflush (stdin);
		maquinaria = fopen ("C:/Trabajos Maicol/Maquinaria.dat", "r+b");
		fseek (maquinaria, 0, SEEK_END);
		fwrite (&maquina, sizeof (device), 1, maquinaria);
		fclose (maquinaria);
		ini_maq();
	}
	else {
		if (strcmp(maquina.codigo,"") == 0)
		{
			printf ("Codigo invalido");
			getch();
			system("cls");
			agregarmaquina(maquinaria);
		}
		else {
			printf ("La maquina ya se encuentra registrada, intente con otro codigo");
			getch();
			system("cls");
			agregarmaquina(maquinaria);
		}
	}
}

materia agregarmateria (FILE* mate)
{
	int cont = 0;
	char code[10];
	printf ("Ingrese el codigo de la materia prima: ");
	fflush (stdin);
	gets(code);
	mate = fopen ("C:/Trabajos Maicol/Materia Prima.dat", "r+b");
	fseek (mate, 0, 0);
	while (!(feof(mate)))
	{
		fread (&prima, sizeof (materia), 1, mate);
		if ((strcmp(prima.codigo,code) == 0) || strcmp(code,"") == 0)
		cont++;
	}
	fclose (mate);
	if (cont == 0)
	{
		strcpy (prima.codigo,code);
		fflush (stdin);
		printf ("Ingrese el tipo de maquina que se usa para esta materia prima: ");
		gets(prima.tipo);
		fflush (stdin);
		mate = fopen ("C:/Trabajos Maicol/Materia Prima.dat", "r+b");
		fseek (mate, 0, SEEK_END);
		fwrite (&prima, sizeof (materia), 1, mate);
		fclose (mate);
		ini_prod();
	}
	else {
		if (strcmp(prima.codigo,"") == 0)
		{
			printf ("Codigo invalido");
			getch();
			system("cls");
			agregarmateria(mate);
		}
		else {
			printf ("La materia ya se encuentra registrada, intente con otro codigo");
			getch();
			system("cls");
			agregarmateria(mate);
		}
	}
}

prod agregarproducto (FILE* catalogo)
{
	int cont = 0;
	char code[10];
	printf ("Ingrese el codigo de producto: ");
	fflush (stdin);
	gets (code);
	catalogo = fopen ("C:/Trabajos Maicol/Catalogo.dat","r+b");
	fseek(catalogo, 0, 0);
	while (!(feof(catalogo)))
	{
		fread (&producto, sizeof (prod), 1, catalogo);
		if (strcmp(producto.codigo,code) == 0 || strcmp (code,"") == 0)
		cont++;
	}
	fclose (catalogo);
	if (cont == 0)
	{
		strcpy (producto.codigo,code);
		fflush (stdin);
		printf ("Ingrese el nombre del producto: ");
		gets (producto.nombre);
		fflush (stdin);
		printf ("Ingrese la cantidad minima de producto a producir: ");
		scanf ("%i", &producto.cant_min);
		fflush (stdin);
		printf ("Ingrese las existencias del producto: ");
		scanf ("%i", &producto.existencias);
		fflush (stdin);
		printf ("Ingrese el tiempo de produccion: ");
		scanf ("%i", &producto.tiempo);
		fflush (stdin);
		catalogo = fopen ("C:/Trabajos Maicol/Catalogo.dat","r+b");
		fseek (catalogo, 0, SEEK_END);
		fwrite(&producto, sizeof(prod), 1, catalogo);
		fclose (catalogo);
		ini_prod();
	}
	else {
		if (strcmp (producto.codigo,"") == 0)
		{
			printf ("Codigo invalido");
			getch();
			system("cls");
			agregarproducto (catalogo);
		}
		else {
			printf ("El producto ya se encuentra en el catalogo");
			getch();
			system("cls");
			agregarproducto(catalogo);
		}
	}
	return producto;
}

int contartrab (FILE* empleados)
{
	int i = 0;
	empleados = fopen ("C:/Trabajos Maicol/Empleados.dat", "r+b");
	while(!(feof(empleados)))
	{
		fread(&persona, sizeof(trabajador), 1, empleados);
		i++;
	}
	return i;
}

int contarmaq (FILE* maquinaria)
{
	int i = 0;
	maquinaria = fopen ("C:/Trabajos Maicol/Maquinaria.dat", "r+b");
	while(!(feof(maquinaria)))
	{
		fread(&maquina, sizeof(device), 1, maquinaria);
		i++;
	}
	return i;
}

int contarmat (FILE* mate)
{
	int i = 0;
	mate = fopen ("C:/Trabajos Maicol/Materia Prima.dat", "r+b");
	while(!(feof(mate)))
	{
		fread(&prima, sizeof(materia), 1, mate);
		i++;
	}
	return i;
}

int contarprod (FILE* catalogo)
{
	int i = 0;
	catalogo = fopen ("C:/Trabajos Maicol/Catalogo.dat", "r+b");
	while(!(feof(catalogo)))
	{
		fread(&producto, sizeof(prod), 1, catalogo);
		i++;
	}
	return i;
}

int listartrab (FILE* empleados)
{
	int cont = contartrab(empleados);
	if (cont > 1)
	{
		empleados = fopen ("C:/Trabajos Maicol/Empleados.dat", "r+b");
		fseek(empleados, 0, 0);
		fread (&persona, sizeof (trabajador), 1, empleados);
		while (!(feof (empleados)))
		{
			printf ("Codigo: ");
			puts (persona.codigo);
			printf ("Nombre: ");
			puts (persona.nombre);
			printf ("Fecha de nacimiento:\n");
			printf ("Año: %i\n", persona.fecha.year);
			printf ("Mes: %i\n", persona.fecha.mes);
			printf ("Dia: %i\n", persona.fecha.dia);
			printf ("Ocupacion: ");
			puts (persona.ocupacion);
			printf ("\n\n");
			fread (&persona, sizeof (trabajador), 1, empleados);
			getch();
		}
		printf ("Todos los trabajadores trabajadores estan listados. Presione una tecla para continuar");
		fclose(empleados);
	}
	else printf ("No hay trabajadores registrados");
	getch();
}

int listarmaq (FILE* maquinaria)
{
	int cont = contarmaq(maquinaria);
	if (cont > 1)
	{
		maquinaria = fopen ("E:/Trabajos Maicol/Maquinaria.dat", "r+b");
		fseek (maquinaria, 0, 0);
		while (!(feof(maquinaria)))
		{
			fread (&maquina, sizeof (device), 1, maquinaria);
			printf ("Codigo: ");
			puts (maquina.codigo);
			printf ("\nTipo: ");
			puts (maquina.tipo);
			printf ("\n\n");
			getch();
		}
		printf ("Todas las maquina estan listadas. Presione una tecla para continuar");
		fclose (maquinaria);
	}
	else printf ("No hay maquinas registradas.");
	getch();
}

int listarmat (FILE* mate)
{
	int cont = contarmat(mate);
	if (cont > 1)
	{
		mate = fopen ("C:/Trabajos Maicol/Materia Prima.dat", "r+b");
		fseek (mate, 0, 0);
		while (!(feof (mate)))
		{
			fread (&prima, sizeof(materia), 1, mate);
			printf ("Codigo: ");
			puts (prima.codigo);
			printf ("\nTipo: ");
			puts (prima.tipo);
			printf ("\n\n");
			getch ();
		}
		printf ("Todas las materias ya han sido listadas. Presione una tecla para continuar");
	}
	else printf ("No hay materia prima registrada");
	getch();
}

int listarprod (FILE* catalogo)
{
	int cont = contarprod(catalogo);
	if (cont > 1)
	{
		catalogo = fopen ("E:/Trabajos Maicol/Catalogo.dat", "r+b");
		fseek (catalogo, 0, 0);
		while (!(feof (mate)))
		{
			fread (&producto, sizeof(prod), 1, catalogo);
			printf ("Codigo: ");
			puts (producto.codigo);
			printf ("\nNombre: ");
			puts (producto.nombre);
			printf ("\nCantidad minima: %i", producto.cant_min);
			printf ("\nExistencia: %i", producto.existencias);
			printf ("\nTiempo: %i", producto.tiempo);
			printf ("\n\n");
			getch ();
		}
		printf ("Todos los productos ya han sido listados. Presione una tecla para continuar");
	}
	else printf ("No hay productos en el catalogo");
	getch();
}

/*
int trabaj (trabajador * empleados, int cont)
{
	char opc = ' ';
	for (; cont < N && opc != 'N' && opc != 'n'; cont++)
	{
		empleados[cont] = agregartrab (empleados);
		ini_trab();
		printf ("¿Desea ingresar otro trabajador? (S/N) \n");
		opc = getche();
	}																					_________________________________________________
	if (cont >= N)																		|***********************************************|
		printf ("Ha excedido el numero de trabajadores permitido");						|***ESTA ES LA VERSION TRABAJADA CON VECTORES***|
	return cont;																		|-----------------------------------------------|
}																						

int maqui (device* maquinaria, int cont)
{
	char opc = ' ';
	for (; cont < N && opc != 'N' && opc != 'n'; cont++)
	{
		maquinaria[cont] = agregarmaquina (maquinaria);
		ini_maq();
		printf ("¿Desea ingresar otro trabajador? (S/N) \n");
		opc = getche();
	}
	if (cont >= N)
		printf ("Ha excedido el numero de maquinas permitidas");
	return cont;
}

int matepri (materia * mate, int cont)
{
	char opc = ' ';
	for (; cont < N && opc != 'N' && opc != 'n'; cont++)
	{
		mate[cont] = agregarmateria (mate);
		ini_mat();
		printf ("¿Desea ingresar una nueva materia prima? (S/N) \n");
		opc = getche();
	}
	if (cont >= N)
		printf ("Ha excedido el numero de materias primas permitidas");
	return cont;
}

int produ (prod* catalogo, int cont)
{
	char opc = ' ';
	for (; cont < N && opc != 'N' && opc != 'n'; cont++)
	{
		catalogo[cont] = agregarproducto (catalogo);
		ini_prod();
		printf ("¿Desea ingresar un nuevo producto? (S/N) \n");
		opc = getche();
	}
	if (cont >= N)
		printf ("Ha excedido el numero de productos permitidos");
	return cont;
}*/

int main (void)
{
	int t, m, mp, p, opc = -1;
	t = m = mp = p = 0;
	if ((empleados = fopen("C:/Trabajos Maicol/Empleados.dat", "r+b")) == NULL)
	empleados = fopen ("C:/Trabajos Maicol/Empleados.dat", "w+b");
	fclose (empleados);
	if ((maquinaria = fopen("C:/Trabajos Maicol/Maquinaria.dat", "r+b")) == NULL)
	maquinaria = fopen ("C:/Trabajos Maicol/Maquinaria.dat", "w+b");
	fclose (maquinaria);
	if ((mate = fopen("C:/Trabajos Maicol/Materia Prima.dat", "r+b")) == NULL)
	mate = fopen ("C:/Trabajos Maicol/Materia Prima.dat", "w+b");
	fclose (mate);
	if ((catalogo = fopen("C:/Trabajos Maicol/Catalogo.dat", "r+b")) == NULL)
	catalogo = fopen ("C:/Trabajos Maicol/Catalogo.dat", "w+b");
	fclose (catalogo);
	while (opc != 0)
	{
		system ("cls");
		printf ("\tCONFIGURACION\n\n");
		printf ("1. Agregar trabajadores\n");
		printf ("2. Listar trabajadores\n");
		printf ("3. Agregar maquina\n");
		printf ("4. Listar maquinaria\n");
		printf ("5. Agregar materia prima\n");
		printf ("6. Listar materia prima\n");
		printf ("7. Agregar producto\n");
		printf ("8. Listar productos\n");
		printf ("0. SALIR\n\n");
		printf ("Ingrese a opcion deseada: ");
		scanf("%i", &opc);
		system("cls");
		switch (opc) {
			case 1: agregartrab (empleados);
					break;
			case 2: listartrab (empleados);
					break;
			case 3: agregarmaquina (maquinaria);
					break;
			case 4: listarmaq (maquinaria);
					break;
			case 5: agregarmateria (mate);
					break;
			case 6: listarmat (mate);
					break;
			case 7: agregarproducto (catalogo);
					break;
			case 8: listarprod (catalogo);
					break;
			case 0: printf ("\tGracias por visitarnos.");
					break;
			default: break;
		}
	}
	getch();
}
