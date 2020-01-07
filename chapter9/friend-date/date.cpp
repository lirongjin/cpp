#include <iostream>

using namespace std;

//class Time;

//void display(Time&);

class Time
{
public:
  Time(int h, int m, int s);
  ~Time();
  friend void display(Time&);

private:
  int hour;
  int min;
  int sec;
};


void display(Time&);

int main()
{
  Time t(12, 3, 4);
  display(t);
}

Time::Time(int h, int m, int s)
{
  hour = h;
  min = m;
  sec = s;
}

Time::~Time()
{
  cout<<"destructor"<<endl;
}

void display(Time& t)
{
    cout<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
}
