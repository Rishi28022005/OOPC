// static memory allocation
#include <iostream>
using namespace std;
class circle
{
    static int count;
    float r;
    float area;

public:
    circle() // default constructor
    {
        r = 1;
        area = 3.14 * r * r;
        count++;
    }
    circle(int x) // parametarized constructor
    {
        r = x;
        area = 3.14 * r * r;
        count++;
    }
    circle(circle &s) // copy constructor
    {
        r = s.r;
        area = 3.14 * r * r;
        count++;
    }
    void display()
    {
        cout << "circle area of radius " << r << " is = " << area;
        cout << endl;
    }
    int call()
    {
        return count;
    }
    ~circle() // destructor
    {
        cout << "one object is deleted" << endl;
        count--;
        cout << "total active object are " << call() << endl;
        // cout<<"destructor is called"<<endl;
    }
};
int circle ::count = 0;
int main()
{
    circle c1; // default constructor is called
    c1.display();
    circle c2(20); // parameterized constructor is called
    c2.display();
    circle c3(c1); // copied constructor is called
    c3.display();

    return 0;
}