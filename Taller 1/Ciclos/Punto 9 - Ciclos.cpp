# include <stdio.h>
# include <conio.h>

int ciclos9 (void)
{
	int x;
	for (x = 25; x <= 205; x++) {
		if ((x % 10) == 6)
		printf ("%i\n", x);
		else ;
	}
}

int main (void)
{
	ciclos9 ();
	getch();
}
