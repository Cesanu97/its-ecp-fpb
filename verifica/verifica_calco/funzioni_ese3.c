#include <stdio.h>
#include <math.h>
#include "funzioni_ese3.h"

// Funzione per la somma
int add(int a, int b) {
    return a + b;
}

// Funzione per la sottrazione
int sub(int a, int b) {
    return a - b;
}

// Funzione per la moltiplicazione
int mul(int a, int b) {
    return a * b;
}

// Funzione per la divisione
float divi(int a, int b) {
    if (b == 0) {
        printf("Errore: Divisione per zero!\n");
        return 0; // Gestione della divisione per zero
    }
    return (float)a / b;
}

// Funzione per il modulo
int mod(int a, int b) {
    if (b == 0) {
        printf("Errore: Modulo per zero!\n");
        return 0; // Gestione del modulo per zero
    }
    return a % b;
}

// Funzione per il calcolo della potenza
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a; // Elevamento a potenza con moltiplicazione
    }
    return result;
}

// Funzione per testare tutte le operazioni su un array di numeri
void test_all_operations(int arr[], int size) {
    printf("Test delle operazioni sui numeri {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("}:\n");

    for (int i = 0; i < size - 1; i++) {
        int a = arr[i];
        int b = arr[i + 1];
        
        printf("%d + %d = %d\n", a, b, add(a, b));
        printf("%d - %d = %d\n", a, b, sub(a, b));
        printf("%d * %d = %d\n", a, b, mul(a, b));
        printf("%d / %d = %.2f\n", a, b, divi(a, b));
        printf("%d %% %d = %d\n", a, b, mod(a, b));
        printf("%d ^ %d = %d\n", a, b, power(a, b));
        printf("\n");
    }
}
