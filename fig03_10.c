/* Figura 3.10: fig03_10.c
   Análise de resultados de exame */
#include <stdio.h>

int main( void ) {
  int aprovados = 0;
  int reprovados = 0;
  int aluno = 1;
  int resultado;

  while ( aluno <= 10 ) {
    printf( "Forneça resultado ( 1=aprovado,2=reprovado ): ");
    scanf("%d", &resultado);

    /* se resultado 1, incrementa aprovados. Senão, incrementa reprovados */
    if ( resultado == 1 ) {
      aprovados = aprovados + 1;
    } else {
      reprovados = reprovados + 1;
    }

    aluno = aluno + 1;
  } /* fim do if else */

  printf( "Aprovados %d\n", aprovados );
  printf( "Reprovados %d\n", reprovados );

  if ( aprovados > 8 ) {
    printf( "Bônus ao instrutor!\n" );
  }
  return 0;
} /* Fim da função main */

