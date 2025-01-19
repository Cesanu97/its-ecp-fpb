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
    char categoria[3];  // 2 caratteri + 1 per '\0'
    double peso;
    double recupero_percentuale = 0.0;

    // Messaggio di benvenuto
    printf("Benvenuto nel mio programma per il riciclo dei RAEE, io sono %s %s. Piacere!\n", Nome, Cognome);

    // Chiedere all'utente di inserire categoria RAEE
    printf("Inserisci categoria RAEE (R1 a R5): ");
    scanf("%s", categoria);

    

    // Confronta la categoria prima del blocco if
    int result = strcmp(categoria, "R1");

    if (result == 0) {
        recupero_percentuale = R1;
    } else if (strcmp(categoria, "R2") == 0) {
        recupero_percentuale = R2;
    } else if (strcmp(categoria, "R3") == 0) {
        recupero_percentuale = R3;
    } else if (strcmp(categoria, "R4") == 0) {
        recupero_percentuale = R4;
    } else if (strcmp(categoria, "R5") == 0) {
        recupero_percentuale = R5;
    } else {
        printf("Categoria non valida. Programma terminato.\n");
        return 1;
    }



    // Chiedere all'utente di inserire il peso
    printf("Inserisci peso del RAEE in kg: ");
    scanf("%lf", &peso);




    // Calcolare il peso recuperabile
    double peso_recuperabile = peso * recupero_percentuale;
    double peso_irrecuperabile = peso - peso_recuperabile;

    // Stampare i risultati
    printf("\nIl peso del materiale recuperabile è: %.2f kg.\n", peso_recuperabile);
    printf("Il peso del materiale irrecuperabile è: %.2f kg.\n", peso_irrecuperabile);

    return 0;
}
