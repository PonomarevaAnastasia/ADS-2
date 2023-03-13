// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
 double result = value;
    for (uint16_t j = 1; j < n; j++) {
        result *= value;
    }
    return result;
}

uint64_t fact(uint16_t n) {

 uint64_t result = 1;
    for (uint16_t j = 2; j <= n; j++) {
        result *= i;
    }
    return result;
}

double calcItem(double x, uint16_t n) {
 double result;
    result = pown(x, n) / fact(n);
    return result;
}

double expn(double x, uint16_t count) {
    double result = 1;
    for (uint16_t j = 1; j <= count; j++) {
        result += calcItem(x, j);
    }
    return result;
}

double sinn(double x, uint16_t count) {
  double result = x;
    for (uint16_t j = 2; j <= count; j++) {
    result += pown(-1, j - 1) * pown(x, 2 * j - 1) / fact(2 * j - 1);
    }
    return result;
}

double cosn(double x, uint16_t count) {
  double result = 1;
    for (uint16_t j = 2; j <= count; j++) {
        result += pown(-1, j - 1) * pown(x, 2 * j - 2) / fact(2 * j - 2);
    }
    return result;
}
