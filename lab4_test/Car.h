#ifndef _CAR_H_
#define _CAR_H_

#include <iostream>
#include <string>
#include "Engine.h"
#include "Person.h"
using namespace std;

class Car : public Engine{
protected:
  string marka;
public:
  Car(int gone, Person owner, float power, string dsc, float capacity, string marka);
  ostream& show(ostream& out) const;
  istream& load(istream& in);
  string getMarka() const{
    return marka;
  }
};

#endif
