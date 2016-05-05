#include <stdio.h>

int main()
{   
    int i;
    
    printf("\nTabela ASCII");
    printf("\n-----------------");
    printf("\nDEC\tCHAR");
    for(i=33;i<=126;i++)
    {
        printf("\n%d\t%c", i, i);
    }
    return 0;
}