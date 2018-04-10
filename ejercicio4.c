#include <stdio.h> 

int main()
{
	int base,altura,superficie,perimetro;
	
	printf ("ingrese la base:");
	scanf ("%d",&base);
	printf ("ingrese la altura:");
	scanf ("%d",&altura);
	
	superficie= base*altura;
	printf ("\nsuperficie del rectángulo:%d\n",superficie);
	
	perimetro= 2*(base+altura);
	printf ("perimetro del rectángulo:%d\n",perimetro);
	
	return 0;
}
