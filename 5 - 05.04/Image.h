#ifndef IMAGE_H
#define IMAGE_H
#include "Polygon.h"

class Image
{
    public:
        Image();
        virtual ~Image();

    protected:

    private:
        Polygon* arr[10];
        int size;
};

#endif // IMAGE_H
