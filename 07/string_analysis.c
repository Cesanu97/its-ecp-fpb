#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "string_analysis.h"

int count_strings_starting_with_a(char strings[][50], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (strings[i][0] == 'A' || strings[i][0] == 'a') {
            count++;
        }
    }
    return count;
}

int count_strings_with_numbers(char strings[][50], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; strings[i][j] != '\0'; j++) {
            if (isdigit(strings[i][j])) {
                count++;
                break;
            }
        }
    }
    return count;
}

void find_longest_and_shortest_string(char strings[][50], int size, char *longest, char *shortest) {
    strcpy(longest, strings[0]);
    strcpy(shortest, strings[0]);
    for (int i = 1; i < size; i++) {
        if (strlen(strings[i]) > strlen(longest)) {
            strcpy(longest, strings[i]);
        }
        if (strlen(strings[i]) < strlen(shortest)) {
            strcpy(shortest, strings[i]);
        }
    }
}

int count_palindrome_strings(char strings[][50], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (is_palindrome(strings[i])) {
            count++;
        }
    }
    return count;
}

int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void get_palindrome_strings(char strings[][50], int size, char palindrome_strings[][50]) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (is_palindrome(strings[i])) {
            strcpy(palindrome_strings[index], strings[i]);
            index++;
        }
    }
}

void sort_strings_by_length(char strings[][50], int size, char sorted_strings[][50]) {
    for (int i = 0; i < size; i++) {
        strcpy(sorted_strings[i], strings[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strlen(sorted_strings[j]) > strlen(sorted_strings[j + 1])) {
                char temp[50];
                strcpy(temp, sorted_strings[j]);
                strcpy(sorted_strings[j], sorted_strings[j + 1]);
                strcpy(sorted_strings[j + 1], temp);
            }
        }
    }
}

int all_strings_longer_than_5(char strings[][50], int size) {
    for (int i = 0; i < size; i++) {
        if (strlen(strings[i]) <= 5) {
            return 0;
        }
    }
    return 1;
}

int all_strings_contain_vowels(char strings[][50], int size) {
    for (int i = 0; i < size; i++) {
        if (!contains_vowel(strings[i])) {
            return 0;
        }
    }
    return 1;
}

int contains_vowel(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return 1;
        }
    }
    return 0;
}