#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(string name, string surname, int date) : name(name), surname(surname), date(date){
  //
}
ostream & operator<<(ostream &out, const Person &p){
  return out << p.name << " " << p.surname << " " << p.date << endl;
}

istream & operator>>(istream &in, Person &p){
  in >> p.name >> p.surname >> p.date; // bo zadeklarowalem jako przyjaciela
  return in;
}
