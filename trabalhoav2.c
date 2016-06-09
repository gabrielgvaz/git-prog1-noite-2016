#include <stdio.h>
int main()
{   
    struct ordenador
    int i;
    float av1[30];
    char nome[30][20];
    
    for(i=0;i<5;i++)
    {
    printf("\nEntre com o nome do aluno %d:", i+1);
    scanf("%s", nome[i]); 
    }
    for(i=0;i<5;i++)
    {
    printf("\nEntre com a av1 do aluno %s:", nome[i]);
    scanf("%f", &av1[i]);
    }
    
    

    return 0;
}