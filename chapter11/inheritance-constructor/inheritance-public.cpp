#include <iostream>

using namespace std;

class Date 
{
public:
  Date();
  Date(int y, int m, int d);
  ~Date();
  friend ostream& operator<<(ostream& cout, Date& d);
  friend istream& operator>>(istream& cin, Date& d);
  void ddisplay();
  
private:
  int year;
  int mon;
  int day;
};

class Student
{
public:
	Student(int n, string nam, float s):num(n), name(nam), score(s) {}
	Student()
	{
	  num = 0;
	  name = "";
	  score = 0;
	}
	~Student(){cout<<1<<endl;}
	void display(void);
	void set(int n, string nam, float s);

private:
	int num;
	string name;
	float score;

};

class Student1: public Student, public Date
{
public:
	Student1(int n, string nam, float s, int year, int mon, int day, int h, int w):Student(n, nam, s), Date(year, mon, day), height(h), weight(w){}
	Student1()
	{
	  height = 0;
	  weight = 0;
	}
	~Student1(){cout<<2<<endl;}
	void display();
	void set1(int h, int w);

private:
	int height;
	int weight;
};


int main()
{
	Student1 st1(1, "wang2", 99.5, 2019, 01, 20, 175, 65);

	st1.Student::display();
}


void Student::display(void)
{
	cout<<"num: "<<num<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"score: "<<score<<endl;
}

void Student::set(int n, string nam, float s)
{
	num = n;
	name = nam;
	score = s;
}

void Student1::display(void)
{
	Student::display();
	Date::ddisplay();
	cout<<"height: "<<height<<endl;
	cout<<"weight: "<<weight<<endl;
}

void Student1::set1(int h, int w)
{
	height = h;
	weight = w;
}


Date::Date()
{
  year = 1970;
  mon = 0;
  day = 0;
}

Date::Date(int y, int m, int d)
{
  year = y;
  mon = m;
  day = d;
}

Date::~Date()
{
  
}

void Date::ddisplay()
{
  cout<<"year: "<<year<<endl;
  cout<<"mon: "<<mon<<endl;
  cout<<"day: "<<day<<endl;
}


ostream& operator<<(ostream& cout, Date& d)
{
  cout<<"year: "<<d.year<<endl;
  cout<<"mon: "<<d.mon<<endl;
  cout<<"day: "<<d.day<<endl;
  
  return cout;
}


istream& operator>>(istream& cin, Date& d)
{
  cout<<"enter year: ";
  cin>>d.year;
  cout<<"enter mon: ";
  cin>>d.mon;
  cout<<"enter day: ";
  cin>>d.day;
  
  return cin;
}


