#include <stdio.h>

int main()
{
   int valor1, valor2, soma;
   
   printf("Digite o primeiro valor: ");
   scanf("%d", &valor1);
   
   printf("Digite o segundo valor: ");
   scanf("%d", &valor2);
   
   soma = valor1 + valor2;
   
   if (soma > 10) {
    printf("A soma dos valores é: %d\n", soma);
   }

   if (soma < 10) {
    printf ("Soma inferior a 10. \n");
    printf ("Resultado: %d\n", soma);
   }

   return 0;
}