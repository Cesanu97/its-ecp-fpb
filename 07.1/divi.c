#include "operations.h"

float divi(int a, int b) {
    if (b == 0) {
        return 0;  // Gestione errore nel main
    }
    return (float)a / b;
}
