#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

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
	ciclos_menu ();
}
