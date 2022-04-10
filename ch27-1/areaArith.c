#include "basicArith.h"

double TriangleArea(double b, double h){
    return Div(Mul(b, h), 2);
}

double CircleArea(double r){
    return Mul(Mul(r, r), PI);
}