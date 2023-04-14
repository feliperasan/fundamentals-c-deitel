/* Figura 2.5: fig02_05.c
   Programa de adição */
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ) {
  int inteiro1;
  int inteiro2;
  int soma;

  printf("Digite o primeiro inteiro\n"); /*prompt*/
  scanf("%d", &inteiro1);

  printf("Digite o segundo inteiro\n"); /*prompt*/
  scanf("%d", &inteiro2);

  soma = inteiro1 + inteiro2;

  printf("A soma é %d\n\a", soma);

  return 0;
} /* Fim do programa main */
