//3. Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.

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
