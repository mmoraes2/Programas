#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sn;
    int num;
    int contador;
    
    sn = 's';

		printf("**************************************************************\n");
		printf("* Trabalho 2 de Programacao de Computadores I                *\n");
		printf("* Curso de Sistemas da informacão                            *\n");
		printf("* Aluno: Matheus Macieira de Moraes - Matricula: 0050011387  *\n");
		printf("* Tabuada de Adicao                                          *\n");
		printf("**************************************************************\n\n");

	while(sn == 's')
	{
		printf("Tabuada de Adicao \n");
		printf("=================\n");
		printf("Entre com o numero de [1-9]:");
		scanf("%d", &num);
		printf("Tabuada do: %d", num);
		printf("\n============\n");
	
		for(contador = 1;contador <= 10;contador++)
		{
		  printf("%d + %d = %d\n", num, contador, num + contador);
		}

		printf("\nDeseja continuar? (s/n)");
		scanf("%s", &sn);
		
	}
	printf("\n Até breve, meu nome eh Matheus e espero que tenha aprendido a tabuada de adição\n" );

    	getchar();            
    return 0;
}
