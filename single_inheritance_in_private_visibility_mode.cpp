#include <iostream>
using namespace std;
class Base
{
private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
};
void Base::setdata()
{
    data1 = 101;
    data2 = 102;
}
int Base::getdata1()
{
    return data1;
}
class Derived : private Base
{
    int data3;

public:
    void setData3()
    {
        setdata();
        data3 = (data2 * getdata1());
    }
    int getData3()
    {
        return data3;
    }
};
int main()
{
    Derived d;
    d.setData3();
    cout << d.getData3() << endl;
}