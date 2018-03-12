#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//void check(string str1, string str2, string str3){                                 // ITERATOR
//   string::iterator it2 = str2.begin();
//for( string::iterator it1 = str1.begin(); it1 != str1.end(); it1++)
//cout << "elo";
//}

string check(string str1, string str2, string str3){
   int pos = 0;
   while ( (pos = str1.find(str2,pos)) != string::npos ) {
    str1.erase(pos,str2.length());
    str1.insert(pos,str3);
    }
return str1;
}

int main()
{

cout << "Podaj przeszukiwany napis:" << endl;
    string str1, str2, str3;
    getline(cin,str1);
cout << "Wyraz szukany:" << endl;
cin >> str2;
cout << "Wyraz ktorym zastapimy:" << endl;
cin >> str3;

   str1 = check(str1,str2,str3);
cout << str1 << endl;
    return 0;
}
