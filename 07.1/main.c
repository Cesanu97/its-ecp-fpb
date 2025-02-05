#include <stdio.h>
#include "operations.h"

int main() {
    int num1, num2, choice;
    float result;

    do {
        // Menu
        printf("\nScegli un'operazione:\n");
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Esci\n");
        printf("Scegli un'operazione (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Uscita...\n");
            break;
        }

        // Input numeri
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);

        // Chiamata funzione in base alla scelta
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Risultato: %d + %d = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = sub(num1, num2);
                printf("Risultato: %d - %d = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = mul(num1, num2);
                printf("Risultato: %d * %d = %.2f\n", num1, num2, result);
                break;
            case 4:
                result = divi(num1, num2);
                if (num2 != 0)
                    printf("Risultato: %d / %d = %.2f\n", num1, num2, result);
                else
                    printf("Errore: divisione per zero non permessa!\n");
                break;
            default:
                printf("Scelta non valida!\n");
                break;
        }
    } while (1);

    return 0;
}
