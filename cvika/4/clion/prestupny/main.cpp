#include <iostream>
#include "calendar.h"

int main() {
    int roky[5] = {1000, 2000, 2002, 2004, 2014};
    for (int i = 0; i < 5; i++) {
        printf("Rok %d %s prestupny \n", roky[i], jePrestupny(roky[i]) == 1 ? "je" : "neni");
    }
    for (int i = 1; i <= 12; i++) {
        printf("Mesic %d je %s sudy\n", i, jeSudyMesic(i) ? "je" : "neni");
    }
}
