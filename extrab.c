#include <stdio.h>
int main()
{
    int i;
    char nome[5][20];
    float salarios[5];
   //ler nome e salario de 5 funcionarios
    for(i=0;i<5;i++)
    {
    printf("\nEntre com o nome do %d. funcionario:", i+1);
    scanf("%s", nome[i]);
    
    printf("\nEntre com o salario do %s.", nome[i]);
    scanf("%f", &salarios[i]);
    }
    //gerar relatorio
    printf("\nNome\tSal.Bruto\t\tSal.Liquido");
    printf("\n-------------------------------------------------");
    for(i=0;i<5;i++)
    {
        printf("\n%s\t%.2f\t\t%.2f", nome[i], salarios[i], salarios[i]*0.8);
    }
    printf("\n---------------------------------------");
    
    return 0;
}



