#include <stdio.h>
int main()
{
    float cateto1, cateto2, hipotenusa;
    
    printf("\nInforme cateto1\n");
    scanf("%f", &cateto1);
    
    printf("\nInforme cateto2\n");
    scanf("%f", &cateto2);
    
    hipotenusa=cateto1*cateto1+cateto2*cateto2;
    printf("%f", hipotenusa);
    
    return 0;
    
    
}