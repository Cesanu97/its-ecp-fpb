#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "define_ver_indovina_parolaEsa.h"

// Inizializzazione dell'array di parole
char words[][MAX_LENGTH] = {"elephant", "banana", "computer", "galaxy", "puzzle", "giraffe"};

int main() {
    
    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    // Selezione casuale di una parola
    int word_index = rand() % 6; 
    char *chosen_word = words[word_index];

    // Creazione di una versione nascosta della parola
    int word_length = strlen(chosen_word);
    char hidden_word[word_length + 1];  
    for (int i = 0; i < word_length; i++) {
        hidden_word[i] = '*';
    }
    hidden_word[word_length] = '\0';  
    
      // Contatore dei tentativi
    int attempts = 0;  
    
    // Numero di lettere indovinate correttamente
    int correct_guesses = 0;  

    // Gioco principale
    while (correct_guesses < word_length) {
        printf("Parola attuale: %s\n", hidden_word);
        printf("Inserisci un carattere: ");
        
        char guess;
        scanf(" %c", &guess);  

        int letter_found = 0;

        // Controlla se il carattere è presente nella parola
        for (int i = 0; i < word_length; i++) {
            if (chosen_word[i] == guess && hidden_word[i] == '*') {
                hidden_word[i] = guess;  
                correct_guesses++;
                letter_found = 1;
            }
        }

        if (letter_found) {
            printf("Carattere presente!\n");
        } else {
            printf("Il carattere '%c' non è presente nella parola.\n", guess);
        }

        attempts++;
    }

    // Risultato finale
    printf("Congratulazioni! Hai indovinato la parola: %s\n", chosen_word);
    printf("Numero di tentativi: %d\n", attempts);

    return 0;
}
