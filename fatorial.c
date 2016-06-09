#include <stdio.h>

int calculo_fat(int num)
{
    int total=1, fat;
    
    for (fat=1;fat<=num;fat++)
    {
        total=total*fat;
    }
    return total;
}
int main()
{
    int numero, resposta;
    printf("\nDigite um numero para o fatorial: ");
    scanf("%d", &numero);
    
    resposta = calculo_fat(numero);
    
    printf("\nFatorial de %d = %d", numero, resposta);
    printf("\n");
    
    return 0;
}


