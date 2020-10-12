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
    int roky[5] = {1000, 2000, 2002, 2004, 2014};
    for (int i = 0; i < 5; i++) {
        printf("Rok %d %s prestupny \n", roky[i], jePrestupny(roky[i]) == 1 ? "je" : "neni");
    }

    getchar();
    getchar();
}
