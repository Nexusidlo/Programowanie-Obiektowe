#ifndef POINT_H
#define POINT_H


class point {
   private:
    float x, y;
   public:

    void setX(float x)
   {
       this->x = x;
   }

    void setY(float y)
    {
       this->y = y;
   }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    void moveVec(float xM, float yM)
    {
        x = x + xM;
        y = y + yM;
    }

    void movePoint(point P2)
    {
        x += P2.getX();
        y += P2.getY();
    }

    point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
   point(){};
};

#endif // POINT_H
