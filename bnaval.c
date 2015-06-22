#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    char mapa[5][5] =  
    {
        {0, 0, 0, 0, 1}, 
        {1, 1, 0, 0, 1},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0},
        {1, 1, 1, 1, 0}};
        
    char tabuleiro[5][5], nome[10], sn;
    int i, j, acerto, erro, result;
    
    sn = 's';
    result = 0, acerto = 0, erro = 0;
    
    printf("\nPor favor, insira seu nome: ");
    scanf("%s", nome);
    
    printf("\n");

    while(sn == 's')
    {
        printf("\nEntre com as coordenadas: ");
        printf("\nEntre com as coordenadas da linha: ");
        scanf("%d", &i);
    
        printf("Entre com as coordenadas da coluna: ");
        scanf("%d", &j);
        
        
        if(mapa[i][j] == 1)
        {
            printf("Bomba!! Você ganhou 1 ponto!\n");
            acerto = acerto + 1;
        }
        else
        {
            printf("Agua!!, que pena! \n");
            erro = erro + 1;        
        }
        
        printf("\nDeseja continuar? (s/n): ");
		scanf("%s", &sn);
		
    }
    
    result = acerto - erro;
    printf("\nOla, %s você fez %d pontos. \n", nome, result);
    
    getchar();
return 0;
}
