//4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo.
//Se a prestação, for maior que 20% do salário, imprima: "Empréstimo não concedido.", 
//caso contrário, imprima: "Empréstimo concedido." 


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

