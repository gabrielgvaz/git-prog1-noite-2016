#include <stdio.h>
int main()
{
    int num1=0, num2=1, numero;
    
    for(num1=0;num1<1000;num1++)
    {
        numero = num2 + num1;
        num1 = num2;
        num2 = numero;
        printf("\n%d...", numero);
    }
    
    return 0;
}