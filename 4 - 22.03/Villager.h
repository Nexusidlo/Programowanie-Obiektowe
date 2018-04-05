#ifndef VILLAGER_H_INCLUDED
#define VILLAGER_H_INCLUDED
#include <cstdlib>
#include <ctime>
using namespace std;

class Villager {
protected:
    string name;
    unsigned int age, maxAge;
    bool sex; //true-Male, fale-Female
    string maleNames[5] = {"Adam", "Zdzichu", "Grzesio", "Maciek", "Szymek"};
    string femaleNames[5] = {"Ania", "Marysia", "Grazyna", "Jola", "Dominika"};
public:
    Villager(){
    srand(time(NULL));
    age = 0;
    maxAge = rand()%101;
    sex = rand()%2;
    if (sex)
        name = maleNames[rand()%5];
    else
        name = femaleNames[rand()%5];
    cout << "Narodziny " << name << ", umrze za " << maxAge << " lat." << endl;
    }

    Villager(string name, unsigned int age, unsigned int maxAge, bool sex){
        this->name =name;
        this->age = age;
        this->maxAge = maxAge;
        this->sex = sex;
        cout << "Przybyl " << name << ", " << age << " lat, a umrze za " << maxAge-age <<"." << endl;
    }

    ~Villager(){
        cout << name << " is dead." << endl;
    }

    void increaseAgeBy1(){
        age++;
        if (age == maxAge)
            delete this;
    }

};


#endif // VILLAGER_H_INCLUDED
