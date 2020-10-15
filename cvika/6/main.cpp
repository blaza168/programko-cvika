#include <iostream>
#include "ctype.h"

int calculate_letters(char* text) {
    int result = 0;
    for (int i = 0; text[i] != NULL; i++){
        if (isalpha(text[i]) != 0) {
            result++;
        }
    }
    return result;
}

int calculate_nums(char* text) {
    int result = 0;
    for (int i = 0; text[i] != NULL; i++){
        if (isdigit(text[i]) != 0) {
            result++;
        }
    }
    return result;
}

int main() {
    char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

    int letters = calculate_letters(text);
    int nums = calculate_nums(text);

    printf("Cisla: %d\n", nums);
    printf("Pismena: %d", letters);

    return 0;
}
