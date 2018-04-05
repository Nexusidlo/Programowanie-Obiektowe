#ifndef HOUSEHOLD_H_INCLUDED
#define HOUSEHOLD_H_INCLUDED
using namespace std;

class Household {
    Villager **mieszkancy;
    int maxElement, currentElement;

    bool readyToBorn (){
        for(int i = 0; i < currentElement; i++)
            if (mieszkancy[i].sex)
        return true;
        }
public:
    nextYear(){
    for(int i = 0; i < currentElement; i++)
        mieszkancy[i]->increaseAgeBy1();
    }




};



#endif // HOUSEHOLD_H_INCLUDED
