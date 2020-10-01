#include <iostream>

int main() {
    double time;
    printf("Zadejte čas, za který se ozve hrom po blesku: ");
    if (scanf("%lf", &time) == 0) {
        printf("Nesprávný formát");
        return 0;
    }

    printf("Vzdálenost od místa: %.3lf m", time * 330);
    return 0;
}
