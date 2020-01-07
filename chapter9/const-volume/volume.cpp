#include <iostream>

using namespace std;

class Volume
{
public:
  Volume(int l, int w, int h, float v = 0):len(l), width(w), height(h), volume(v){}
  ~Volume();
  float Calculate_Volume(void);
  void display(void);

private:
  int len;
  int width;
  const int height;
  float volume;
};

int main()
{
    Volume v1(1, 2, 3);
    v1.Calculate_Volume();
    v1.display();

    return 0;
}

Volume::~Volume()
{
  cout<<"destructor"<<endl;
}

float Volume::Calculate_Volume(void)
{
    volume = len * width * height;
}

void Volume::display(void)
{
  cout<<"volume is "<<volume<<endl;
}
