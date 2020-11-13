//
// Created by jan on 13.11.20.
//

#include <cstdlib>
#include <cstdio>
#include <math.h>
#include "ComplexToGeometricConverter.h"

char *ComplexToGeometricConverter::convert(ComplexNumber number) {
    char* result = (char*)malloc(sizeof(char) * 31);
    double multiplier = 180.0 / PI;
    double degres = 0;
    float z = sqrt(pow(number.getImaginary(), 2) + pow(number.getRacional(), 2));

    if (number.getImaginary() == 0 && number.getRacional() < 0) {
        degres += 180;
    } else {
        if (number.getImaginary() < 0 && number.getRacional() > 0) {
            degres += 270;
        } else if (number.getImaginary() < 0 && number.getRacional() < 0) { // 3. kvadrant
            degres += 180;
        } else if (number.getImaginary() > 0 && number.getRacional() < 0) { // 2. kvadrant
            degres += 90;
        }
        degres += atan(abs(number.getRacional() / number.getImaginary())) * multiplier;
    }


    sprintf(result, "%.3f^j%.2f", z, degres);

    return result;
}
