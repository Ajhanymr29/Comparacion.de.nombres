#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)

{
	int a,b,c,d,e;
	char nom1[100], nom2[100], nom3[100], nom4[100], nom5[100];

	printf ("\n\tComparacion de nombres \n\n");

	printf ("ingrese el 1er nombre: ");
	gets (nom1);

	printf ("ingrese el 2do nombre: ");
	gets (nom2);

	printf ("ingrese el 3er nombre: ");
	gets (nom3);

	printf ("ingrese el 4to nombre: ");
	gets (nom4);

	printf ("ingrese el 5to nombre: ");
	gets (nom5);

	a=strlen (nom1);
	b=strlen (nom2);
	c=strlen (nom3);
	d=strlen (nom4);
	e=strlen (nom5);

	if (a<b && a<c && a<d && a<e)
	printf ("El nombre mas corto es: %s", nom1);

	else if (b<a && b<c && b<d && b<e)
	printf ("El nombre mas corto es: %s", nom2);

	else if (c<a && c<b && c<d && c<e)
	printf ("El nombre mas corto es: %s", nom3);

	else if (d<a && d<b && d<c && d<e)
	printf ("El nombre mas corto es: %s", nom4);

	else if (e<a && e<b && e<c && e<d)
	printf ("El nombre mas corto es: %s", nom5);



	return 0;
}
