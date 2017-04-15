#include <iostream>
#include <string>
#include "Person.h"
#include "Vehicle.h"
#include "Bicycle.h"
#include "Engine.h"
#include "Car.h"
using namespace std;

int main(){
  Person person("Filip", "Raszka", 1996);
  cout << person;

  Bicycle bike(0, person, 12.8, "siemano", true);
  cin >> bike;
  cout << bike;

  cout << endl << endl;

  Car car(0, person, 12.8, "siemano", 1.5, "marka123");
  cin >> car;
  cout << car;
}
