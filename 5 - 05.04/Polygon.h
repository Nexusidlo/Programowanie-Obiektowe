#ifndef POLYGON_H
#define POLYGON_H

#include<iostream>


class Polygon
{
    public:

        struct Point{
        float x,y;
        };

    private:
        Point **point;
        int size;
        int currentSize;

    public:

        //CONSTRUCTORS & DESTRUCTOR
        Polygon();
        Polygon(int n);
        ~Polygon();

        //METHODS
        void printData();
        void add(Point& p);
        Point* ref (int n);

};

#endif // POLYGON_H
