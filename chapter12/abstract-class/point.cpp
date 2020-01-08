#include <iostream>

using namespace std;


class Shape
{
public:
  virtual float area() const {return 0;}
  virtual float volume() const {return 0;}
  virtual void shapeName() =0;
};

class Point: public Shape
{
public:
  Point(float a = 0, float b = 0);
  virtual ~Point(){}
  virtual void  shapeName();
  float getX()const;
  float getY()const;
  void set(float a, float b);
  friend ostream& operator<<(ostream& cout, const Point& p);
protected:
  float x;
  float y;
};

class Circle: public Point
{
public:
  Circle(float a = 0, float b = 0, float r = 0);
  virtual ~Circle(){}
  virtual void shapeName(void);
  virtual float area(void) const;
  float  getRadius()const;
  void set(float a, float b, float r);
  friend ostream& operator<<(ostream& cout, const Circle& c);
  
protected:
  float radius;
};

class Cylinder: public Circle
{
public:
  Cylinder(float a = 0, float b = 0, float r = 0, float h = 0);
  virtual ~Cylinder(){}
  virtual float area() const;
  virtual float volume() const;
  virtual void shapeName();
  float getHeight() const;
  void set(float a, float b, float r, float h);
  friend ostream& operator<<(ostream& cout, const Cylinder& cy);
  
protected:
  float height;
};


int main(int argc, char *argv[])
{
#ifdef	DEBUG_POINT
  Point p1(1.2, 9.8);
  p1.shapeName();
  cout<<p1.getX()<<","<<p1.getY()<<endl;
  p1.set(3.8, 4.6);
  cout<<p1<<endl;
#elifdef DEBUG_CIRCLE
  Circle c1(1.2, 3.4, 5.6);
  cout<<c1.getX()<<","<<c1.getY()<<endl<<c1.getRadius();
  c1.set(2, 4, 5.0);
  c1.shapeName();
  cout<<c1.area()<<endl;
  cout<<c1<<endl;
#elifdef DEBUG_CYLINDER
  Cylinder cy1(2.1, 3.4, 4.6, 6.7);
  cy1.shapeName();
  cout<<"position: "<<cy1.getX()<<","<<cy1.getY()<<endl;
  cout<<"height: "<<cy1.getHeight()<<endl;
  cout<<"radius: "<<cy1.getRadius()<<endl;
  cy1.set(5.1, 4.5, 6.5, 6.6);
  cout<<"volume: "<<cy1.volume()<<endl;
  cout<<cy1<<endl;
#elif 1
  Point pnt(6.8, 5.6);
  Circle ci(6.8, 5.6, 8.8);
  Cylinder cy(6.8, 5.6, 8.8, 5.5);
  Shape *ptr = NULL;
  
  ptr = &pnt;
  ptr->shapeName();
  cout<<"area: "<<ptr->area()<<endl;
  cout<<"volume: "<<ptr->volume()<<endl;
  cout<<endl;
  
  ptr=&ci;
  ptr->shapeName();
  cout<<"area: "<<ptr->area()<<endl;
  cout<<"volume: "<<ptr->volume()<<endl;
  cout<<endl;
  
  ptr=&cy;
  ptr->shapeName();
  cout<<"area: "<<ptr->area()<<endl;
  cout<<"volume: "<<ptr->volume()<<endl;
  cout<<endl;
  
#endif
  

  
}


Point::Point(float a, float b)
{
  x = a;
  y = b;
}

void Point::shapeName()
{
  cout<<"point"<<endl;
}


float Point::getX() const
{
  return x;
}

float Point::getY() const
{
  return y;
}

void Point::set(float a, float b)
{
  x = a;
  y = b;
}

ostream& operator<<(ostream& cout, const Point& p)
{
  return cout<<"["<<p.x<<","<<p.y<<"]";
}


Circle::Circle(float a, float b, float r): Point(a, b), radius(r){}

void Circle::shapeName(void)
{
  cout<<"Circle\n";
}

float Circle::area(void) const
{
  return (3.14 * radius * radius);
}

float Circle::getRadius() const
{
  return radius;
}

void Circle::set(float a, float b, float r)
{
  Point::set(a, b);
  radius = r;
}

ostream& operator<<(ostream& cout, const Circle& c)
{
  return cout<<"["<<c.x<<", "<<c.y<<"]\n"<<c.radius<<endl;
}


Cylinder::Cylinder(float a, float b, float r, float h): Circle(a, b, r)
{
  height = h;
}

float Cylinder::area() const
{
  return (2 * Circle::area() + (2 * 3.14 * radius * height));
}

float Cylinder::getHeight() const
{
  return height;
}

void Cylinder::set(float a, float b, float r, float h)
{
  Circle::set(a, b, r);
  height = h;
}

float Cylinder::volume() const
{
  return (Circle::area() * height);
}

void Cylinder::shapeName()
{
  cout<<"cylinder\n";
}

ostream& operator<<(ostream& cout, const Cylinder& cy)
{
  return cout<<"["<<cy.x<<", "<<cy.y<<"], r = "<<cy.radius<<" h = "<<cy.height;
}





