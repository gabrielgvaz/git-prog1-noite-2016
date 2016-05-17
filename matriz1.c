#include <stdio.h>
int main()
{
    int i, j;
    float notas[4][3], media; //coluna 0, 1, 2 = av1, av2 e av3
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEntre com a AV%d do aluno %d", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
    } 
        printf("\nNome Aluno\tAV1\tAV2\tAV3");
        printf("\n--------------------------------------");
      for(i=0;i<4;i++)
      {
          printf("\nAluno %d\t", i+1);
          for(j=0;j<3;j++)
          {
              printf("\t%.2f", notas[i][j]);
          }
      }
    printf("\n");
    return 0;
}

