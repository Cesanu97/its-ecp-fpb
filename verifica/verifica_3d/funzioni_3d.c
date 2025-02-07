#include <stdio.h>
#include "funzioni_3d.h"

// Funzione per sostituire i numeri pari con -1 e i numeri dispari con 1
void modifica_matrice(int matrix[2][3][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (matrix[i][j][k] % 2 == 0) {
                    matrix[i][j][k] = -1;  // Elemento pari
                } else {
                    matrix[i][j][k] = 1;   // Elemento dispari
                }
            }
        }
    }
}

// Funzione per stampare la matrice 3D
void stampa_matrice(int matrix[2][3][3]) {
    for (int i = 0; i < 2; i++) {
        printf("Matrice %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// Funzione per verificare se una matrice 3x3 è un Sudoku perfetto
int is_sudoku_perfetto(int submatrix[3][3]) {
    int seen[9] = {0};  // Array per tracciare i numeri visti

    // Controlla ogni elemento della submatrice
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = submatrix[i][j];
            if (num < 1 || num > 9 || seen[num - 1]) {
                return 0;  // Sudoku non perfetto se il numero è fuori dal range o ripetuto
            }
            seen[num - 1] = 1;  // Segna il numero come visto
        }
    }
    return 1;  // Sudoku perfetto
}
