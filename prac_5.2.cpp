// dynamic memory allocation
#include <iostream>
using namespace std;
class circle
{
    static int count;
    float r;
    float area;

public:
// constructors -> name of constructors is same as the name of class
//              -> they are called automatically                
    circle() // default constructor -> dont have parameters 
    {
        r = 1;
        area = 3.14 * r * r;
        count++;
    }
    circle(int x) // parametarized constructor -> can have one and more than one arguments
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
    ~circle() // destructor -> this are called automatically in static memory alloaction and
    // explicitly in dynamic memory alloaction
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
    class circle *c1, *c2, *c3;
    c1 = new circle;
    c1->display();
    c2 = new circle(20);
    c2->display();
    c3 = new circle(*c1);
    c3->display();
    delete c1;
    delete c2;
    delete c3;

    return 0;
}