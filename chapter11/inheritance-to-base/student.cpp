#include <iostream>

using namespace std;


class Person
{
public:
  Person();
  Person(string nam, int a);
  void display();
  
protected:
  string name;
  int age;
};

class Student: public Person
{
public:
  Student(string nam, int a, float s);
  Student();
  void display(void);
  
private:
  float score;
};


int main(int argc, char *argv[])
{
  Person p1;
  Student s1("wang1", 18, 99.5);
  p1 = s1;
  p1.display();
}


Person::Person(string nam, int a)
{
  name = nam;
  age = a;
}

Person::Person()
{
  name = "";
  age = 0;
}

void Person::display()
{
  cout<<"name: "<<name<<endl;
  cout<<"age: "<<age<<endl;
}


Student::Student(string nam, int a, float s): Person(nam, a)
{
  score = s;
}

Student::Student()
{
  score = 0;
}

void Student::display(void)
{
  Person::display();
  cout<<"score: "<<score<<endl;
}

