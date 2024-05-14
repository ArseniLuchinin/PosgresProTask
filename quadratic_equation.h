#ifndef QUADRATIC_EQUATION_H_INCLUDED
#define QUADRATIC_EQUATION_H_INCLUDED
#include <complex.h>
#include <math.h>

typedef struct{
    float complex X1;
    float complex X2;
} quadratic_equation_solves;

float get_discriminant(const float a, const float b, const float c);

quadratic_equation_solves quadratic_equation(const float a, const float b, float c);

#endif // QUADRATIC_EQUATION_H_INCLUDED
