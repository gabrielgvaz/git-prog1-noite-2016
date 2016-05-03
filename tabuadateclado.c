#include <stdio.h>
int main()
{
    int i, k, num, tab;
    printf("\nEntre com um numero para a tabuada");
    scanf("%d", &num);
    tab=0;
    while(num<1 || num>10)
    {
    printf("\nVc nao digitou um numero certo");
    
    
    }
    
    for(i=0; i<=10; i++)
    {
         k=num*i;
    
        printf("\n%dX%d=%d\n",num, i, k);
    }
    return 0;
}

