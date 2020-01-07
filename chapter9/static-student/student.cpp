#include <iostream>

using namespace std;

class Student
{
public:
  Student(int n, int s):num(n), score(s){ count++;}
  Student(Student& st1);
  ~Student(){}
  int total(void);
  static float average(void);

private:
  int num;
  int score;
  static int count;
  static int sum;
};

int Student::count = 0;
int Student::sum = 0;

int main()
{
    Student st1(0, 90), st2(1, 91);

    st1.total();
    st2.total();

    cout<<"ave"<<Student::average()<<endl;
}

Student::Student(Student& st1)
{
    num = st1.num;
    score = st1.score;
}


int Student::total(void)
{
   sum += score;
}

float Student::average(void)
{
  return sum / (float)count;
}
