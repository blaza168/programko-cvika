//
// Created by jan on 08.10.20.
//

#include <cstdlib>
#include <iostream>
#include "ConsoleManager.h"

ComplexNumber* ConsoleManager::getUserInput() {
    auto* result = (ComplexNumber*)malloc(sizeof(ComplexNumber) * 2);

    for (int i = 0; i < 2; i++) {
        float real;
        float imaginar;
        std::cout << std::printf("Komplexni cislo %d \n", i + 1);
        std::cout << "Zadejte prosim realnou slozku: " << std::endl;
        std::scanf("%f", &real);
        std::cout << "Zadejte prosim imaginarni slozku: " << std::endl;
        std::scanf("%f", &imaginar);
        result[i] =  ComplexNumber(real, imaginar);
    }

    return result;
}

char ConsoleManager::getOperation() {
    char operation;
    std::cout << "Zadejte operaci: ";
    getchar();
    operation = getchar();

    return operation;
}

void ConsoleManager::printResult(ComplexNumber number) {
    std::cout << "Vysledek je: " << number.getRacional() << " + " << number.getImaginary() << "j" << std::endl;
}
