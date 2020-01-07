#include <iostream>

using namespace std;

class Person
{
public:
  Person();
  Person(string nam, int a, float h);
  void display(void);
  
public:
  string name;
  int age;
  float height;
};

class Student:virtual public Person
{
public:
  Student(string nam, int a, float h, float score);
  Student();
public:
  float score;
  
};

class Teacher:virtual public Person
{
public:
  Teacher();
  Teacher(string nam, int a, float h, string t);
  
public:
  string title;
};

class Graduate: public Student, public Teacher
{
public:
  Graduate();
  Graduate(string nam, int a, float h, float score, string t, int w);
  ~Graduate();

public:
  int wage;
};


int main(int argc, char *argv[])
{
  Graduate g1("wang1", 18, 65, 99.5, "hh", 10000);
  g1.display();

}


Person::Person(string nam, int a, float h)
{
  name = nam;
  age = a;
  height = h;
}

Person::Person()
{
  name = "";
  age = 0;
  height = 0;
}

void Person::display(void)
{
  cout<<"name: "<<name<<endl;
  cout<<"age: "<<age<<endl;
  cout<<"height: "<<height<<endl;
}



Student::Student(string nam, int a, float h, float s): Person(nam, a, h)
{
  score = s;
}

Student::Student()
{
  score = 0;
}


Teacher::Teacher()
{
  title = "";
}

Teacher::Teacher(string nam, int a, float h, string t): Person(nam, a, h)
{
  title = t;
}


Graduate::Graduate()
{
  wage = 0;
}

Graduate::Graduate(string nam, int a, float h, float score, string t, int w): Student("wang2", 19, 66, score), Teacher("wang3", 20, 67, t), Person(nam, a, h)                  
{
  wage = w;
}

Graduate::~Graduate()
{

}


