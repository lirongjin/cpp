#include <iostream>

using namespace std;

class Complex
{
public:
	Complex(){real = 0; imag = 0;}
	Complex(double r, double i);
	Complex(double arg);
	~Complex();
	friend ostream& operator<<(ostream &cout, Complex c);
//	friend Complex operator+(Complex c1, Complex c2);
	friend Complex operator-(Complex c1, Complex c2);
	operator double();

private:
	double real;
	double imag;

};


int main(int argc, char *argv[])
{
	Complex c1(2, 3), c2(2, -3);

	cout<<c1<<c2<<c1+c2<<c1-c2<<endl;
	cout<<"c1+1 = "<<c1+1<<endl;
}


Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex::Complex(double arg)
{
	real = arg;
	imag = 0;
}

Complex::~Complex()
{
	
}

Complex::operator double()
{
	return real;
}

ostream& operator<<(ostream &cout, Complex c)
{
	if(c.imag < 0)
	{
		return cout<<"("<<c.real<<c.imag<<"i)";
	}
	return cout<<"("<<c.real<<"+"<<c.imag<<"i)";
}

/*
Complex operator+(Complex c1, Complex c2)
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
*/

Complex operator-(Complex c1, Complex c2)
{
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}






















