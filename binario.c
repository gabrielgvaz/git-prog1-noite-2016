#include <stdio.h>
int main()
{   
    char resto;
    float num;

    printf("Digite o numero a ser convertido para binario:\n");
    scanf("%f", &num);
    while (num>0)
    { 
        resto = num%2;
        printf("%d", resto);
        num = num/2;
    }
    
    return 0;
}
















