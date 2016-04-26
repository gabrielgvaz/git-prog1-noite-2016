#include <stdio.h>

int main()
{
    int idade;
    printf("\nDigite sua idade");
    scanf("%d, idade");
    if (idade<=15)
        {
        printf("Voce não pode votar");
        }
        if (idade>=18, && idade=<70)
        {
        printf("Voce e obrigado a votar");
        }
        if (idade=<16, ||idade=17, ||idade>70)
        {
        printf("Voto facultativo");
        }
        return 0;
    }