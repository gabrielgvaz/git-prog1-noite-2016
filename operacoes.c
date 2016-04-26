#include <stdio.h>

int main()
{
    int num1,num2,soma,sub,mult;
    float divisao;
    printf("entre com o primeiro numero inteiro:");
    scanf("%d", &num1);
    printf("entre com o segundo numero inteiro:");
    scanf("%d", &num2);
    
    soma=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    divisao=(float)num1/num2;
    
    printf("\n%d + %d = %d", num1, num2, soma);
    printf("\n%d - %d = %d", num1, num2, sub);
    printf("\n%d * %d = %d", num1, num2, mult);
    printf("\n%d / %d = %.1f\n", num1, num2, divisao);
    
    return 0;
}