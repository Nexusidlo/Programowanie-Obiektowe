#include <iostream>
#include <string>
#include <fstream>'
#include <cctype>

using namespace std;

void saveToFile(fstream & file, string str){

    int bpos=0, epos=0;
for (int i = 0; str[i] != NULL; i++) {
    if ( isspace(str[i]) ) {
        if ((i - bpos) < 40 ) {
            epos = i;
            }
        else {
            file << str.substr(bpos,(epos-bpos)) << "\n";
            bpos = epos+1;
        }

}}}



int main()
{

cout << "Podaj sciezke:" << endl;
string path, str;
getline( cin, path);
path = "3.txt";
cout << "Napis do zapisania:" << endl;
getline( cin, str);

fstream file (path.c_str(), ios::out);
saveToFile(file, str);
file.close();
    return 0;
}
