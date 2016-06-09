#include <stdio.h>
int main()
{   //declara variaveis
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;
    
    //ler dois numeros inteiros
    printf("\nEntre com numero 1: " );
    scanf("%d", &num1);
    
    printf("\nEntre com numero 2: ");
    scanf("%d", &num2);
    //calcular operacoes matematicas basicas
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    //imprimir resultado
    printf("\nsoma = %d", soma);
    printf("\nsubtracao= %d", subtracao);
    printf("\nmultiplicacao= %d", multiplicacao);
    printf("\ndivisao= %f", divisao);
    //fim
    return 0;
    
}
