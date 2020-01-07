#include <iostream>

using namespace std;


class Time
{
public:
    Time(){min = 0; sec = 0;};
    Time(int m, int s);
    ~Time(){};
    Time& operator++();
    Time& operator++(int);
    void display(void);
    friend ostream& operator<<(ostream &cout, Time &t);

private:
    int min;
    int sec;
};


int main(int argc, char *argv[])
{
    Time t1(13, 38);
    int i;

    for(i=0; i<100; i++)
    {
        cout<<t1++<<endl;    
    }
}


Time::Time(int m, int s)
{
    min = m;
    sec = s;
}

Time& Time::operator++()
{
    Time &t1 = *this;

    if(60 == ++sec)
    {
        sec = 0;
        min++;
    }
    
    return t1;
}

Time& Time::operator++(int)
{
    static Time t;
    Time &t1 = t;
    t1 = *this;
    
    if(60 == ++sec)
    {
        sec = 0;
	min++;
    }
    
    return t1;
}

void Time::display(void)
{
    cout<<min<<":"<<sec<<endl;
}


ostream& operator<<(ostream &cout, Time &t)
{
    cout<<t.min<<":"<<t.sec;

    return cout;
}
