//4. Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo.
//Se a presta��o, for maior que 20% do sal�rio, imprima: "Empr�stimo n�o concedido.", 
//caso contr�rio, imprima: "Empr�stimo concedido." 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
   float salario, prestacao;

   printf("Ola! Por favor, digite o salario do trabalhador: ");
   scanf("%f", &salario);

   printf("Agora, digite o valor da prestacao do emprestimo: ");
   scanf("%f", &prestacao);

   if (prestacao > salario * 0.2) {
      printf("Emprestimo nao concedido.\n");
   } else {
      printf("Emprestimo concedido.\n");
   }

return 0;

}

