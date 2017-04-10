#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int day, int month){
  this->day = day;
  this->month = month;
}
Date::Date(const Date &other){
  if(this != &other){
    day = other.day;
    month = other.month;
  }
}
