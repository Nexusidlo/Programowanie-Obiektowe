#include <iostream>

using namespace std;

///////////////////////// 1
namespace pt {
 class Point{
 protected:
     int x, y;
 public:
     int getX(){
         return x; }

     int getY(){
         return y; }

     Point (){
     x = 0;
     y = 0;
     cout << "elooo zrobilem go " << endl;}

     Point (int x, int y){
         this->x = x;
         this->y = y;
     }
     void printPoint() {
       cout << "x: " << x << "\t y: " << y << endl;}
 };
}

/////////////////////// 2
class Point3D : public pt::Point {
    int z;
public:
    Point3D(int x, int y, int z) : Point(x,y) {
        this->z = z;
    }
};

////////////////////// 3
class Polygon {
    pt::Point *points;
    int size;
public:
    Polygon(int size){
        this->size = size;
        points = new pt::Point[ size ];
    }
    void addPoint(pt::Point p){

    }

    static Polygon triangle( pt::Point P1, pt::Point P2, pt::Point P3){

    }
};

int main()
{
    cout << "Hello World!" << endl;
    pt::Point P1(4, 8);
    cout << "x: " << P1.getX() << "\t y: " << P1.getY() << endl;
    pt::Point P2();
    P1.printPoint();
  //  P2.printPoint();
  //  cout << "x: " << P2.getX() << "\t y: " << P2.getY() << endl;
    return 0;
}

