/* Figura 3.8: fig03_08.c
   Programa de média da turma com repetição controlada por sentinela */
#include <stdio.h>

int main( void ) {
  int contador;
  int nota;
  int total;

  float media;

  total = 0;
  contador = 0;

  printf( "Digite a nota, -1 para finalizar: " );
  scanf( "%d", &nota );

  /* enquanto valor da sentinela não foi lido */
  while ( nota != -1 ) {
    total = total + nota;
    contador = contador + 1;

    printf( "Digite a nota, -1 para finalizar: " );
    scanf( "%d", &nota );
  } /* finitim do while */

  if ( contador != 0 ) {
    media = ( float ) total / contador;

    printf( "Média da turma é %.2f\n", media);
  } else {
    printf( "Nenhuma nota foi informada\n");
  } /* fim do if else */

  return 0;
} /* fim da função main */
