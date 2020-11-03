#include <iostream>
#include "ctype.h"
#include "string.h"

int spaces_array_len; // pls dont kill me cuz I passed variable like that, but C refuse return array len to me.

int calculate_letters(char* text) {
    int result = 0;
    for (int i = 0; text[i] != NULL; i++) {
        if (isalpha(text[i]) != 0) {
            result++;
        }
    }
    return result;
}

// todo: dont pass spaces as argument or hide it behind some service/factory
int calculate_nums(char* text, int* spaces) {
    int result = isdigit(text[0]) ? 1 : 0;

    for (int i = 0; i < spaces_array_len; i++) {
        if (isdigit(text[spaces[i] + 1])) {
            result++;
        }
    }

    return result;
}

int* get_space_indexes(char* text) {
    const int array_size = strlen(text);
    static int* indexes = (int*)malloc(sizeof(int)*array_size); // in case string is full of spaces
    int spaces_index = 0;

    for (int i = 0; i < array_size; i++) {
        if (text[i] == ' ') {
            indexes[spaces_index] = i;
            spaces_index++;
        }
    }

    spaces_array_len = spaces_index;
    return indexes;
}

int calculate_word_count_with_small_first_letter(char* text, int* spaces) {
    int result = isalpha(text[0]) && !isupper(text[0]) ? 1 : 0;

    for (int i = 0; i < spaces_array_len; i++) {
        if (isalpha(text[spaces[i] + 1]) && !isupper(text[spaces[i] + 1])) {
            result++;
        }
    }

    return result;
}

int calculate_word_count(char* text, int* spaces) {
    int result = isalpha(text[0]) ? 1 : 0;

    for (int i = 0; i < spaces_array_len; i++) {
        if (isalpha(text[spaces[i] + 1])) {
            result++;
        }
    }

    return result;
}

int calculate_sentences(char* text, int* spaces) {
    int result = 1;
    for (int i = 0; i < spaces_array_len; i++) {
        if (text[spaces[i] - 1] == '.' && !isdigit(text[spaces[i] - 2])) {
            result++;
        }
    }
    return result;
}

// ix35 počítám ke slovům
// Čísla zapsané číslovkou se nepořítají ke slovům
// 120 se bere jako jedno číslo
int main() {
    char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

    int* space_indexes = get_space_indexes(text);

    int letters = calculate_letters(text);
    int nums = calculate_nums(text, space_indexes);
    int words = calculate_word_count(text, space_indexes);
    int words_with_first_small_letter = calculate_word_count_with_small_first_letter(text, space_indexes);
    int sentences = calculate_sentences(text, space_indexes);

    printf("Cisla: %d\n", nums);
    printf("Pismena: %d\n", letters);
    printf("Slova: %d\n", words);
    printf("Slova s malym prvnim pismenem: %d\n", words_with_first_small_letter);
    printf("Vety: %d", sentences);

    return 0;
}
