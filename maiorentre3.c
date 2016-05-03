#include <stdio.h>
int main()
{
    int num1, num2, num3;
    
    printf("\nEntre com o numero 1\n");
    scanf("%d", &num1);
    
     printf("\nEntre com o numero 2\n");
    scanf("%d", &num2);
    
     printf("\nEntre com o numero 3\n");
    scanf("%d", &num3);
    
    if(num1>num2 && num1>num3)
    {
        printf("\n%d", num1);
    }
    else if(num2>num1 && num2>num3)
    {
    printf("\n%d", num2);
    }
    else
    {
    printf("\n%d\n", num3);
    }
    return 0;
    
}