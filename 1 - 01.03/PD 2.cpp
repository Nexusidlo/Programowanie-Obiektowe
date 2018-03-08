#include <iostream>
#include <math.h>

using namespace std;

class Wielomian{
    float a, b, c, delta;
public:

    void setCoefficients(float a, float b, float c){
        this->a = a;
        this->b = b;
        this->c = c;
        delta = pow(b,2)-4*a*c;
        }

    bool isReal(){
        delta > 0 ? true : false;
        }

    bool aZero(){
        a == 0 ? false : true; }

    float x1(){
    if( isReal() )
        return ( (-b) - sqrt(delta)) / (2*a);
    else
        cout << "brak miejsc zerowych" << endl;
        return -1; }

    float x2(){
    if( isReal() )
        return ( (-b) + sqrt(delta)) / (2*a);
    else
        cout << "brak miejsc zerowych" << endl;
        return -1; }
};

int main(){
cout << "podaj kolejno wspolczynniki a, b, c " << endl;
float a, b, c;
cin >> a >> b >> c;

Wielomian w;
w.setCoefficients(a,b,c);
cout << "x1 = " << w.x1() << endl;
cout << "x1 = " << w.x2() << endl;
return 0;
}



