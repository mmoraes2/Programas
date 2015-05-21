#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_magico;
    int num_usuario;
    
    num_magico = 5; //inicializa numero magico com 5
    
    //obter o valor do usuario
    printf("\nAdvinhe o numero:");
    scanf("%d", &num_usuario);
    
    //testa as condicoes para advinhar o numero
    if (num_usuario == num_magico)
    {
       printf("\nVoce acertou! Game Over\n");
    }
    else
    {
        if (num_usuario > num_magico)
        {
           printf("Que pena, o numero magico e MENOR que esse!\nGame Over!\n");    
        }
        else  //eh menor
        {
           printf("Que pena, o numero magico e MAIOR que esse!\nGame Over!\n");    
        }
    }
    
    getchar();            
    return 0;
}
