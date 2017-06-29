#include "vector2.h"

#include <cmath>

namespace
{

const double EPSILONG = 1e-6;
//const double M_PI = 3.14159265358979323846;

}

Vector2::Vector2(void)
{
    x = 0;
    y = 0;
    _isValid = false;
}

Vector2::Vector2(double x, double y)
{
    this->x = x;
    this->y = y;
    _isValid = true;
}

Vector2::Vector2(double theta)
{
    x = cos(theta);
    y = sin(theta);
    _isValid = true;
}

Vector2::Vector2(const Vector2& vec)
{
    x = vec.x;
    y = vec.y;
    _isValid = vec._isValid;
}


Vector2::~Vector2(void)
{
}


Vector2& Vector2::operator =(const Vector2& vec)
{
    this->x = vec.x;
    this->y = vec.y;
    this->_isValid = vec._isValid;

    return *this;
}

Vector2 Vector2::operator +(const Vector2& vec) const
{
    return Vector2(x + vec.x, y + vec.y);
}

Vector2 Vector2::operator -(const Vector2& vec) const
{
    return Vector2(x - vec.x, y - vec.y);
}

Vector2& Vector2::operator +=(const Vector2& vec)
{
    this->x += vec.x;
    this->y += vec.y;

    return *this;
}

Vector2& Vector2::operator -=(const Vector2& vec)
{
    this->x -= vec.x;
    this->y -= vec.y;

    return *this;
}

double Vector2::operator * (const Vector2& vec) const
{
    return this->x * vec.x + this->y * vec.y;
}

Vector2& Vector2::operator *= (double ratio)
{
    x *= ratio;
    y *= ratio;

    return *this;
}

bool Vector2::operator == (const Vector2& v) const
{
    return (x == v.x && y == v.y);
}

bool Vector2::operator != (const Vector2& v) const
{
    return !(*this == v);
}

Vector2 Vector2::Move(const Vector2& offset)
{
    *this += offset;
    return *this;
}

Vector2 Vector2::MoveTo(const Vector2& destPoint)
{
    Vector2 offset = destPoint - *this;
    return Move(offset);
}

Vector2 Vector2::Rotate(double theta)
{
    double ox = x;
    double oy = y;

    x = ox * cos(theta) - oy *sin(theta);
    y = ox * sin(theta) + oy * cos(theta);

    return *this;
}

Vector2 Vector2::Rotate(const Vector2& center, double theta)
{
    *this = center + (*this-center).Rotate(theta);
    return *this;
}

Vector2 Vector2::RotateAndMove(double theta, const Vector2& offset)
{
    Rotate(theta);
    Move(offset);

    return *this;
}


double Vector2::Magnitude() const
{
    return sqrt(x * x + y * y);
}

void Vector2::Normalize()
{
    double magSq = x*x + y*y;
    if(magSq > 0.0)
    {
        double oneOverMag = 1.0 / sqrt(magSq);
        x *= oneOverMag;
        y *= oneOverMag;
    }
}

Vector2 Vector2::NormalVector() const
{
    return Vector2(y, -x);
}

double Vector2::DistanceTo(const Vector2& v) const
{
    return (*this - v).Magnitude();
}

double Vector2::Angle() const
{
    return atan2(y, x);
}

double Vector2::AngleTo(const Vector2& v) const
{
    return (v - (*this)).Angle();
}

Vector2 Vector2::ToInteger()
{
    if(x > 0)
        x = int(x + 0.5);
    else
        x = int(x - 0.5);

    if(y > 0)
        y = int(y + 0.5);
    else
        y = int(y - 0.5);

    return *this;
}

Vector2 Vector2::ToLong()
{
    if(x > 0)
        x = long(x + 0.5);
    else
        x = long(x - 0.5);

    if(y > 0)
        y = long(y + 0.5);
    else
        y = long(y - 0.5);

    return *this;
}

int Vector2::IntX() const
{
    int r;
    if(x > 0)
        r = long(x + 0.5);
    else
        r = long(x - 0.5);

    return r;

}

int Vector2::IntY() const
{
    int r = 0;
    if(y > 0)
        r = long(y + 0.5);
    else
        r = long(y - 0.5);

    return r;
}


double Vector2::AngleBetween(const Vector2& v1, const Vector2& v2)
{
    double ab = v1 * v2;
    double normA = v1.Magnitude();
    double normB = v2.Magnitude();

    if(normA <= EPSILONG && normB <= EPSILONG)
        return 0;

    double costh = ab / (normA * normB);
    double theta = acos(costh);

    //theta *= 180/M_PI;
    ////TODO:use radian angle;

    return theta;
}


double Vector2::Cross(const Vector2& v1, const Vector2& v2)
{
    return (v1.x*v2.y) - (v2.x * v1.y);
}

 double Vector2::Dot(const Vector2& v1, const Vector2& v2)
 {
     return v1.x * v2.x + v1.y * v2.y;
 }
