#include <stdio.h>
int main()
{   
    int num, i=0, j, resto[30];
    printf("Digite o numero a ser convertido para binario:\n");
    scanf("%d", &num);
    while (num>0)
    {  
        resto[i] = num % 2;
        i++;
        num = num/2; 
    }
        
        printf("O numero binário é: ");
        for(j=i - 1; j>=0; j--)
        {
            printf("%d", resto[j]);
        }
        printf("\n");
        return 0;
    }