#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    
    printf("\nDigite o Lado 1:\n");
    scanf("%f", &lado1);
    
    printf("\nDigite o Lado 2:\n");
    scanf("%f", &lado2);
    
    printf("\nDigite o Lado 3:\n");
    scanf("%f", &lado3);
    
    if (lado1==lado2 && lado2==lado3)
    printf ("\nTriangulo equilatero\n");
    
    else if(lado1==lado2 || lado2==lado3 || lado3==lado1)
    printf("\nTriangulo isosceles\n");
    
    else
    printf("\nTriangulo escaleno\n");
    
    return 0;
    
}