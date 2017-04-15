#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Vehicle{
protected:
  int gone;
  Person owner;
public:
  Vehicle(int gone, Person owner, float power, string dsc);
  float power;
  string dsc;
  virtual ostream& show(ostream &out) const;
  virtual istream& load(istream &in);
  friend ostream & operator<<(ostream &out, const Vehicle &v);
  friend istream & operator>>(istream &in, Vehicle &v);

  virtual ~Vehicle(){};
};



#endif
