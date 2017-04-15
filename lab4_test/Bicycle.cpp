#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Bicycle.h"
#include "Person.h"
using namespace std;

Bicycle::Bicycle(int gone, Person owner, float power, string dsc, bool isAmator) : Vehicle(gone, owner, power, dsc),
isAmator(isAmator){
  //
}
ostream& Bicycle::show(ostream &out) const{
  out << "I am Bicycle.";
  (*this).Vehicle::show(out);
  out << "Is amator? : " << isAmator << endl;
  return out;
}
istream& Bicycle::load(istream &in){
  (*this).Vehicle::load(in);
  cout << "Please enter amatour: ";
  in >> isAmator;
  return in;
}
Bicycle::~Bicycle(){
  //
}
