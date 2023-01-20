#include <iostream>
using namespace std;
class Base1
{
private:
    int data1;

public:
    Base1(int input)
    {
        data1 = input;
        cout << "Inside constructor of Base-1" << endl;
    }
    void getData1()
    {
        cout << "Base-1 data is: " << data1 << endl;
    }
};
class Base2
{
private:
    int data2;

public:
    Base2(int input)
    {
        data2 = input;
        cout << "Inside constructor of Base-2" << endl;
    }
    void getData2()
    {
        cout << "Base-2 data is: " << data2 << endl;
    }
};
class Derived : public Base1, public Base2 // if this order changes then order of execution changes
{
private:
    int data3, data4;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "Inside constructor of Derived" << endl;
    }
    void getData()
    {
        cout << "Derived data3 is " << data3 << endl;
        cout << "Derived data4 is " << data4 << endl;
    }
};
/*Always first Base classes will be executed and then the derived class. In Base classes also,
first virtual base classes will be executed and then non-virtual base classes will be executed and that non-vitual
base class will be executed before which has been declared before.*/
int main()
{
    Derived d(1, 2, 3, 4);
    d.getData1();
    d.getData2();
    d.getData();
}