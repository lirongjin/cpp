#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(int r, double i);
    Complex()
    {
      real = 0;
      image = 0.0;
    }
    ~Complex();
    Complex operator+(Complex &);
    void display();

private:
    int real;
    double image;
};

int main()
{
    Complex c1(1, 2.1), c2(2, 4.1), c3;
    
    c3 = c1 + c2;
    c3.display();
}


Complex::Complex(int r, double i)
{
  real = r;
  image = i;
}


Complex::~Complex()
{
  
}

Complex Complex::operator+(Complex &c)
{
  return Complex(real+c.real, image+c.image);
}

void Complex::display(void)
{
  cout<<"("<<real<<","<<image<<"i)"<<endl;
}

