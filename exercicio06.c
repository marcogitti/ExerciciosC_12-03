#include <stdio.h>

int main() {
   int codigo, quantidade;
   float preco_unitario, preco_total;

   printf("Digite o código do produto: ");
   scanf("%d", &codigo);

   printf("Digite a quantidade comprada: ");
   scanf("%d", &quantidade);

   switch(codigo) {
      case 1:
         preco_unitario = 5.32;
         break;
      case 2:
         preco_unitario = 6.45;
         break;
      case 3:
         preco_unitario = 2.37;
         break;
      case 4:
         preco_unitario = 5.32;
         break;
      case 5:
         preco_unitario = 6.45;
         break;
      default:
         printf("Código inválido!");
         return 0;
   }

   preco_total = preco_unitario * quantidade;

   printf("Preço total: R$ %.2f", preco_total);

   return 0;
}