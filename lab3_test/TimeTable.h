#ifndef _TIME_TABLE_H
#define _TIME_TABLE_H

#include <iostream>
#include "Date.h"
using namespace std;

class TimeTable{
private:
  int maksDates;
  int currDates;
  Date* dates;
public:
  TimeTable(int maksDates = 100);
  TimeTable(const TimeTable &other);
  Date& operator[](int i);
  void addDate(Date date);
  int getCurrDates(){
    return currDates;
  }
  friend ostream & operator<<(ostream &out, const TimeTable & timeTable);
};

#endif
