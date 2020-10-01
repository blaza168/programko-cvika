#include <iostream>

int jePrestupny(int rok) {
    if (rok % 400 == 0) {
        return 1;
    }
    if (rok % 4 == 0 && rok % 100 != 0) {
        return 1;
    }

    return 0;
}

int main() {
    printf("Rok %d %s prestupny \n", 1000, jePrestupny(1000) == 1 ? "je" : "neni");
    printf("Rok %d %s prestupny \n", 2000, jePrestupny(2000) == 1 ? "je" : "neni");
    printf("Rok %d %s prestupny \n", 2002, jePrestupny(2002) == 1 ? "je" : "neni");
    printf("Rok %d %s prestupny \n", 2004, jePrestupny(2004) == 1 ? "je" : "neni");
    printf("Rok %d %s prestupny \n", 2014, jePrestupny(2014) == 1 ? "je" : "neni");

    getchar();
    getchar();
}
