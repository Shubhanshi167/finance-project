#include <stdio.h>
#include "finance.h"

int main() {
    double p, r, t;

    printf("Enter principal: ");
    scanf("%lf", &p);

    printf("Enter rate: ");
    scanf("%lf", &r);

    printf("Enter time: ");
    scanf("%lf", &t);

    printf("\nSimple Interest = %.2lf\n", simple_interest(p, r, t));
    printf("Compound Interest = %.2lf\n", compound_interest(p, r, t));

    return 0;
}
