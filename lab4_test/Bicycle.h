#ifndef _BICYCLE_H_
#define _BICYCLE_H_

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Person.h"
using namespace std;

class Bicycle : public Vehicle{
protected:
  bool isAmator;
public:
  Bicycle(int gone, Person owner, float power, string dsc, bool isAmator);
  ostream& show(ostream & out) const;
  istream& load(istream &in);
  ~Bicycle();

};

#endif
