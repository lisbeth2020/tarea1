#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, promedio;
	int matricula;
	
	printf ("ingresar número de matricula:");
	scanf ("%d",&matricula);
	printf ("\ningrese nota:");
	scanf ("%f",&nota1);
	printf ("ingrese nota:");
	scanf ("%f",&nota2);
	printf ("ingrese nota:");
	scanf ("%f",&nota3);
	
	promedio= (nota1+nota2+nota3)/3; 
	printf ("\npromedio de notas: %.1f",promedio);
	
	return 0;
}

