#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSegreto, tentativo, tentativi = 0;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));
    numeroSegreto = (rand() % 100) + 1; // Numero tra 1 e 100

    printf("Benvenuto nel gioco 'Indovina il numero'!\n");
    printf("Devi indovinare un numero tra 1 e 100.\n");

    do {
        printf("Inserisci il tuo tentativo: ");

        // Controllo input (se non è un numero intero)
        if (scanf("%d", &tentativo) != 1) {
            printf("Errore! Inserisci solo numeri interi tra 1 e 100.\n");
            while (getchar() != '\n'); // Pulisce il buffer dell'input
            continue; // Torna a chiedere un numero
        }

        // Controllo se è fuori dal range
        if (tentativo <= 0 || tentativo > 100) {
            printf("Errore! Inserisci solo numeri tra 1 e 100.\n");
            continue; // Torna a chiedere un numero
        }

        tentativi++; // Incrementa il numero di tentativi

        // Verifica il numero
        if (tentativo > numeroSegreto) {
            printf("Troppo alto! Riprova.\n");
        } else if (tentativo < numeroSegreto) {
            printf("Troppo basso! Riprova.\n");
        } else {
            printf("Complimenti! Hai indovinato il numero in %d tentativi.\n", tentativi);
        }

    } while (tentativo != numeroSegreto); // Ripete finché l'utente non indovina

    return 0;
}
