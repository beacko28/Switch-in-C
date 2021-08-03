#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  char regiao, vendedor;

  printf("Regioes: Leste, Oeste e Norte\n");
  printf("Informe a primeira letra da regiao: ");
  regiao = getchar(); //como a scanf, lê o comando inserido

  regiao = toupper(regiao); //converte as letras digitadas em maiusculas
  printf("\n");

  switch(regiao){
    case 'L' :
      printf("Vendedores: Ricardo, Jose e Mariana \n");
      printf("Informe a primeira letra do vendedor: ");
      vendedor = toupper(getchar());
      printf("\n");

      switch(vendedor){

        case 'R':
          printf("Vendas: R$%d\n", 5000);
          break;
        case 'J':
          printf("Vendas: R$%d\n", 15000);
          break;
        case 'M':
          printf("Vendas: R$%d\n", 18000);
          break;
      }
    break;

    case 'O':
      printf("Vendedores: Rafael, Jonas e Maria \n");
      printf("Informe a primeira letra do vendedor: ");
      vendedor = toupper(getchar());
      printf("\n");

      switch(vendedor){

        case 'R':
          printf("Vendas: R$%d\n", 2000);
          break;
        case 'J':
          printf("Vendas: R$%d\n", 17000);
          break;
        case 'M':
          printf("Vendas: R$%d\n", 15000);
          break;
      }
    break;

    case 'N':
      printf("Vendedores: Rafaela, Joana e Marta \n");
      printf("Informe a primeira letra do vendedor: ");
      vendedor = toupper(getchar());
      printf("\n");

      switch(vendedor){

        case 'R':
          printf("Vendas: R$%d\n", 3000);
          break;
        case 'J':
          printf("Vendas: R$%d\n", 20000);
          break;
        case 'M':
          printf("Vendas: R$%d\n", 120000);
          break;
      }
    break;

  }

  system("PAUSE");
  return 0;
}
