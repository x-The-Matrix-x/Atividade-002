//2. Fa�a um programa que leia dois n�meros e mostre o maior deles.
//Se, por acaso, os dois n�meros forem iguais, imprima a mensagem "N�meros iguais".
 
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
      printf("Numeros iguais\n");
   }

return 0;

}
