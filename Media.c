#include <stdio.h>
#include <stdlib.h>

int main()
{

	float nota1;
	float nota2;
	float media;

	printf("\nEntre com a nota da 1 prova:");
	scanf("%f", &nota1);

	printf("\nEntre com a nota da 2 prova:");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media < 6)
	{
		printf("\nReprovado com media = %.2f.", media);
	}
	else
	{
		printf("\nAprovado com media = %.2f.", media);
	}


		getchar();
	return 0;
}
