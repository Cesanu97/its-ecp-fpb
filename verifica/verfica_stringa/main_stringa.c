#include <stdio.h>
#include "funzioni_stringa.h"

int main() {
    char words[][20] = {"elephant", "42trees", "Anna", "oasis", "civic", "mango", "Galaxy"};
    int size = 7; // Numero di stringhe

    // 1. Quante stringhe iniziano con una vocale
    printf("Numero di stringhe che iniziano con una vocale: %d\n", conta_vocali_iniziali(words, size));

    // 2. Quante stringhe contengono almeno un numero
    printf("Numero di stringhe con almeno un numero: %d\n", conta_stringhe_con_numero(words, size));

    // 3. Stringa più lunga
    printf("Stringa più lunga: \"%s\"\n", stringa_piu_lunga(words, size));

    // 4. Stringa più corta
    printf("Stringa più corta: \"%s\"\n", stringa_piu_corta(words, size));

    // 5. Numero di stringhe palindrome
    printf("Numero di stringhe palindrome: %d\n", conta_palindrome(words, size));

    // 6. Numero totale di caratteri
    printf("Numero totale di caratteri: %d\n", conta_caratteri_totali(words, size));

    // 7. Elenco delle stringhe in ordine corretto
    printf("Elenco delle stringhe in ordine corretto: ");
    stampa_ordinale(words, size);

    // 8. Elenco delle stringhe in ordine inverso
    printf("Elenco delle stringhe in ordine inverso: ");
    stampa_inverso(words, size);

    // 9. Elenco delle stringhe in ordine inverso con caratteri invertiti
    printf("Elenco delle stringhe in ordine inverso con caratteri invertiti: ");
    stampa_inverso_con_caratteri_invertiti(words, size);

    return 0;
}
