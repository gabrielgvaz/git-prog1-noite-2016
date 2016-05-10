#include <stdio.h>

int main()
{
    int soma=0, i, cont=0;
    float media;

    
    for(i=1;i<101;i++)
    {
        soma = soma + i;
        cont = cont + 1;
    }
    printf("\n%d", soma);
    media = (float)soma / cont;
    printf("\n%.2f", media);
    
    return 0;
}