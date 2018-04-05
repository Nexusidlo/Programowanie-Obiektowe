#include <iostream>
#include <string>
#include <fstream>'
#include <cctype>

using namespace std;

void saveToFile(fstream & file, string str){

    int bpos=0, epos=0;
for (int i = 0; str[i] != NULL; i++) {
    if ( isspace(str[i]) ) {
        if ((i - bpos) < 25 ) {
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

cout << "I tak dzialam na 3.txt, jak chcesz to usun ten fragment kodu." << endl;
path = "3.txt";

cout << "Napis do zapisania:" << endl;
getline( cin, str);
str ="Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum";
fstream file (path.c_str(), ios::out);
saveToFile(file, str);
file.close();
    return 0;
}
