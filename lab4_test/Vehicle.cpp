#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Person.h"
using namespace std;

Vehicle::Vehicle(int gone, Person owner, float power, string dsc) : gone(gone), owner(owner), power(power), dsc(dsc){
  //
}

ostream & operator<<(ostream &out, const Vehicle &v){
  return v.show(out);
}

istream & operator>>(istream &in, Vehicle &v){
  return v.load(in);
}

ostream& Vehicle::show(ostream &out) const{
  out << "My owner is: " << owner << gone << " " << power << " " << dsc << endl;
  return out;
}

istream& Vehicle::load(istream &in){
  cout << "Please enter gone, person, power and dsc: ";
  in >> gone >> owner >> power >> dsc;
  return in;
}
