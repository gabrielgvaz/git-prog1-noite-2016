#include <stdio.h>

int sigma(int n)
{
    int sigma;
    
    for(sigma=0; n>=1; n--)
        sigma = sigma + n;
        
    return sigma;
}

int main()
{
    int num;
    int result;
    
    printf("\nEntre com um numero: ");
    scanf("%d", &num);
    
    result = sigma(num);
    
    printf("\nSigma(%d) = %d", num, result);
  
    return 0;
}