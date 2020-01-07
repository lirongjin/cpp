#include <iostream>
#include "time.h"

using namespace std;

void date::get_date(void)
{
  cin>>year>>mon>>day;
}

void date::display(void)
{
  cout<<year<<":"<<mon<<":"<<day<<endl;
}
