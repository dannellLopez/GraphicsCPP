
#pragma once
#include <math.h>

class Vector2D{
    private:
        double x;
        double y;

    public:

    Vector2D(double x, double y) : x(x), y(y) {}

    [[no_discard]] Vector2D operator+(const Vector2D& other) const{
        return Vector2D(x + other.x, y + other.y);
    }

    [[no_discard]] Vector2D operator-(const Vector2D& other) const{
        return Vector2D(other.x - x, other.y - y);
    }

    [[no_discard]] Vector2D operator/(const Vector2D& other) const{
        return Vector2D(other.x / x, other.y / y);
    }

    [[no_discard]] Vector2D operator*(const Vector2D& other) const{
        return Vector2D(other.x * x, other.y * y);
    }

    Vector2D normalize(const Vector2D& obj){
        double dist = pow(pow(obj.x, 2) + pow(obj.y, 2), 1/2);
        return Vector2D(obj.x/dist, obj.y/dist);
    }
    
};