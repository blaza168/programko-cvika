#include <iostream>
#include "UI/ConsoleManager.h"
#include "Entity/ComplexNumber.h"
#include "Application/KomplexNumberCalculator.h"

int main() {
    ConsoleManager consoleManager;
    KomplexNumberCalculator calculator;

    ComplexNumber* userInput = consoleManager.getUserInput();
    char operation = consoleManager.getOperation();

    if (operation == '+') {
        ComplexNumber result = calculator.plus(userInput[0], userInput[1]);
        consoleManager.printResult(result);
    } else if (operation == '-') {
        ComplexNumber result = calculator.minus(userInput[0], userInput[1]);
        consoleManager.printResult(result);
    } else if (operation == '*') {
        ComplexNumber result = calculator.multiply(userInput[0], userInput[1]);
        consoleManager.printResult(result);
    } else {
        std::cout << "Wrong operation";
        return 0;
    }

    return 0;
}
