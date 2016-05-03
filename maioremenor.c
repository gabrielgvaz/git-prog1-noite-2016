#include <stdio.h>
int main()
{
    int numero, maior=-2000, menor=9999, resposta;
    
    do
    {
        printf("\nEntre com um numero: ");
        scanf("%d", &numero);
        
        if(numero>maior)
        maior=numero;
        
        if(numero<menor)
        menor=numero;
        
        printf("\nDeseja continuar? 1-S 2-N ");
        scanf("%d", &resposta);
    }
    while (resposta==1);
    printf("\nMaior numero= %d", maior );
    printf("\nMenor numero= %d", menor);
    
    return 0;
    
}