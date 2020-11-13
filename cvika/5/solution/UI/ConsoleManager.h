//
// Created by jan on 08.10.20.
//

#ifndef SOLUTION_CONSOLEMANAGER_H
#define SOLUTION_CONSOLEMANAGER_H


#include "../Entity/ComplexNumber.h"
#include "../Converter/ComplexToGeometricConverter.h"

class ConsoleManager {
public:
ComplexNumber* getUserInput();
ConsoleManager();
char getOperation();

void printResult(ComplexNumber number);

private:
    ComplexToGeometricConverter* converter;
};


#endif //SOLUTION_CONSOLEMANAGER_H
