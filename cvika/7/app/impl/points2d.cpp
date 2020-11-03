//
// Created by jan on 22.10.20.
//
#include "stdio.h"
#include "math.h"
#include "float.h"

int getNearestPointIndex(int size, int (*points)[2], int referenceX, int referenceY) {
    double nearest_distance = DBL_MAX;
    int nearest_index;


    for (int i = 0; i < size; i++) {
        double distance = sqrt(pow(referenceX - points[i][0], 2) + pow(referenceY - points[i][1], 2));
        if (distance < nearest_distance) {
            nearest_distance = distance;
            nearest_index = i;
        }
    }

    return nearest_index;
}

int getFurthestPointIndex(int size, int (*points)[2], int referenceX, int referenceY) {
    double furthest_distance = DBL_MIN;
    int index;


    for (int i = 0; i < size; i++) {
        double distance = sqrt(pow(referenceX - points[i][0], 2) + pow(referenceY - points[i][1], 2));
        if (distance > furthest_distance) {
            furthest_distance = distance;
            index = i;
        }
    }

    return index;
}

double median(int size, int (*points)[2], int referenceX, int referenceY) {
    double distances[size];

    for (int i = 0; i < size; i++) {
        double distance = sqrt(pow(referenceX - points[i][0], 2) + pow(referenceY - points[i][1], 2));
        distances[i] = distance;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i + 1; j++) {
            if (distances[i] > distances[i + 1]) {
                double pom = distances[i];
                distances[i] = distances[i + 1];
                distances[i + 1] = pom;
            }
        }
    }

    return (distances[4] + distances[5]) / 2;
}


double avgDistance(int size, int (*points)[2], int referenceX, int referenceY) {
    double distance_count = 0;
    for (int i = 0; i < size; i++) {
        double distance = sqrt(pow(referenceX - points[i][0], 2) + pow(referenceY - points[i][1], 2));
        distance_count += distance;
    }

    return distance_count / size;
}