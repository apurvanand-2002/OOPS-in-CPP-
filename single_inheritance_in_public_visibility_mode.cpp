#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
};
void Base::setData()
{
    data1 = 101;
    data2 = 102;
}
int Base::getData1()
{
    return data1;
}
class Derived : public Base
{
    int data3;

public:
    void set()
    {
        data3 = (getData1() * data2);
    }
    int getdata3()
    {
        return data3;
    }
};
int main()
{
    Derived d;
    d.setData();
    d.set();
    cout << d.getData1() << endl;
    cout << d.data2 << endl;
    cout << d.getdata3() << endl;
}