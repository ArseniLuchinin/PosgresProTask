#include "quadratic_equation.h"

float get_discriminant(const float a, const float b, const float c){
     return b*b - (4.f*c*a);
}

quadratic_equation_solves quadratic_equation(const float a, const float b, const float c){
    float D = get_discriminant(a, b, c);
    quadratic_equation_solves solve;
    solve.X2 = solve.X1 = 0.f + 0.f * I;

    if(D > 0){
        solve.X1 = (-b + sqrtf(D)) / (2.f*a) + 0.f*I;
        solve.X2 = (-b - sqrtf(D)) / (2.f*a) + 0.f*I;
    }
    else{
        solve.X1 = (-b / (2.f*a)) + (sqrtf(-D) / (2.f*a))*I;
        solve.X2 = (-b / (2.f*a)) - (sqrtf(-D) / (2.f*a))*I;
    }

    return solve;
}
