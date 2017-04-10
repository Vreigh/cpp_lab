#include <iostream>
#include "TimeTable.h"
using namespace std;

TimeTable::TimeTable(int maksDates){
  this->maksDates = maksDates;
  currDates = 0;
  dates = new Date[maksDates];
}
TimeTable::TimeTable(const TimeTable &other){
  if(this != &other){
    maksDates = other.maksDates;
    currDates = other.currDates;
    dates = new Date[maksDates];
    for(int i=0; i<currDates; i++){
      dates[i] = other.dates[i];
    }
  }
}
Date& TimeTable::operator[](int i){
  if((i >= 0) || (i < currDates)) return dates[i];
}
void TimeTable::addDate(Date date){
  if(currDates < maksDates){
    dates[currDates++] = date;
  }
}
ostream & operator<<(ostream &out, const TimeTable &timeTable){
  for(int i=0; i<timeTable.currDates; i++){
    out << timeTable.dates[i];
  }
  return out;
}
