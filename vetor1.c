#include <stdio.h>
int main()
{
    int i, contmaior=0;
    float av1[10], media, somaAv1=0, maior=-999;
    
    for(i=0;i<=9;i++)
{
    printf("\nEntre com a av1 do aluno %d:", i+1);
    scanf("%f", &av1[i]);
    somaAv1 = somaAv1 + av1[i];
    
    if(av1[i] > maior)
    {
        maior = av1[i];   
    }
    
}
    media = somaAv1 / i;
    printf("\nMedia da turma = %.2f", media);
    printf("\n");
    
    for(i=0;i<=9;i++)
    {
        if (av1[i] >= media)
        {
            printf("\nNota maior que media - %.2f", av1[i]);
            printf("\n");
        }
        if(av1[i] == maior)
        {
            contmaior++;
        }
    }
    
    printf("\n%d alunos tiraram a maior nota que foi %2.f", contmaior, maior);
    printf("\n");      
    return 0;
}
 