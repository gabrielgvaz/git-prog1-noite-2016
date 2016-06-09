#include <stdio.h>

int main()
{   //declara variaveis
    int hora;
    
    printf("\nInforme a hora\n");
    scanf("%d", &hora);
    
    if (hora<12)
    {
        printf("\nBom dia\n");
    }
    else if (hora < 18)
    {
      printf("\nBoa tarde\n");
    }
    else if(hora < 24)
    {
        printf("\nBoa noite\n");
    }
    else
    {
        printf("Numero invalido, tente novamente");
    }
    return 0;
}
