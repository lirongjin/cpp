#include <iostream>

using namespace std;


struct date
{
  int year;
  int mon;
  int day;
};

void get_time(date& d);
void display_time(date d);

int main()
{
  date d;
  
  get_time(d);
  display_time(d);
}

void get_time(date& d)
{
  cin>>d.year>>d.mon>>d.day;
}

void display_time(date d)
{
  cout<<d.year<<":"<<d.mon<<":"<<d.day<<endl;
}

