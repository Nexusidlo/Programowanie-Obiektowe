#include <iostream>

#include <Polygon.h>
using namespace std;

int main()
{
    Polygon pol1;
    pol1.printData();
    Polygon pol2(13);
    pol2.printData();

    Polygon::Point pkt;
    pkt.x = 10;
    pkt.y = 3.14;

    pol2.add(pkt);

    pol2.printData();
    return 0;
}
