#include <stdio.h>
#include "funzioni_calco.h"

int main() {
    int num1, num2;
    char operazione;
    int uscita = 0;

    // Array di numeri per il test delle operazioni
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    while (!uscita) {
        // Menù iniziale
        printf("\nMENU:\n");
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Modulo (%%)\n");
        printf("6. Potenza (^)\n");
        printf("7. Test di tutte le funzioni\n");
        printf("8. Esci\n");
        printf("Scegli un'operazione (1-8): ");
        
        int scelta;
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:  // Addizione
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2:  // Sottrazione
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
                break;
            case 3:  // Moltiplicazione
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
                break;
            case 4:  // Divisione
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                if (num2 != 0) {
                    printf("%d / %d = %.2f\n", num1, num2, divi(num1, num2));
                } else {
                    printf("Errore: divisione per zero!\n");
                }
                break;
            case 5:  // Modulo
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                printf("%d %% %d = %d\n", num1, num2, mod(num1, num2));
                break;
            case 6:  // Potenza
                printf("Inserisci la base: ");
                scanf("%d", &num1);
                printf("Inserisci l'esponente: ");
                scanf("%d", &num2);
                printf("%d ^ %d = %d\n", num1, num2, power(num1, num2));
                break;
            case 7:  // Test di tutte le funzioni
                test_all_operations(numbers, size);
                break;
            case 8:  // Uscita
                uscita = 1;
                printf("Arrivederci!\n");
                break;
            default:
                printf("Scelta non valida, per favore inserisci un numero da 1 a 8.\n");
        }
    }

    return 0;
}
