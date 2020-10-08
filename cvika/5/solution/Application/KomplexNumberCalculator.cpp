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
