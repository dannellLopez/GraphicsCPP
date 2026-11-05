#include <math.h>
#include "vector.hpp"

//TODO handle div by 0 cases for normalize, and div


Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

[[nodiscard]] Vector2D Vector2D::operator+(const Vector2D& other) const{
    return Vector2D(x + other.x, y + other.y);
}

[[nodiscard]] Vector2D Vector2D::operator-(const Vector2D& other) const{
    return Vector2D(x - other.x, y - other.y);
}

[[nodiscard]] Vector2D Vector2D::operator/(const Vector2D& other) const{
    return Vector2D(other.x / x, other.y / y);
}

[[nodiscard]] Vector2D Vector2D::operator*(const Vector2D& other) const{
    return Vector2D(other.x * x, other.y * y);
}

Vector2D Vector2D::normalize() const{
    double dist = pow(pow(x, 2) + pow(y, 2), 0.5);
    return Vector2D(x/dist, y/dist);
}

double Vector2D::getX() const{
    return x;
}

double Vector2D::getY() const{
    return y;
}
