#include <stdio.h>

int main()
{
    char nome[20];
    float av1, av2, media;
    
    printf("\nQual o seu nome?");
    scanf("%s", nome);
    
    printf("\nEntre com AV1: ");
    scanf("%f", &av1);
    
    printf("\nEntre com AV2: ");
    scanf("%f", &av2);
    
    media = (av1 + av2)/2;
    
    printf("\nOlá %s, sua média é: %.2f", nome, media);
    
    return 0;
}