#include <iostream>
using namespace std;
class Rectangle
{
public:
    int a=1;
    int b=1;
    Rectangle()
    {

    }
    Rectangle(int x)
    {
        this->a = x;
        this->b = x;
    } 
    Rectangle(int x, int y)
    {
        this->a = x;
        this->b = y;
    }

    int area ()
    {
        return a*b;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(2,4);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
return 0;
}