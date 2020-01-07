#include <iostream>

using namespace std;

class Time
{
public:
  Time(int = 2019, int = 12, int = 24);
  void set_time(void);
  void display_time(void);

private:
  int year;
  int mon;
  int day;

};

int main()
{
  Time t1, t2(2008), t3(2008, 9), t4(2008, 9, 8);
  t1.display_time();
  t2.display_time();
  t3.display_time();
  t4.display_time();

  return 0;
}

Time::Time(int y, int m, int d)
{
  year = y;
  mon = m;
  day = d;
}

void Time::set_time(void)
{
  cout<<"请输入日期"<<endl;
  cin>>year>>mon>>day;
}

void Time::display_time(void)
{
  cout<<"日期："<<endl;
  cout<<year<<":"<<mon<<":"<<day<<endl;
}
