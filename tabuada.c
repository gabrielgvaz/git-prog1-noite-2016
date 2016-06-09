#include <stdio.h>

int main()
{
    int num, i, k;
    printf("\nDigite um numero de 1 a 10 para a tabuada\n");
    scanf("%d", &num);
    
    for(i=1;i<=10;i++)
    {
        k=num*i;
        printf("\n%d*%d=%d\n",num, i, k);
    }
    return 0;
}
