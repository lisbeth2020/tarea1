#include <stdio.h>

int main()
{
	int numero,cuadrado,cubo;
	
	printf ("número:");
	scanf ("%d",&numero);
	
	cuadrado= numero*numero;
	printf ("\ncuadrado del número:%d\n",cuadrado);
	
	cubo= numero*numero*numero;
	printf ("cubo del número:%d\n",cubo);
	
	return 0;
}
