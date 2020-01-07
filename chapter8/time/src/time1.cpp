#include <iostream>

using namespace std;


struct date
{
  int year;
  int mon;
  int day;
};

void get_date(date *p);
void display_date(date);


int main()
{
  date d1, d2;
  
  get_date(&d1);
  display_date(d1);
}

void get_date(date* p)
{
  cin>>p->year>>p->mon>>p->day;
}

void display_date(date d)
{
  cout<<d.year<<":"<<d.mon<<":"<<d.day<<endl;
}


