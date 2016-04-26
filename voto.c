#include <stdio.h>

int main()
{
    //declara as variaveis
    int idade;
    //ler do teclado
    
    printf("\nDigite sua idade:");
    //scan resposta do usuario
    scanf("%d", &idade);
    if (idade<16)
        {
        printf("\nVoce NAO pode VOTAR\n");
        }
        else if (idade == 16 || idade == 17 || idade > 70)
        {
        printf("\nVoto FACULTATIVO\n");
        }
        else 
        {
        printf("\nVOTO OBRIGATORIO\n");
        }
        return 0;
    }