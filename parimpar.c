#include <stdio.h>

int main()
{
    int num;
    printf("Entre com um numero inteiro:");
    scanf("%d", &num);
    
    if(num%2==0)
    {
        printf("Este numero eh par\n");
    }
    else
    {
        printf("Este numero eh impar\n");
    }
    
    return 0;
}