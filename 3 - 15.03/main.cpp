#include <iostream>

using namespace std;

class User {
protected:
    string login, password;
public:
    User (string login, string password){
        this->login = login;
        this->password = password; }

    string getLogin(){
        return login;
    }

bool authorize(string login, string password){
if (this->login == login && this->password == password) {
    cout << "dostep przyznany" << endl;
    return true; }
else {
    cout << "brak dostepu" << endl;
    return false; }
}
};

class Student : public User {
int semestr;
public:
     Student (string login, string password, int semestr) : User (login, password) {
   // Student(string login, string password, int semestr){
        this->password = password; }
};


class Subject {
    string sName;
    Student* wsk[100];
    int sMax;
    int sNumb = 0;
public:
    Subject(string sName, int sMax ) {
        if (sMax > 100){
            cout << "error error" << endl;
           exit(-1);
        }
        this->sName = sName;
        this->sMax = sMax;
    }

    bool addStudent(Student* S){
        if (sNumb == sMax) {
            cout << "brak miejsc, dowidzenia" << endl;
                return false; }
        wsk[sNumb] = S;
        sNumb++;
        cout << sName << ", dodano studenta, liczba aktualnie zapiosanych: " << sNumb << endl;
        return true;
    }

    bool check(string indeks /*login*/, bool* wartoscLogiczna){
    for ( int i=0; i < sNumb; i++) {
        if (wsk[i]->getLogin() == indeks) {
            *wartoscLogiczna = true;
            return &wsk[i]; }
        }
    *wartoscLogiczna = false;
    return -1;
}
};




int main(int argc, char *argv[])
{
    User U1("aaa","bbb");
    U1.authorize("aaa", "bbb");

    Student S1("aaa","bbb", 5);
    S1.authorize("aaa", "bbb");

    Subject przyrka = Subject("przyrka", 3);
    przyrka.addStudent(&S1);

    bool ijak;
    przyrka.check("aaa",&ijak);
    cout << "czy student nalezy do przedmiotu: " << ijak << endl;
      return 0;
}
