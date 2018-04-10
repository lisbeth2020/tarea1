#include <stdio.h>

int main()
{
	int a,b,hipotenusa;
	
	printf ("ingrese el valor de a:");
	scanf ("%d",&a);
	printf ("ingrese el valor de b:");
	scanf ("%d",&b);
	
	hipotenusa= a*a+b*b;
	printf ("\nhipotenusa:%d",hipotenusa);
	
	return 0;
}
