#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>
using namespace std;

class Person{
  string name;
  string surname;
  int date;
public:
  Person(string name, string surname, int date);
  string getName() const{
    return name;
  }
  void setName(string name){
    this->name = name;
  }
  //bool saveToStream(ostream &out) const{
  //  out << (*this);
  //  return  true;
  //}
  //bool loadFromStream(istream &in){
  //  return false; // not sure yet
//  }
  friend ostream & operator<<(ostream &out, const Person &p);
  friend istream & operator>>(istream &in, Person &p);
};

#endif
