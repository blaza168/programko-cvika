//
// Created by jan on 08.10.20.
//

#include "KomplexNumberCalculator.h"

ComplexNumber KomplexNumberCalculator::minus(ComplexNumber a, ComplexNumber b) {
    return ComplexNumber(a.getRacional() - b.getRacional(), a.getImaginary() - b.getImaginary());
}

ComplexNumber KomplexNumberCalculator::plus(ComplexNumber a, ComplexNumber b) {
    return ComplexNumber(a.getRacional() + b.getRacional(), a.getImaginary() + b.getImaginary());
}

ComplexNumber KomplexNumberCalculator::multiply(ComplexNumber a, ComplexNumber b) {
//    return ComplexNumber(0, 0);
    float imaginary = 0;
    float racional = 0;

    racional += a.getRacional() * b.getRacional();
    imaginary += a.getRacional() * b.getImaginary();
    imaginary += a.getImaginary() * b.getRacional();
    racional += a.getImaginary() * b.getImaginary();

    return ComplexNumber(racional, imaginary);
}
