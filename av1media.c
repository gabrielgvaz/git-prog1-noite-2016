#include <stdio.h>
int main()
{
int i;
float av1[10], media, somaAv1=0;

for(i=0;i<=9;i++)
{
    printf("\nEntre com a av1 do aluno %d:", i+1);
    scanf("%f", &av1[i]);
    somaAv1 = somaAv1 + av1[i];
}

media = somaAv1 / i;
printf("\nMedia da turma = %.2f", media);
printf("\n");
return 0;
}
