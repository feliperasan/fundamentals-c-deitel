/* Figura 3.13: fig03_13.c
   Pré-incrementando e Pós-incrementando */
#include <stdio.h>

int main ( void ) {
  int c;

  /* Demonstra Pós-incremento */
  c = 5;
  printf( "%d\n", c ); /* imprime 5 */
  printf( "%d\n", c++ ); /* imprime 5 e depois pós-incrementa */
  printf( "%d\n", c ); /* imprime 6 */

  /* Demonstra Pré-incremento */
  c = 5;
  printf( "%d\n", c ); /* imprime 5 */
  printf( "%d\n", ++c ); /* Pré-incrementa e depois imprime 6 */
  printf( "%d\n", c ); /* imprime 6 */

  return 0;
}
