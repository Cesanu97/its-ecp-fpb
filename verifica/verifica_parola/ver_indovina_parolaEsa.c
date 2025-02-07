#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "define_ver_indovina_parolaEsa.h"

// Array di parole
char parola[][MAX_LENGTH] = {"elephant", "banana", "computer", "galaxy", "puzzle", "giraffe"};

int main() {
    
    // Generatore di numeri casuali
    srand(time(NULL));

    // Chiedi all'utente se vuole usare una parola predefinita o inserire una parola personalizzata
    int scelta;
    printf("Vuoi usare una parola predefinita o una personalizzata?\n");
    printf("1. Parola predefinita\n");
    printf("2. Parola personalizzata\n");
    printf("Scegli (1 o 2): ");
    scanf("%d", &scelta);
    
    char *parola_scelta;
    
    if (scelta == 1) {
        // Seleziona casualmente una parola
        int indice_parola = rand() % 6; 
        parola_scelta = parola[indice_parola];
    } else if (scelta == 2) {
        
        // Permetti all'utente di inserire una parola
        char parola_personalizzata[MAX_LENGTH];
        printf("Inserisci la tua parola personalizzata: ");
        scanf("%s", parola_personalizzata);
        
        parola_scelta = parola_personalizzata;
    } else {
        printf("Scelta non valida! Usiamo una parola predefinita.\n");
        int indice_parola = rand() % 6; 
        parola_scelta = parola[indice_parola];
    }

    // Creazione di una versione nascosta della parola
    int lung_parola = strlen(parola_scelta);
    char parola_nascosta[lung_parola + 1];  
    for (int i = 0; i < lung_parola; i++) {
        parola_nascosta[i] = '*';
    }
    parola_nascosta[lung_parola] = '\0';  
    
    // Contatore dei tentativi
    int tentativi = 0;  
    
    // Numero di lettere indovinate correttamente
    int tentativi_corretti = 0;  

    // Gioco principale
    while (tentativi_corretti < lung_parola) {
        printf("Parola attuale: %s\n", parola_nascosta);
        printf("Inserisci un carattere: ");
        
        char indovina;
        scanf(" %c", &indovina);  

        int parole_trovate = 0;

        // Controlla se il carattere è presente nella parola
        for (int i = 0; i < lung_parola; i++) {
            if (parola_scelta[i] == indovina && parola_nascosta[i] == '*') {
                parola_nascosta[i] = indovina;  
                tentativi_corretti++;
                parole_trovate = 1;
            }
        }

        if (parole_trovate) {
            printf("Carattere presente!\n\n");
        } else {
            printf("Il carattere '%c' non è presente nella parola.\n\n", indovina);
        }

        tentativi++;
    }

    // Risultato finale
    printf("Congratulazioni! Hai indovinato la parola: %s\n", parola_scelta);
    printf("Numero di tentativi: %d\n", tentativi);

    return 0;
}

