#ifndef VECTOR2_H
#define VECTOR2_H


class Vector2
{
public:
    Vector2(void);
    Vector2(double x, double y);
    Vector2(double angle);
    Vector2(const Vector2& vec);
    ~Vector2(void);

    Vector2& operator =(const Vector2& vec);

    Vector2 operator +(const Vector2& vec) const;
    Vector2 operator -(const Vector2& vec) const;
    Vector2& operator +=(const Vector2& vec);
    Vector2& operator -=(const Vector2& vec);
    Vector2& operator*=(double ratio);
    bool operator == (const Vector2& v) const;
    bool operator != (const Vector2& v) const;

    double operator *(const Vector2& vec) const;

    bool IsValid() const {return _isValid;}

    Vector2 Move(const Vector2& offset);
    Vector2 MoveTo(const Vector2& destPoint);
    Vector2 Rotate(double theta);
    Vector2 Rotate(const Vector2& center, double theta);
    Vector2 RotateAndMove(double theta, const Vector2& offset);

    double DistanceTo(const Vector2& v) const;
    double Angle() const;
    double AngleTo(const Vector2& v) const;

    double Magnitude() const;
    void Normalize();

    Vector2 NormalVector() const;

    Vector2 ToInteger();
    Vector2 ToLong();

    int IntX() const;
    int IntY() const;

    static double AngleBetween(const Vector2& v1, const Vector2& v2);
    static double Cross(const Vector2& v1, const Vector2& v2);
    static double Dot(const Vector2& v1, const Vector2& v2);

public:
    double x;
    double y;

private:
    bool _isValid;
};

#endif // VECTOR2_H
