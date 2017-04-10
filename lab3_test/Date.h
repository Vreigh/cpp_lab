#ifndef _DATE_H
#define _DATE_H

#include <iostream>
using namespace std;

class Date{
private:
  int day;
  int month;
public:
  Date(int day = 1, int month = 1);
  Date(const Date &other);
  friend ostream & operator<<(ostream &out, const Date &date){
    return out << "Day: " << date.day << " Month: " << date.month << endl;
  }
};

#endif
