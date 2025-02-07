#ifndef FUNZIONI_H
#define FUNZIONI_H

// Funzione per contare le stringhe che iniziano con una vocale
int conta_vocali_iniziali(char words[][20], int size);

// Funzione per contare le stringhe che contengono almeno un numero
int conta_stringhe_con_numero(char words[][20], int size);

// Funzione per trovare la stringa più lunga
char* stringa_piu_lunga(char words[][20], int size);

// Funzione per trovare la stringa più corta
char* stringa_piu_corta(char words[][20], int size);

// Funzione per contare le stringhe palindrome
int conta_palindrome(char words[][20], int size);

// Funzione per contare il numero totale di caratteri
int conta_caratteri_totali(char words[][20], int size);

// Funzione per stampare le stringhe in ordine corretto
void stampa_ordinale(char words[][20], int size);

// Funzione per stampare le stringhe in ordine inverso
void stampa_inverso(char words[][20], int size);

// Funzione per stampare le stringhe in ordine inverso con caratteri invertiti
void stampa_inverso_con_caratteri_invertiti(char words[][20], int size);

#endif
