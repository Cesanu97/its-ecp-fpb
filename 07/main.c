#include <stdio.h>
#include <string.h>
#include "string_analysis.h"
// #include "string_analysis.c"

int main() {
    char strings[6][50] = {"Anna", "banana", "apple", "A1pha", "racecar", "123"};
    int num_strings_a = count_strings_starting_with_a(strings, 6);
    int num_strings_with_numbers = count_strings_with_numbers(strings, 6);
    char longest_string[50];
    char shortest_string[50];
    find_longest_and_shortest_string(strings, 6, longest_string, shortest_string);
    int num_palindrome_strings = count_palindrome_strings(strings, 6);
    char palindrome_strings[6][50];
    get_palindrome_strings(strings, 6, palindrome_strings);
    char sorted_strings[6][50];
    sort_strings_by_length(strings, 6, sorted_strings);

    printf("Numero di stringhe che iniziano con 'A' o 'a': %d\n", num_strings_a);
    printf("Numero di stringhe che contengono almeno un numero: %d\n", num_strings_with_numbers);
    printf("Stringa più lunga: %s\n", longest_string);
    printf("Stringa più corta: %s\n", shortest_string);
    printf("Numero di stringhe palindrome: %d\n", num_palindrome_strings);
    printf("Stringhe palindrome:\n");
    for (int i = 0; i < num_palindrome_strings; i++) {
        printf("%s\n", palindrome_strings[i]);
    }
    printf("Stringhe ordinate per lunghezza:\n");
    for (int i = 0; i < 6; i++) {
        printf("%s\n", sorted_strings[i]);
    }

    if (all_strings_longer_than_5(strings, 6)) {
        printf("Tutte le stringhe sono più lunghe di 5 caratteri.\n");
    }

    if (all_strings_contain_vowels(strings, 6)) {
        printf("Tutte le stringhe contengono almeno una vocale.\n");
    }

    return 0;
}