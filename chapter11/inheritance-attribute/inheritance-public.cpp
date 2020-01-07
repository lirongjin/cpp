#include <iostream>

using namespace std;

class Student
{
public:
//	Student(int n, string nam, float s):num(n), name(nam), score(s) {}
//	~Student(){};
	void display(void);
	void set(int n, string nam, float s);

private:
	int num;
	string name;
	float score;

};

class Student1: public Student
{
public:
	void display1();
	void set1(int h, int w);

private:
	int height;
	int weight;
};


int main()
{
	Student1 st1;
	st1.set(1, "wang1", 100);
	st1.set1(175, 65);
	st1.display();
	st1.display1();
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

void Student1::display1(void)
{
	cout<<"height: "<<height<<endl;
	cout<<"weight: "<<weight<<endl;
}

void Student1::set1(int h, int w)
{
	height = h;
	weight = w;
}
