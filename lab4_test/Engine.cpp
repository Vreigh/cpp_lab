#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Person.h"
#include "Engine.h"
using namespace std;

Engine::Engine(int gone, Person owner, float power, string dsc, float capacity) :
Vehicle(gone, owner, power, dsc), capacity(capacity){
  //
}

ostream& Engine::show(ostream& out) const{
  (*this).Vehicle::show(out);
  out << " Capacity: " << capacity;
  return out;
}

istream& Engine::load(istream& in){
  (*this).Vehicle::load(in);
  cout << " Now enter capacity: ";
  in >> capacity;
  return in;
}
