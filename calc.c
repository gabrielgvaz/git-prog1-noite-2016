#include <stdio.h>
int main()
{
    int menu, num1, num2, continuar;
    float resultado;
    
    do
    {
        //menu
        printf("\nQual a operação deseja?");
        printf("\n1 - adição");
        printf("\n2 - subtração");
        printf("\n3 - multiplicação");
        printf("\n4 - divisão");
        
        printf("\n\nOpção: ");
        scanf("%d", &menu);
        
        printf("\nEntre com num1: ");
        scanf("%d", &num1);
        
        printf("\nEntre com num2: ");
        scanf("%d", &num2);
        
        switch(menu)
        {
            case 1: //adição
                resultado = num1 + num2;
                printf("\nResultado : %d + %d = %.2f", num1, num2, resultado);
                break;
                 case 2: //subtração
                resultado = num1 - num2;
                printf("\nResultado : %d - %d = %.2f", num1, num2, resultado);
                break;
                 case 3: //multiplicação
                resultado = num1 * num2;
                printf("\nResultado : %d * %d = %.2f", num1, num2, resultado);
                break;
                 case 4: //divisão
                resultado = (float)num1 / num2;
                printf("\nResultado : %d + %d = %.2f", num1, num2, resultado);
                break;
                default:
        }
                printf("\nOpção inválida!!!");
                //fim switch
                printf("\nDeseja continuar(1-S/2-N)?");
                scanf("%d", &continuar);
        
                while(continuar == 1);
        
                return 0;
                
                
                
        }
        
    
}