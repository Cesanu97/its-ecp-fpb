#include <stdio.h>

int main() {
    int num, sum = 0, max = 0, count = 0;

    printf("Inserisci una sequenza di numeri interi positivi (0 per terminare):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            sum += num;
            if (num > max) {
                max = num;
            }
            count++;
        } else {
            printf("Numero negativo ignorato, inserisci un altro numero:\n");
        }
    }

    if (count == 0) {
        printf("Nessun numero valido inserito\n");
    } else {
        printf("Somma totale: %d\n", sum);
        printf("Numero massimo: %d\n", max);
        printf("Lunghezza della sequenza: %d\n", count);
    }

    return 0;
}