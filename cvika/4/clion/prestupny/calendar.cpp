//
// Created by jan on 13.10.20.
//
#include "iostream"

int jePrestupny(int rok) {
    if (rok % 400 == 0) {
        return 1;
    }
    if (rok % 4 == 0 && rok % 100 != 0) {
        return 1;
    }

    return 0;
}

bool jeSudyMesic(int mesic) {
    if (mesic % 2 == 1) {
        return false;
    }

    return true;
}

//int main() {
//    int rok;
//    int mesic;
//    printf("Zadej rok: ");
//    scanf("%d", &rok);
//
//    printf("Zadej mesic: ");
//    scanf("%d", &mesic);
//
//    printf("Tento rok %s prestupny\n", jePrestupny(rok) == 1 ? "je" : "neni");
//    printf("Mesic %s sudy", jeSudyMesic(mesic) ? "je" : "neni");
//
//}
