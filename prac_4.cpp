#include <iostream>
#include <iomanip>
using namespace std;
// function for area of circle
void area(int a)
{
    cout << "enter radius of circle :";
    cin >> a;
    cout << "area of circle =" << 3.14 * a * a << endl;
}
// area of rectangle
void area(int a, int b)
{
    cout << "enter length of rectangle :";
    cin >> a;
    cout << "enter width of rectangle :";
    cin >> b;
    cout << "area of rectangel =" << 2 * (a + b) << endl;
}
// area of cuboid
void area(int a, int b, int c)
{
    cout << "enter height of cubiod :";
    cin >> a;
    cout << "enter width of cuboid :";
    cin >> b;
    cout << "enter depth of cuboid:";
    cin >> c;
    cout << "area of cuboid =" << 2 * (a * b + b * c + c * a);
}
/*all the user defined fucntion is named as area and
called inside main and best match will be called
---function overloading---
*/
int main()
{
    int a, b, c;
    // function calls
    area(a);
    area(a, b);
    area(a, b, c);
    return 0;
}