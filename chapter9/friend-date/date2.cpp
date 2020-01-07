#include <iostream>

using namespace std;

class Time;

class Date
{
public:
  Date(int y, int m, int d):year(y), mon(m), day(d){}
  ~Date(){}
  void display(Time&);

private:
  int year;
  int mon;
  int day;
};

class Time
{
public:
  Time(int h, int m, int s):hour(h), min(m), sec(s){}
  ~Time(){}
  friend class Date; 

private:
  int hour;
  int min;
  int sec;
};

int main()
{
  Date d1(2019, 12, 27);
  Time t1(12,12,12);

  d1.display(t1);
}

void Date::display(Time& t)
{
  cout<<year<<"/"<<mon<<"/"<<day<<endl;
  cout<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
}
