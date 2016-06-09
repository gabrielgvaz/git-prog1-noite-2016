#include <stdio.h>
int main()
{
    int i;//declara variaveis
    //numeros impares de 51 a 101
    for(i=51; i<=101; i+=2)//estrutura de repetiçao onde i+=2 é a mesma coisa que i=i+2
    {
    printf("\n%d", i);//imprime i
    }
    return 0;
}