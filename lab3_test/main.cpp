#include <iostream>
#include "Date.h"
#include "TimeTable.h"

int main(){
  Date date1 = Date(3, 5);
  Date date2 = Date();
  Date date3 = Date(date1);

  std::cout << date1 << date2 << date3;

  TimeTable t1 = TimeTable(100);
  cout << t1.getCurrDates() << endl;
  t1.addDate(date1);
  t1.addDate(date2);
  t1.addDate(date3);
  cout << t1.getCurrDates() << endl;
  cout << t1;
}
