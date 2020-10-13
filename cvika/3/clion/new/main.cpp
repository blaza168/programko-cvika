#include <iostream>

int main() {
    double time;
    printf("Zadejte čas, za který se ozve hrom po blesku: ");
    scanf("%lf", &time);

    printf("Vzdálenost od místa: %.3lf m", time * 330);
    return 0;
}
