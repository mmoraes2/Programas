#include <stdio.h>
#include <stdlib.h>

int main()
{

	int numero;

	//imprime uma mensagem ao ler numero
	printf("\nEntre com um numero qualquer:");
	scanf("%d", &numero);

	if ((numero%2)==0)
	{
		printf("\nEste numero eh par.");
	}
	else
	{
		printf("\nEste numero eh impar.");
	}


		getchar();
	return 0;
}
