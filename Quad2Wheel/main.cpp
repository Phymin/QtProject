#include <iostream>
#include <cmath>
#include <stdio.h>

#include "vector2.h"

using namespace std;

bool GetIntersectPoint(const Vector2& point1, const Vector2& d1, const Vector2& point2, const Vector2& d2, Vector2& interPt)
{
    double a1 = d1.x;
    double b1 = d1.y;
    double a2 = d2.x;
    double b2 = d2.y;
    double c1 = b1 * point1.x - a1 * point1.y;
    double c2 = b2 * point2.x - a2 * point2.y;

    double det = a1*b2 - a2*b1;
    if(fabs(det) <= 1e-6)
        return false;

    double x = (a1*c2 -a2*c1) / det;
    double y = (c2*b1 - c1*b2) / det;

    interPt = Vector2(x, y);

    return true;
}


int main(int argc, char *argv[])
{
   // cout << "Hello World!" << endl;

    Vector2 v1(546.8, 0);
    Vector2 v2(-541.1, 0);
    Vector2 p1(546.8, 200);
    Vector2 p2(-541.1, -200);

    double th1 = -30 * M_PI / 180.0;
    double th2 = 25 * M_PI / 180.0;

    v1.Rotate(th1);
    v2.Rotate(th2);

    v1 = v1.NormalVector();
    v2 = v2.NormalVector();

    Vector2 interPoint(0, 0);
    double Rf, Rb, R;
    if(GetIntersectPoint(p1, v1, p2, v2, interPoint))
    {
        printf("Intersect point: (%.2f, %.2f)\n", interPoint.x, interPoint.y);
        Rf = interPoint.DistanceTo(p1);
        Rb = interPoint.DistanceTo(p2);
        R = interPoint.DistanceTo(Vector2(0, 0));

        printf("Rf = %.2f, Rb = %.2f, R = %.2f\n", Rf, Rb, R);
    }
    else
    {
        printf("There is no intersect point\n");
    }


    return 0;
}
