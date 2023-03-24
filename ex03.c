//3. Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
   int num;

   printf("Ola! Por favor, digite um numero inteiro: ");
   scanf("%d", &num);

   if (num % 2 == 0) {
      printf("%d eh um numero par\n", num);
   } else {
      printf("%d eh um numero impar\n", num);
   }

return 0;

}
