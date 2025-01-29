#include <stdio.h>

int main() {
    int N;
    
  do {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("Errore! Il numero deve essere positivo.\n");
        }
    } while (N <= 0);

    // Stampa il triangolo di numeri
    for (int i = 1; i <= N; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0;
}






















