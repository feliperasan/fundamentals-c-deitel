/* Figura 3.6: fig03_06.c
   Programa de média da turma com repetição controlada por contador */

#include <stdio.h>

int main ( void ) {
  int contador;
  int nota;
  int total;
  int media;

  total = 0;
  contador = 1;

  while ( contador <= 10 ) {
    printf( "Digite a nota: ");
    scanf( "%d", &nota );
    total = total + nota;
    contador = contador + 1;
  }

  media = total / 10;

  printf( "Media da turma é %d\n\a", media );

  return 0;
}
