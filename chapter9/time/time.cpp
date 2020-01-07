#include <iostream>
#include <string>

using namespace std;

class Time
{
public:
  Time()
  {
    year = 2019;
    mon = 12;
    day = 24;
  }
  Time(int y, int m, int d, string nam);
  Time(int m, int d, string nam) : mon(m), day(d), name(nam){}
  ~Time()
  {
    cout<<name<<"end"<<endl;
  }
  void set_time(void);
  void display_time(void);
 
private:
   int year;
   int mon;
   int day;
   string name;

};

Time t4(12, 24, "t4");

int main()
{
  Time t1, t2(2019, 8, 8, "t2"), t3(12, 24, "t3");

  t1.display_time();
  t2.display_time();
  t3.display_time();
  t4.display_time();

  return 0;
}

Time::Time(int y, int m, int d, string nam)
{
  year = y;
  mon = m;
  day = d;
  name = nam;
}

void Time::set_time(void)
{
  cin>>year>>mon>>day;
}

void Time::display_time(void)
{
  cout<<year<<":"<<mon<<":"<<day<<endl;
}
