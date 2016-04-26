#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    printf("\nEntre nota 1:");
    scanf("%f", &nota1);
    printf("\nEntre nota 2:");
    scanf("\n%f", &nota2);
    
    media = (nota1 + nota2)/2;
    
    if (media<= 5.0)
    {
        printf("REPROVADO");
        
    }
    else if (media<7)
    {
    printf("\nRECUPERACAO\n");
    }
    else (media>7)
    {
     printf("\nAPROVADO\n");
    }
    return 0;
    }