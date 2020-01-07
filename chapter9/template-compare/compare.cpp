#include <iostream>

using namespace std;


template <class T>
class Compare
{
public:
  Compare(T n1, T n2):num1(n1), num2(n2){}
  ~Compare(){};
  T max(void)
  {
    return num1 > num2 ? num1 : num2;
  }
  T min();

private:
  T num1;
  T num2;
};


int main()
{
  Compare <int> c1(23, 34);
  Compare <float> c2(88.8, 88.7);

  cout<<"c1 max is "<<c1.max()<<endl;
  cout<<"c2 max is "<<c2.max()<<endl;
}

template <class T>
T Compare <T>::min(void)
{
  return num1 < num2 ? num1 : num2;
}
