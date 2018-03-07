#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

class Triangle {
private:
    point a, b, c;
    float distance(point a, point b);
public:
    Triangle(point a, point b, point c);
   float perimeter ();
   float area ();
  };

#endif // TRIANGLE_H
