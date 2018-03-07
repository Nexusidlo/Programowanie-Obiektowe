#include <iostream>
#include "triangle.h"
#include <math.h>

Triangle::Triangle(point a, point b, point c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

   float Triangle::perimeter (){
       return distance(a, b) + distance(b, c) + distance(c, a);
   }

  float Triangle::distance(point P1, point P2){
    return sqrt( pow( (P1.getX() - P2.getX()) , 2) + pow( (P1.getY() - P2.getY() ), 2 ) );
}

   float Triangle::area (){
       float p = distance(a, b) + distance(b, c) + distance(c, a);
       return sqrt( p*(p-distance(a,b))*(p-distance(b, c))*(p-distance(c, a)) );
   }

};
