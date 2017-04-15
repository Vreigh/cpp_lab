#include <iostream>
#include <string>
#include "Person.h"
#include "Engine.h"
#include "Car.h"
using namespace std;

Car::Car(int gone, Person owner, float power, string dsc, float capacity, string marka) :
Engine(gone, owner, power, dsc, capacity), marka(marka){
  //
}

ostream& Car::show(ostream &out) const{
  out << "I am a Car";
  (*this).Engine::show(out);
  out << "Marka: " << marka << endl;
  return out;
}

istream& Car::load(istream& in){
  (*this).Engine::load(in);
  cout << "Now enter mark: ";
  in >> marka;
  return in;
}
