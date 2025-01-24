#include <stdio.h>
#include "define.h"

// Definition of macros
#define Nome "Cosmin"
#define Cognome "Esanu"
// #define SOMMA(a, b) ((a) + (b))
// #define SOTTRAZIONE(a, b) ((a) - (b))
// #define MOLTIPLICAZIONE(a, b) ((a) * (b))
// #define DIVISIONE(a, b) ((double)(a) / (b))
// #define MODULO(a, b) ((a) % (b))

int main(void) {
  int a, b;
  int risultato;

  // welcome message
  printf("Benvenuto, io sono %s %s\n\n", Nome, Cognome);

  //Request user input
  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &b);

  // Complex calculation
  risultato = MODULO(SOMMA(a, b) * SOTTRAZIONE(a, b), a);

  // Printing of results
  printf("\nSomma: %d + %d = %d\n", a, b, SOMMA(a, b));
  printf("Sottrazione: %d - %d = %d\n", a, b, SOTTRAZIONE(a, b));
  printf("Moltiplicazione: %d * %d = %d\n", a, b, MOLTIPLICAZIONE(a, b));
  printf("Divisione: %d / %d = %.2lf\n", a, b, DIVISIONE(a, b));
  printf("Modulo: %d %% %d = %d\n", a, b, MODULO(a, b));
  printf("Calcolo complesso: ((%d + %d) * (%d - %d)) %% %d = %d\n", a, b, a, b, a, risultato);

  return 0;
}
