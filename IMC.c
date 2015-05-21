#include <stdio.h>
#include <stdlib.h>

int main()
{

	float altura;
	float peso;
	float imc;

	printf("\nInforme sua altura(ex.: 1.60):");
	scanf("%f", &altura);

	printf("\nInforme sua peso(ex.: 60):");
	scanf("%f", &peso);

	imc = peso / (altura * altura);

	if (imc < 19) 
	{
		printf("\nVoce esta magro!!\n");
	} 
	else if ( imc <= 25) 
	{
		printf("\nVoce esta com peso ideal!!\n");
	} 
	else if (imc <= 30) 
	{
		printf("\nVoce esta acima do peso!!\n");		
	} 
	else 
	{
		printf("\nVoce esta obeso!!\n");
	}
	

	getchar();
	return 0;
}
