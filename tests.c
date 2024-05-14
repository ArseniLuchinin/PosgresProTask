#include <stdio.h>
#include <stdlib.h>
#include "../quadratic_equation.h"
#include <math.h>
#include <complex.h>
int float_equival(float a, float b){
    if(fabs(a-b) < 0.0001)
        return 1;
    else
        return -1;
}

void test_not_complex(){
    quadratic_equation_solves solve = quadratic_equation(10.f, 12.f, 3.f);
    if(float_equival(creal(solve.X1), -0.8449)
    && float_equival(cimag(solve.X1), 0.f)
    && float_equival(creal(solve.X2), 0.f)
    && float_equival(cimag(solve.X2), -0.3550))
        printf("TEST COMPLETE");
    else
        printf("TEST FAILED");
    printf(": test not complex solve");
}

void test_null(){
    quadratic_equation_solves solve = quadratic_equation(0.f, 0.f, 0.f);
    if(float_equival(creal(solve.X1), 0.f)
    && float_equival(cimag(solve.X1), 0.f)
    && float_equival(creal(solve.X2), 0.f)
    && float_equival(cimag(solve.X2), 0.f))
        printf("TEST COMPLETE");
    else
        printf("TEST FAILED");
    printf(": test null solve");
}
void test_complex(){
    quadratic_equation_solves solve = quadratic_equation(112.f, 12.f, 1.f);
    if(float_equival(creal(solve.X1), -0.0536)
    && float_equival(cimag(solve.X1), 0.0778)
    && float_equival(creal(solve.X2), -0.0536)
    && float_equival(cimag(solve.X2), -0.0778))
        printf("TEST COMPLETE");
    else
        printf("TEST FAILED");
    printf(": test complex solve");
}

int main()
{
    test_null();
    printf("\n");
    test_complex();
    printf("\n");
    test_not_complex();
}
