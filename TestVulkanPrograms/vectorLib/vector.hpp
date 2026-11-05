#include <math.h>
class Vector2D{
    private:
        double x;
        double y;

    public:
    
    Vector2D(double x, double y);

    [[no_discard]] Vector2D operator+(const Vector2D& other) const;

    [[no_discard]] Vector2D operator-(const Vector2D& other) const;

    [[no_discard]] Vector2D operator*(const Vector2D& other) const;

    [[no_discard]] Vector2D operator*(double Scalar) const;

    [[no_discard]] Vector2D operator/(const Vector2D& other) const;

    Vector2D normalize(const Vector2D& obj);
}