/* Exemplo de estouro de vari�vel.
   Quando se armazena um valor fora dos limites suportados pelo
   tipo da vari�vel, o valor � rotacionado internamento, ou seja
   ele vira um valor diferente do que era esperado.

   N�o � um erro, e sim uma caracter�stica da linguagem C.      */

#include<stdio.h>

int main(){
   char numero;
   printf("\nExemplo de estouro de variavel");
   printf("\nExperimente digitar um numero maior que 127 ou menor que -128\n\n");
   printf("Entre com um valor: ");
   scanf("%d",&numero);
   printf("\nO valor realmente armazenado foi %d",numero);
   return 0;
}

