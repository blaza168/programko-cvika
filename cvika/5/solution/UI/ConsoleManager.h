//
// Created by jan on 08.10.20.
//

#ifndef SOLUTION_CONSOLEMANAGER_H
#define SOLUTION_CONSOLEMANAGER_H


#include "../Entity/ComplexNumber.h"

class ConsoleManager {
public:
ComplexNumber* getUserInput();
char getOperation();

void printResult(ComplexNumber number);
};


#endif //SOLUTION_CONSOLEMANAGER_H
