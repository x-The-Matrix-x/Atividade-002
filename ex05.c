//5. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: 
//o n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
   float num;

   printf("Ola! Por favor, digite um numero: ");
   scanf("%f", &num);

   if (num > 0) {
      printf("O numero ao quadrado eh: %.2f\n", num * num);
      printf("A raiz quadrada do numero eh: %.2f\n", sqrt(num));
   } else {
      printf("O numero digitado nao eh positivo.\n");
   }

return 0;

}
