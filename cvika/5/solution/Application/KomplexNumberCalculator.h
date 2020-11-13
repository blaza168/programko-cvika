//
// Created by jan on 08.10.20.
//

#ifndef SOLUTION_KOMPLEXNUMBERCALCULATOR_H
#define SOLUTION_KOMPLEXNUMBERCALCULATOR_H


#include "../Entity/ComplexNumber.h"

class KomplexNumberCalculator {
public:
    ComplexNumber plus(ComplexNumber a, ComplexNumber b);
    ComplexNumber minus(ComplexNumber a, ComplexNumber b);
    ComplexNumber multiply(ComplexNumber a, ComplexNumber b);
};


#endif //SOLUTION_KOMPLEXNUMBERCALCULATOR_H
