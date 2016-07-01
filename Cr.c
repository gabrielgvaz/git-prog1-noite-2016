#include <stdio.h>
int main(){
    float nmat, nsis, ntxt, nser, nprog, nweb, soma;
    char nome[30];
    
        printf("\nQual o seu nome? ");
        scanf("%s", nome);
        printf("\nEntre com a sua média de Matemática Discreta: (Utilize '.' ao invés de ',') ");
        scanf("%f", & nmat);
        printf("\nEntre com a sua média de Ferramentas Web: (Utilize '.' ao invés de ',')");
        scanf("%f", & nweb);
        printf("\nEntre com a sua média de Introduçao a sistemas de informação: (Utilize '.' ao invés de ',')");
        scanf("%f", & nsis);
        printf("\nEntre com a sua média de Prog I: (Utilize '.' ao invés de ',')");
        scanf("%f", & nprog);
        printf("\nEntre com a sua média de O ser humano e o fenomeno: (Utilize '.' ao invés de ',')");
        scanf("%f", & nser);
        printf("\nEntre com a sua média de Leitura e produçao de textos: (Utilize '.' ao invés de ',')");
        scanf("%f", & ntxt);
        
        nmat = nmat * 90;
        nsis = nsis * 60;
        ntxt = ntxt * 30;
        nser = nser * 30;
        nprog = nprog * 90;
        nweb = nweb * 60;
        
        soma = nmat + nsis + ntxt + nser + nprog + nweb;
        soma = soma / 360;
        
        printf("\n %s, O seu CR é: %.1f",nome, soma);
        printf("\n\n");
        
        return 0;
}
