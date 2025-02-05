#ifndef STRING_ANALYSIS_H
#define STRING_ANALYSIS_H

int count_strings_starting_with_a(char strings[][50], int size);
int count_strings_with_numbers(char strings[][50], int size);
void find_longest_and_shortest_string(char strings[][50], int size, char *longest, char *shortest);
int count_palindrome_strings(char strings[][50], int size);
int is_palindrome(char str[]);
void get_palindrome_strings(char strings[][50], int size, char palindrome_strings[][50]);
void sort_strings_by_length(char strings[][50], int size, char sorted_strings[][50]);
int all_strings_longer_than_5(char strings[][50], int size);
int all_strings_contain_vowels(char strings[][50], int size);
int contains_vowel(char str[]);

#endif