#include <iostream>
using namespace std;

class Account {
  private:
    int id; // - numer konta, liczba ca�kowita,
    float balance; // - saldo, liczba zmiennoprzecinkowa,
float [100]history; // - 100-elementowa tablica liczb zmiennoprzecinkowych,
int transactions = 0; // - ilo�� transakcji wykonanych na tym koncie,

public:
int getID(){
return ID;
}

float getBalance(){
return balance;
}

void setID(int ID){
this->ID = ID;
}

void setBalance(int balance){
this->balance = balance;
}

void transaction(float zmiana){ // przyjmuj�c� liczb� zmiennoprzecinkow�, zapisuj�c� j� w historii dodaj�c� j� do pola balance,
history[transactions] = zmiana;
transactions++;
balance += zmiana;
}

float last(){ // - zwracaj�ca warto�� ostatniej transakcji,
return history[transactions];
}

void showHistory(){ //- wy�wietlaj�ca wszystkie dotychczasowe transakcje i odpowiadaj�ce im stany konta.
for (int i = 0; i < transactions; i++)
  cout << history[i];
  }

 };

void printOpt(){
cout << "0 - EXIT." << endl;
cout << "1 - set user ID." << endl;
cout << "2 - check current user ID." << endl;
// wypisac reszte
}

 int main() {
 Account acc = Accoun();
 int coRobic = 1;

  while (coRobic != 0) {
  printOpt();
  cin >> coRobic;
  switch( coRobic )
{
case 0:
    return -1;
    break;
case 1:
    int ID;
    cin >> ID;
    acc.setID(ID);
    break;

case 2:
    cout << "ID: << acc.getID()
    break;
default:
  cout << "Jeszcze nie ma takiej opcji" << endl;
  break;
}
return 0;
