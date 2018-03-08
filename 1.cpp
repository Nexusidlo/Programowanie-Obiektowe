#include <iostream>
#include <string>
using namespace std;

void check(string napis){

    transform(napis.begin(),napis.end(),napis.begin(), ::tolower);

    char min = napis[0];
    char max = napis[0];


   for (int i = 1; i < napis.length(); i++){

       if (napis[i] < min && napis[i] >= 'a')
           min = napis[i];
       else if (napis[i] > max && napis[i] <= 'z')
           max = napis[i];
   }

   cout << "MAX: " << max << ", MIN: " << min << endl;
}

int main()
{

cout << "Podaj napis:" << endl;
    string napis;
    cin >> napis;

    check(napis);
    return 0;
}
