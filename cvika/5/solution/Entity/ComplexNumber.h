//
// Created by jan on 08.10.20.
//

#ifndef SOLUTION_COMPLEXNUMBER_H
#define SOLUTION_COMPLEXNUMBER_H


class ComplexNumber {
private:
    double racional;
    double imaginary;
public:
    ComplexNumber(double racional, double imaginary) {
        this->racional = racional;
        this->imaginary = imaginary;
    }

    float getRacional();
    float getImaginary();
};



#endif //SOLUTION_COMPLEXNUMBER_H
