#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Funciones prototipo

int menu1al10 (void);
int opmenu1al10 (void);
int digimenor (int);

//Cuerpo de las funciones 

int primerdigito (int n)
{
 	 while (!(n<10)){
 	     n=n/10;
	 }
	 return n;
	 }


int digimenor (int n)
{
 	 int menor=9;
 	 // menor=n%10;
 	 while (n!=0){
 	    if (menor>(n%10)){
 	       menor=n%10;
 	       n=n/10;}
 	    else
 	       n=n/10;
	 }
	return menor;
}

int menu1al10(void)   
{
 		printf("\t Taller Condicionales \n\n");
 	 	printf("\t Ejercicios del 1-10 \n\n");
       	printf("1. Leer un número entero y determinar cuál es el menor de sus dígitos\n");
       	printf("0. SALIR\n\n");
}

int opmenu1al10 (void)
{
 int opc=-1, i=0;
 	do{
	 	system("cls");
		menu1al10 ();
     	printf("ingrese la opcion deseada ");
 	    scanf("%d",&opc);
 	    switch(opc){
      	  	case 1: printf ("Digite un número entero:  ");
      	  	        scanf ("%d", &i);
				  	printf ("El menor dígito es : %d", digimenor(i));
				  	getch();
				  	break;
		  	case 2:
    	 			break;
		}

	}while (opc!=0);

}


int menu (void)//MENÚ PRINCIPAL
{
 	 printf("\t Taller Condicionales \n\n");
 	 printf("1. Ejercicios del 1-10 \n");
 	 printf("2. Ejercicios del 11-20 \n");
 	 printf("3. Ejercicios del 21-30 \n");
 	 printf("0.SALIR\n\n");
	 }

int main (void)//OPERA EL MENÚ PRINCIPAL Y TODO EL PROGRAMA
{
 int opc=-1;
 	do{
	 	system("cls");
		menu ();
 	    printf("ingrese la opcion deseada ");
 	    scanf("%d",&opc);
 	    switch(opc){
 				  
		  		  case 1: opmenu1al10();
				  		  break;
 /*
				  case 2: opmenu11al20();
				  		  break;  /*/
					}

	}while (opc!=0);
	printf ("GRACIAS POR UTILIZAR NUESTRO PROGRAMA, VUELVA PRONTO");
	getch();
}
	 

