
#include <iostream>
#include <cmath>
using namespace std;

class Person{
    protected:
        string name;
    public:

        Person(string name){
            this->name = name;
        }

        void ident(){
        cout << name << " to osoba." << endl;
    }
};

class Teacher : public Person{
   private:
        string title;
   public:
        Teacher(string name, string title) : Person (name){
            this->title = title;
        }

        void ident(){
             cout << name << ", jego stanowisko to " << title << endl;
            }
};

class Student: public Person{
   public:
        int semestr;

        Student (string name, int semestr) : Person (name) {
            this->semestr = semestr;
        }

        void ident(){
         cout << name << ", na " << semestr << " semestrze." << endl;
        }
};

namespace Poly {
class RegularPolyhedron{
    private:
        float bok; // dlugosc boku podstawy
        float PP; //pole podstawy
        float H; //wysokosc bryly
        int n; // liczba wierzcholkow w podstawie
    public:
        RegularPolyhedron(float bok, int n, float H){
            this->bok = bok;
            this->n = n;
            this->H = H;
            PP = n / 4 * (cos( M_PI/n ) / sin( M_PI/n )) * bok * bok;
        }

        virtual float volume() = 0;

    protected:
        float getPP(){
            return PP;
        }
        float getH(){
            return H;
        }
};

class RegularPyramid : public RegularPolyhedron {
public:
    RegularPyramid(float bok, int n, float H) : RegularPolyhedron(bok, n, H) {}

    float volume() {
        return 1/3 * getPP() * getH();
    }
};

class RegularPrism : public RegularPolyhedron {
public:
    RegularPrism(float bok, int n, float H) : RegularPolyhedron(bok, n, H) {}

    float volume() {
        return  getPP() * getH();
    }
};

}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
