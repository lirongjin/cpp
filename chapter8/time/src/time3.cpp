#include <iostream>
#include "time.h"

using namespace std;

int main()
{
  date *pd;
  
  pd = new date;
  
  pd->get_date();
  pd->display();
  
  delete pd;
  
  return 0;
}






