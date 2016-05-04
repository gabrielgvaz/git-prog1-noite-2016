#include <stdio.h>
int main()
{
    int aluno, k, quant, abaixo5=0, acima5=0;
    float totalnota=0, nota, media;
    do
    {
    printf("\nEntre com a nota de um aluno: ");
    scanf("%f", &nota);
    totalnota = totalnota + nota;
    quant = quant + 1;
    media = totalnota / quant;
    if(nota<=5)
    {
        abaixo5 = abaixo5 + 1;
    }
    else 
    {
        acima5 = acima5 + 1;
    }
    printf("\nDeseja continuar? 1-S 2-N\n");
    scanf("%d", &k);
    }
    while(k==1);
    if(acima5>0)
    {
        
        printf("\nA qunatidade de alunos totais foi %d, e a quantidade de alunos acima de 5 foi %d.", quant, acima5);
        printf("\nA media eh: %.2f", media);
    }
    else if(acima5==0)
    { 
        printf("Não há nenhum aluno com nota acima de 5.");
    }
    
    
    return 0;
}