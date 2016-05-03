
#include <stdio.h>

int main()
{
    int num;
    int resposta;
    int maior=-9999, menor=1000;
    
    do
    {
        printf("\nEntre com um numero[1-100]:");
        scanf("%d", &num);
        
        if(num>maior)
            maior = num;
    
        if(num<menor)
            menor = num;
        
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &resposta);
        
    }while(resposta == 1);
    
    printf ("\nMaior numero = %d\n", maior);
    printf ("\nMenor numero = %d\n", menor);
 return 0;
}

