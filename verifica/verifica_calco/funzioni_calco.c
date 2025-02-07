#include <stdio.h>
#include <math.h>
#include "funzioni_calco.h"

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
        return 0; 
    }
    return (float)a / b;
}

// Funzione per il modulo
int mod(int a, int b) {
    if (b == 0) {
        printf("Errore: Modulo per zero!\n");
        return 0; 
    }
    return a % b;
}

// Funzione per il calcolo della potenza
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a; 
    }
    return result;
}


// Funzione per testare tutte le operazioni 
void test_all_operations(int arr[], int size) {
    printf("Test delle operazioni sui numeri {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("}:\n");

    // Eseguo tutte le operazioni
    printf("%d + %d = %d\n", arr[0], arr[1], add(arr[0], arr[1]));
    printf("%d - %d = %d\n", arr[1], arr[2], sub(arr[1], arr[2]));
    printf("%d * %d = %d\n", arr[2], arr[3], mul(arr[2], arr[3]));
    if (arr[4] != 0) {
        printf("%d / %d = %.2f\n", arr[3], arr[4], divi(arr[3], arr[4]));
    } else {
        printf("%d / %d = Divisione per zero!\n", arr[3], arr[4]);
    }
    if (arr[1] != 0) {
        printf("%d %% %d = %d\n", arr[0], arr[1], mod(arr[0], arr[1]));
    } else {
        printf("%d %% %d = Operazione non valida (divisore zero)!\n", arr[0], arr[1]);
    }
    printf("%d ^ %d = %d\n", arr[1], arr[2], power(arr[1], arr[2]));

    printf("\n");
}
