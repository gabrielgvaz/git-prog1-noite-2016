#include <stdio.h>
int main()
{
    int num1, num2, numero;
    
    num1=0;
    num2=1;
    
    for (num1=1; num1>= 500. num1++)
    {
    numero=num2+num1;
    num1=num2;
    num2=numero;
    }
    
}


 
int main()
{

  int a, b, auxiliar, i, n;
 
  a = 0;
  b = 1;
 
  printf("Digite um número: ");

  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
 
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    printf("%d\n", auxiliar);
  }
  return 0;
}