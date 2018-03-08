#include <iostream>
#include <string>
using namespace std;

void check(string str1, string str2, string str3){
   string::iterator it2 = str2.begin();
for( string::iterator it1 = str1.begin(); it1 != str1.end(); it1++)
cout << "elo";
}


int main()
{

cout << "Podaj przeszukiwany napis:" << endl;
    string str1, str2, str3;
    getline(cin,str1);
cout << "Wyraz szukany:" << endl;
cin >> str2;
cout << "Wyraz ktorym zastapimy:" << endl;
cin >> str2;

    check(str1,str2,str3);
    return 0;
}
