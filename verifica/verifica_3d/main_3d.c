#include <stdio.h>
#include "funzioni_3d.h"

int main() {
    // Matrice 3D 
    int matrix[2][3][3] = {
        {
            {1, 4, 7},
            {2, 5, 8},
            {3, 6, 9}
        },
        {
            {1, 4, 7},
            {2, 5, 8},
            {3, 5, 9}
        }
    };

    // Stampa la matrice originale
    printf("Matrice originale:\n");
    stampa_matrice(matrix);

    // Modifica la matrice sostituendo i numeri pari e dispari
    modifica_matrice(matrix);

    // Stampa la matrice dopo la modifica
    printf("Dopo sostituzione pari/dispari:\n");
    stampa_matrice(matrix);

    // Verifica se matrice è un Sudoku perfetto
    for (int i = 0; i < 2; i++) {
        if (is_sudoku_perfetto(matrix[i])) {
            printf("La %d matrice 3x3 è un Sudoku perfetto.\n", i + 1);
        } else {
            printf("La %d matrice 3x3 non è un Sudoku perfetto.\n", i + 1);
        }
    }

    return 0;
}
