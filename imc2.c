#include <stdio.h>
#include <stdlib.h>

const int TAM = 10;

int main()
{
    
    float peso, altura, imc[TAM];
    float acima_peso=0, abaixo_ou_nopeso=0;
    int i;
    
    for(i=0;i<TAM;i++)
    {
        printf("\n%d - Informe sua altura(ex.: 1.60):", i+1);
        scanf("%f", &altura);

        printf("\n%d - Informe sua peso(ex.: 60):", i+1);
        scanf("%f", &peso);
        
        imc[i] = peso/(altura*altura);
    }
    
    for(i=0;i<TAM;i++)
    {
        if(imc[i]<19)
            abaixo_ou_nopeso++;
        else
            if(imc[i]<=25)
                abaixo_ou_nopeso++;
            else
                if(imc[i]<30)
                    acima_peso++;
                else
                    acima_peso++;
                    
    }
    
    printf("\nPercentual de pessoas abaixo ou no peso ideal: %.0f\%% \n", (abaixo_ou_nopeso/TAM)*100);
    printf("\nPercentual de pessoas acima do peso ideal: %.0f\%% \n", (acima_peso/TAM)*100);
    
    getchar();
    return 0;   
}
