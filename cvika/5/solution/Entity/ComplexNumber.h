//
// Created by jan on 08.10.20.
//

#ifndef SOLUTION_COMPLEXNUMBER_H
#define SOLUTION_COMPLEXNUMBER_H


class ComplexNumber {
private:
    float racional;
    float imaginary;
public:
    ComplexNumber(float racional, float imaginary) {
        this->racional = racional;
        this->imaginary = imaginary;
    }

    float getRacional();
    float getImaginary();
};



#endif //SOLUTION_COMPLEXNUMBER_H
