#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;


 //  string::iterator it2 = str2.begin();
//for( string::iterator it1 = str1.begin(); it1 != str1.end(); it1++)


void counter(fstream & file, string str){

stringstream buff;
buff << file.rdbuf();
    string filestring = buff.str();
int choice=0;

cout << "Czy mam uwzgledniac wielkosci liter? \n [1] - tak \t [0]-nie" << endl;
cin >> choice;
if (choice == 0){
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    transform(filestring.begin(),filestring.end(),filestring.begin(), ::tolower);
}

int exists = 0;
int lpos = 0;
while(  filestring.find(str, lpos) != string::npos ) {
    lpos = filestring.find(str, lpos) + 1;
    exists++;
}

cout << "found: " << exists << endl ;
}


int main()
{

cout << "Podaj sciezke:" << endl;
string path, str;
getline( cin, path);

cout << "I tak dzialam na 3.txt, jak chcesz to usun ten fragment kodu." << endl;
path = "3.txt";

cout << "Szukany napis:" << endl;
getline( cin, str);

fstream file (path.c_str(), ios::in);


counter(file, str);
    return 0;
}
