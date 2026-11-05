#pragma once
class Vector2D{
    private:
        double x;
        double y;

    public:
    
    Vector2D(double x, double y);

    [[nodiscard]] Vector2D operator+(const Vector2D& other) const;

    [[nodiscard]] Vector2D operator-(const Vector2D& other) const;

    [[nodiscard]] Vector2D operator*(const Vector2D& other) const;

    [[nodiscard]] Vector2D operator*(double Scalar) const;

    [[nodiscard]] Vector2D operator/(const Vector2D& other) const;

    Vector2D normalize() const;

    double getX() const;

    double getY() const;
};