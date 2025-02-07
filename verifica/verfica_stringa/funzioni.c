#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funzioni.h"

// Funzione per contare le stringhe che iniziano con una vocale
int conta_vocali_iniziali(char words[][20], int size) {
    int count = 0;
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < size; i++) {
        if (strchr(vowels, words[i][0])) {
            count++;
        }
    }
    return count;
}

// Funzione per contare le stringhe che contengono almeno un numero
int conta_stringhe_con_numero(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (isdigit(words[i][j])) {
                count++;
                break;
            }
        }
    }
    return count;
}

// Funzione per trovare la stringa più lunga
char* stringa_piu_lunga(char words[][20], int size) {
    int max_length = 0;
    char* longest_word = words[0];
    for (int i = 0; i < size; i++) {
        if (strlen(words[i]) > max_length) {
            max_length = strlen(words[i]);
            longest_word = words[i];
        }
    }
    return longest_word;
}

// Funzione per trovare la stringa più corta
char* stringa_piu_corta(char words[][20], int size) {
    int min_length = strlen(words[0]);
    char* shortest_word = words[0];
    for (int i = 0; i < size; i++) {
        if (strlen(words[i]) < min_length) {
            min_length = strlen(words[i]);
            shortest_word = words[i];
        }
    }
    return shortest_word;
}

// Funzione per contare le stringhe palindrome
int conta_palindrome(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int len = strlen(words[i]);
        int is_palindrome = 1;

        // Controllo della parola per verificare se è un palindromo
        for (int j = 0; j < len / 2; j++) {
            // Confronto tra lettere in minuscolo
            if (tolower(words[i][j]) != tolower(words[i][len - j - 1])) {
                is_palindrome = 0;
                break;
            }
        }
        if (is_palindrome) {
            count++;
        }
    }
    return count;
}

// Funzione per contare il numero totale di caratteri
int conta_caratteri_totali(char words[][20], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += strlen(words[i]);
    }
    return total;
}

// Funzione per stampare le stringhe in ordine corretto
void stampa_ordinale(char words[][20], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s", words[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");
}

// Funzione per stampare le stringhe in ordine inverso
void stampa_inverso(char words[][20], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(", ");
    }
    printf("\n");
}

// Funzione per stampare le stringhe in ordine inverso con caratteri invertiti
void stampa_inverso_con_caratteri_invertiti(char words[][20], int size) {
    for (int i = size - 1; i >= 0; i--) {
        int len = strlen(words[i]);
        for (int j = len - 1; j >= 0; j--) {
            printf("%c", words[i][j]);
        }
        if (i > 0) printf(", ");
    }
    printf("\n");
}
