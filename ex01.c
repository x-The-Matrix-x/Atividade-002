//1. Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
   int num1, num2;

   printf("Ola! Por favor, digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("Agora, digite o segundo numero: ");
   scanf("%d", &num2);

   if (num1 > num2) {
      printf("%d eh maior que %d\n", num1, num2);
   } else if (num2 > num1) {
      printf("%d eh maior que %d\n", num2, num1);
   } else {
      printf("Os dois numeros sao iguais\n");
   }

return 0;

}
