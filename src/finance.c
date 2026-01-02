#include "finance.h"
#include <math.h>

double simple_interest(double p, double r, double t) {
    return (p * r * t) / 100.0;
}

double compound_interest(double p, double r, double t) {
    return p * pow(1 + r / 100.0, t) - p;
}
