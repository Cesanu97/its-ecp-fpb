#include <stdio.h>

int main() {
    // Variabili per il nome e il cognome
    char nome[50], cognome[50];

    // Chiedi all'utente di inserire il proprio nome
    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);  

    // Chiedi all'utente di inserire il proprio cognome
    printf("Inserisci il tuo cognome: ");
    scanf("%s", cognome);  

    // Stampa un messaggio di benvenuto 
    printf("\nBenvenuto, %s %s!\n", nome, cognome);

    // Messaggio di ringraziamento
    printf("Grazie per aver usato il nostro programma.\n");

    // Messaggio di auguri 
    printf("Ti auguriamo Buone Feste\n");

    // Albero di Natale
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("*******\n");
    printf("  ***\n");

    return 0;
}

