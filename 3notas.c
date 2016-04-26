#include <stdio.h>

int main()
{
    float n1, n2, n3, media, ma;
    
    printf("\nDigite nota 1:\n");
    scanf("%f", &n1);
    
    printf("\nDigite nota 2:\n");
    scanf("%f", &n2);
    
    printf("\nDigite nota 3:\n");
    scanf("%f", &n3);
    
    printf("\nInforme media\n");
    scanf("%f", &media);
    
    ma = (n1 + n2*2 + n3*3 + media)/7;
    printf("\n%.2f",ma);
    
    if (ma>=9)
    printf("\nA\n");
    
    else if (ma>=7.5 && ma<9)
    printf("\nB\n");
    
    else if (ma>=6 && ma<7.5)
    printf("\nC\n");
    
    else if (ma>=4 && ma<6)
    printf("\nD\n");
    
    else
    printf("\nE\n");
    
    return 0;
}