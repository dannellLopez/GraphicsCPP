#include "vector.hpp"
#include <cassert>
#include <cmath>
#include <iostream>


/*
Testing framework for Vector2D class

Operations:

Addition (+), Subtraction (-), Multiplication (*) Vec to Vec
adding a positive and neg
adding 2 pos
adding 2 neg
result 0, neg, pos

Division (/)

Multiplication (*) Scalar
scalar neg/neg
result pos/neg

Normalize
unit normal

For all operations, may need floating point correctness
*/

int main(){

    Vector2D PosVec = Vector2D(2.0, 2.0);
    Vector2D NegVec = Vector2D(-2.0, -2.0);
    double epsilon = 1e-9;

    Vector2D addition = PosVec + NegVec;
    assert(addition.getX() == 0);
    assert(addition.getY() == 0);

    Vector2D subtraction = NegVec - PosVec;
    assert(std::abs(subtraction.getX() - -4.0) < epsilon);
    assert(std::abs(subtraction.getY() - -4.0) < epsilon);

    Vector2D v1 = Vector2D(-3.5, 2.0);
    Vector2D v2 = Vector2D(12.1, -2.4);

    Vector2D normalV2 = v2.normalize();
    assert(std::abs(normalV2.getX() - 0.980891226427) < epsilon);
    assert(std::abs(normalV2.getY() - (-0.194556937473)) < epsilon);

    return 0;
}

