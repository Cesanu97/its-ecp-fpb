#include <stdio.h>
#include <string.h>

#define Nome "Cosmin"
#define Cognome "Esanu"
#define R1 0.85  // 85% di materiale recuperabile
#define R2 0.75  // 75% di materiale recuperabile
#define R3 0.65  // 65% di materiale recuperabile
#define R4 0.50  // 50% di materiale recuperabile
#define R5 0.40  // 40% di materiale recuperabile

int main() {
    char categoria[3];  
    double peso;
    double recupero_percentuale;

    // Messaggio di benvenuto
    printf("Benvenuto nel mio programma per il riciclo dei RAEE, io sono %s %s. Piacere!\n\n\n", Nome, Cognome);

    // Chiedere all'utente di inserire categoria RAEE (ciclo per validare la categoria)
    int categoria_valida = 0; 
    while (!categoria_valida) {
        printf("Inserisci categoria RAEE (R1 a R5): ");
        scanf("%s", categoria);

        // Confronta la categoria inserita
        if (strcmp(categoria, "R1") == 0 || strcmp(categoria, "R2") == 0 || 
            strcmp(categoria, "R3") == 0 || strcmp(categoria, "R4") == 0 || 
            strcmp(categoria, "R5") == 0) {
            categoria_valida = 1;  
        } else {
            printf("Categoria non valida. Per favore inserisci una categoria valida (R1 a R5).\n");
        }
    }

    // Chiedere all'utente di inserire il peso
    printf("Inserisci peso del RAEE in kg: ");
    scanf("%lf", &peso);

    // Impostare il recupero_percentuale in base alla categoria
    if (strcmp(categoria, "R1") == 0) {
        recupero_percentuale = R1;
    } else if (strcmp(categoria, "R2") == 0) {
        recupero_percentuale = R2;
    } else if (strcmp(categoria, "R3") == 0) {
        recupero_percentuale = R3;
    } else if (strcmp(categoria, "R4") == 0) {
        recupero_percentuale = R4;
    } else if (strcmp(categoria, "R5") == 0) {
        recupero_percentuale = R5;
    }

    // Calcolare il peso recuperabile
    double peso_recuperabile = peso * recupero_percentuale;
    double peso_irrecuperabile = peso - peso_recuperabile;

    // Stampare i risultati
    printf("\n\nIl peso totale è: %.2f", peso);
    printf("\nIl peso del materiale recuperabile è: %.2f kg.\n", peso_recuperabile);
    printf("Il peso del materiale irrecuperabile è: %.2f kg.\n", peso_irrecuperabile);

    return 0;
}
