
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
    switch(op) //escolher
    {
        case 1: //caso se...
        resposta = n1 + n2;
        break;
        case 2: //caso se...
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
