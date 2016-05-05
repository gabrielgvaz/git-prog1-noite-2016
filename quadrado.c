#include <stdio.h>

int main()
{   
    int lado, linha, coluna;

    printf("\nEntre com o lado do quadrado: ");
    scanf("%d", &lado);
    // desenhar um quadrado
    
    for(linha=1;linha<=lado;linha++)
    {
        for(coluna=1;coluna<=lado;coluna++)
        {
            if((linha==1) || (linha==lado) || (coluna==1) || (coluna==lado))
            
            printf("*");
            else {
                printf(" ");
            }
        }    
            printf("\n");
        
        
    }
    return 0;
}