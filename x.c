#include <stdio.h>
int main()
{
    int i, j, num[5], aux; 
for(i = 1; i <= 5; i++) 
{ 
printf("Digite o valor %d: ", i); 
scanf("%d", &num[i]); 
} 
for(i = 1; i <= 4; i++) 
{ 
for(j = i + 1; j <= 5; j++) 
{ 
if(num[j] > num[i]) 
{ 
aux = num[i]; 
num[i] = num[j]; 
num[j] = aux; 
} 
} 
} 
printf("\nOs numeros em ordem decrescente sao:\n\n"); 
for(i = 1; i <= 5; i++) 
{ 
printf("%d ", num[i]); 
} 
printf("\n\n"); 
return 0;
}