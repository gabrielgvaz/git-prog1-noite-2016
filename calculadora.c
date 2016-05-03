/*Qual operação deseja?
1 - adição
2 - subtração
3 - multiplicação
4 - divisão
Opção:2
Entre com num1: 5
Entre com num2: 3
Resultado : 5 - 3 = 2

Deseja continuar(1-s/2-n)?
*/
#include <stdio.h>
int main()
{
    float n1, n2, resposta;
    int op;
    
    printf("\nCalculadora!\n");
    printf("\nEntre com o numero 1: ");
    scanf("%f", &n1);
    printf("\n Entre com o operador: ");
    scanf("%d", &op);
    printf("\nEntre com o numero 2: ");
    scanf("%f", &n2);
    printf("\n");
    switch(op)
    {
        case 1:
        resposta = n1 + n2;
        break;
        case 2: 
        resposta = n1 - n2;
        break;
        case 3: 
        resposta = n1 * n2;
        break;
        case 4: 
        resposta = n1 / n2;
        break;
    }
    
    printf("\n%.2f", resposta);// para dizer a quantidade de casas decimais use o ".2 entre o % e o F"
    return 0;
}