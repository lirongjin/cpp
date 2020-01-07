#include <iostream>


using namespace std;


class Shape
{
protected:
  virtual void display(void) =0;
};

class Point: public Shape
{
public:
  Point(float a = 0, float b = 0);
  float GetX();
  float GetY();
  void set(float a, float b);
  void display(void);
  friend ostream& operator<<(ostream& cout, Point& pnt);
  
protected:
  float x;
  float y;
};

class Circle: public Point
{
public:
  Circle(float a = 0, float b = 0, float r = 0);
  float GetRadius();
  void set(float a, float b, float r);
  float area(void);
  void display();
  
protected:
  float radius;
};

class Cyclinder: public Circle
{
public:
  Cyclinder(float a = 0, float b = 0, float r = 0, float h = 0);
  float GetHeight();
  void set(float a, float b, float r, float h);
  float area();
  float volume();
  void display();
  
private:
  float height;
};



int main()
{
#if DEBUG_POINT
  
  p1.set(2, 5);
  cout<<p1.GetX()<<","<<p1.GetY()<<endl;
  cout<<p1<<endl;
  p1.display();
#elif DEBUG_CIRCLE
  Circle c1(1, 2, 3);
  c1.set(2, 3, 5);
  cout<<c1.GetRadius()<<endl;
  c1.display();
  cout<<"c1 area: "<<c1.area()<<endl;
#elif DEBUG_CYNLINDER
  Cyclinder cy1(1, 2, 3, 4);
  cout<<"cy1 area: "<<cy1.area()<<endl;
  cout<<"cy1 volume: "<<cy1.volume()<<endl;
  
  cy1.display();
#elif 1
  Point p1(1, 2), *ptr;
  Circle c1(1, 2, 3);
  Cyclinder cy1(1, 2, 3, 4);
  
  ptr = &p1;
  cout<<"p1: "<<endl;
  ptr->display();
  ptr = &c1;
  cout<<"c1: "<<endl;
  ptr->display();
  ptr = &cy1;
  cout<<"cy1: "<<endl;
  ptr->display();
#endif
}


Point::Point(float a, float b)
{
  x = a;
  y = b;
}

float Point::GetX()
{
  return x;
}

float Point::GetY()
{
  return y;
}

void Point::set(float a, float b)
{
  x = a;
  y = b;
}

void Point::display(void)
{
  cout<<"["<<x<<","<<y<<"]"<<endl;
}


ostream& operator<<(ostream& cout, Point& pnt)
{
  return cout<<"["<<pnt.x<<","<<pnt.y<<"]";
}


Circle::Circle(float a, float b, float r): Point(a, b)
{
  radius = r;
}

float Circle::GetRadius()
{
  return radius;
}

void Circle::set(float a, float b, float r)
{
  Point::set(a, b);
  radius = r;
}

float Circle::area(void)
{
  return (3.141592 * radius * radius);
}


void Circle::display(void)
{
  //cout<<"["<<x<<","<<y<<"]"<<endl;
  Point::display();
  cout<<"radius: "<<radius<<endl;
}


Cyclinder::Cyclinder(float a, float b, float r, float h): Circle(a, b, r)
{
  height = h;
}

float Cyclinder::GetHeight()
{
  return height;
}

void Cyclinder::set(float a, float b, float r, float h)
{
  Circle::set(a, b, r);
  height = h;
}

void Cyclinder::display()
{
 // cout<<"["<<x<<","<<y<<"]"<<endl;
 // cout<<"radius: "<<radius<<endl;
  Circle::display();
  cout<<"height: "<<height<<endl;
}


float Cyclinder::area()
{
  return (3.141592 * radius * radius * 2 + (2 * 3.141592 * radius * height));
}

float Cyclinder::volume()
{
  return (3.141592 * radius * radius * height);
}



