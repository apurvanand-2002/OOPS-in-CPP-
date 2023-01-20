#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int input)
    {
        data1 = input;
        cout << "data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int input)
    {
        data2 = input;
        cout << "data2 is " << data2 << endl;
    }
};
class derived : public Base1, public Base2
{
    int a;
    int b;
    // here, we have declared 'a' before than 'b' so, whenever, we will have to use their values first, 'a' is to be
    //  declared then 'b'.
public:
    derived(int p, int q, int r, int s) : Base1(p), Base2(q), a(r), b(s)
    {
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};
int main()
{
    derived d(1, 2, 3, 4);
}