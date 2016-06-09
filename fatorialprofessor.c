#include <stdio.h>

int fat(int n)
{
    int fatorial;
    
    for(fatorial=1; n>=1; n--)
        fatorial = fatorial * n;
        
    return fatorial;
}

int main()
{
    int num;
    int result;
    
    printf("\nEntre com um numero: ");
    scanf("%d", &num);
    
    result = fat(num);
    
    printf("\nFat(%d) = %d", num, result);
  
    return 0;
}
