#include <iostream>
#include "app/points2d.h"
#define points_len 10

int main() {
    int points[points_len][2] = {
            {5,   10},
            {-14, 2},
            {45,  4},
            {-9, 8},
            {58, -3},
            {47, 5},
            {-18, -86},
            {75, 7},
            {-25, 51},
            {17, 98},
    };
    int referenceX;
    int referenceY;

    printf("Enter reference X: ");
    scanf("%d", &referenceX);

    printf("Enter reference Y: ");
    scanf("%d", &referenceY);

    int nearest_index = getNearestPointIndex(points_len, points, referenceX, referenceY);
    int furthest_index = getFurthestPointIndex(points_len, points, referenceX, referenceY);

    printf("Nearest: [%d; %d]\n", points[nearest_index][0], points[nearest_index][1]);
    printf("Median: %lf \n", median(points_len, points, referenceX, referenceY));
    printf("Furthest: [%d, %d]\n", points[furthest_index][0], points[furthest_index][1]);
    printf("Avg distance: %.4lf", avgDistance(points_len, points, referenceX, referenceY));

    return 0;
}
