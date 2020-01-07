#include <iostream>

using namespace std;

class Student
{
public:
  Student(int=0, string="null");
  void set(int, string);
  void display(void);
  int num;

private:
  string name;
};

void display(Student &st);

int main()
{
  Student st1, *pSt = &st1;
  Student st2(1001, "wang2");

  int *p = &st2.num;
  
  st1.set(1000, "wang1");
  pSt->display();

  cout<<"num is "<<*p<<endl;

  display(st2);
  

  return 0;
}


Student::Student(int n, string nam)
{
  num = n;
  name = nam;
}

void Student::set(int n, string nam)
{
  num = n;
  name = nam;
}

void Student::display(void)
{
  cout<<"num is "<<num<<endl;
}



void display(Student &st)
{
    cout<<st.num<<endl<<st.name<<endl;
}
