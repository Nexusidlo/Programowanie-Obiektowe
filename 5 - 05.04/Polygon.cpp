#include "Polygon.h"


Polygon::Polygon()
{
    size = 4;
    currentSize = 0;
    point = new Point*[size];  // *[4]()

}

Polygon::~Polygon()
{
    for (int i = 0; i < currentSize; i++)
        delete point[i];
     delete point;
    //free(punkty);
}

Polygon::Polygon(int n){
    while (true) {
        if (n%4 == 0) {
            size = n;
            break; }
        else n++;
    }
    currentSize = 0;
    point = new Point*[size];
}

void Polygon::printData(){
 std::cout << currentSize << " elementow z " << size << " mozliwych." << std::endl;
    for (int i = 0; i < currentSize; i++)
    std::cout << "x: " << point[i]->x << "   y: " << point[i]->y << std::endl;
}

void Polygon::add(Point& p) {
 if (currentSize == size) {
        size+=4;
        Point **pointsCpy = point;
        point = new Point*[size];
        for (int i = 0; i < currentSize; i++) {
            point[i] = pointsCpy[i];
        }
   delete pointsCpy;
   }
   point[currentSize] = &p;
    currentSize++;
    }

Polygon::Point *Polygon::ref(int n){
    return point[n];
    }
