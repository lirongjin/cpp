#include <iostream>
#include <string>

using namespace std;


class Student
{
public:
  Student(int n, string nam);
  Student(){}
  ~Student();
  void display(void)const;
  void set();
  mutable  int num;
  
private:
  
  string name;
};


Student st0(999, "t");

int main()
{
  Student s1, s2(1001, "wangwu");
  const Student s3(1003, "wang6");
  s1.set();
  
  s1.display();
  s2.display();

  //s3.num = 33;
  s3.display();
    
  return 0;
}


Student::Student(int n, string nam):num(n), name(nam)
{

}

Student::~Student()
{
  cout<<num<<"destructor"<<endl<<endl;
}

void Student::display(void) const
{
  cout<<"num is "<<num<<endl
  <<"name is "<<name<<endl;
  num = 1;
}

void Student::set()
{
  cout<<"input num:"<<endl;
  cin>>num;
  cout<<"input name:"<<endl;
  cin>>name;
}



