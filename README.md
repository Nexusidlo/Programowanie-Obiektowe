# Programowanie-Obiektowe

#include <iostream>
#include <vector>
using namespace std;


////1
template <class Typ>
Typ zad1 (Typ *t1, Typ *t2){

     Typ min = *t1;
    for (t1; t1<=t2; t1++){

        if ( *t1 < min )
            min = *t1; }
    return min;
    }
template<> zad1<string>()


/////3
template <typename Typ>
    Typ *zad3 (vector<Typ> &kontener){
        Typ min = kontener[0];
        for (int i = 1; i < kontener.size(); i++){
            if (kontener[i] < min)
                min = kontener[i];
        }
        return &min;
    }

int main()
{
    int tab1[6] = {38,8,7,15,2,31};
    double tab2[4] = {38.5, 8.1, 7.48, 15};
    cout << "Najmniejszy: " << zad1( tab1, tab1+5) << endl;
    cout << "Najmniejszy: " << zad1( tab2, tab2+3) << endl;

    vector<float> vct;
 vct.push_back(10); vct.push_back(4.5); vct.push_back(17.2); vct.push_back(2.87); vct.push_back(110);
    cout << "Najmniejszy: " << zad3(vct) << endl;
 return 0;
}
