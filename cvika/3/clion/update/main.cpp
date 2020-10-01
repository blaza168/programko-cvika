// FunExt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cfloat>

int main()
{
    double maxY = DBL_MIN;
    int maxX;
    for (int x = 10; x <= 20; x++)
    {
        double y = 5 - 3 * x + 2 * (x - 5) * (x - 5) - (x - 10) * (x - 10) * (x - 10);

        if (y > maxY)
        {
            maxY = y;
            maxX = x;
        }
    }
    printf("Maximum value: %lf at x=%d\n", maxY, maxX);
    return 0;
}

