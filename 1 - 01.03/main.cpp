#include <iostream>
#include "triangle.h"
using namespace std;

int main(){
    point a = point(10, 24.15);
    point b(-14.21, 21.45);
    point c(0.13, 7.48);
    Triangle T(a, b, c);
    cout << "obw: " << t.perimeter() << endl;
    cout << "P: " << t.area() << endl;

  return 0;
 }
