#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Person.h"
using namespace std;

class Engine : public Vehicle{
protected:
  float capacity;
public:
  Engine(int gone, Person owner, float power, string dsc, float capacity);
  float getCapacity() const{
    return capacity;
  }
  int getPowerKm() const{
    return (int)(1.4 * power);
  }
  virtual ostream& show(ostream& out) const;
  virtual istream& load(istream& in);
};


#endif
