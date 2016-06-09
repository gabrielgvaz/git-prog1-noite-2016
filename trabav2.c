#include <stdio.h>

int main()
{
    
    struct ordenador
    {                     
        char nome[20];
        float nota;
    };

    struct ordenador aluno[30];
    struct ordenador nota2;
    int i, j;
    
    for(i=0;i<30;i++)
    {
        printf("Nome do aluno %d:", i+1);
        scanf("%s", aluno[i].nome);
        do
        {
            printf("Quanto %s tirou na av1?:\n", aluno[i].nome);
            scanf("%f", &aluno[i].nota);
            if(aluno[i].nota>30||aluno[i].nota<0)
            printf("Valor invalido!\n");
        }while(aluno[i].nota>30||aluno[i].nota<0);
    }
    
    for(i=0;i<30;i++)
    {
        for(j=i;j<30;j++)
        {
            if(aluno[i].nota<aluno[j].nota)
            {
                nota2=aluno[i];
                aluno[i]=aluno[j];
                aluno[j]=nota2;
            }
        }
    }
    printf("Listagem da AV1\n");
    printf("---------------------------------------------------\n");
    printf("Nome:\t \t \tNota:\n");
    for(i=0;i<30;i++)
    {
        printf("%s\t \t \t%.2f\n", aluno[i].nome, aluno[i].nota);
    }
    printf("---------------------------------------------------\n");
    
return 0;
}