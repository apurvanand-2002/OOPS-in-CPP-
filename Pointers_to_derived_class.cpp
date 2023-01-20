#include <iostream>
using namespace std;
class Base
{
public:
    int baseData;
    void displayBase()
    {
        cout << "Base data is: " << baseData << endl;
    }
};
class Derived : public Base
{
public:
    int derivedData;
    void displayDerived()
    {
        cout << "Base data is: " << baseData << endl;
        cout << "Derived data is: " << derivedData << endl;
    }
};
int main()
{
    Base *basePointer;
    Base b;
    Derived d;
    /*A base pointer can point on the derived class but it will only be able to access only those parts which
    derived class has inherited from base class.
    Otherwise , make a derived class pointer, it will be able to access all the functions and properties
    of the derived class.*/
    basePointer = &d;
    (*(basePointer)).baseData = 1;
    (*(basePointer)).displayBase();
    Derived *derivedPointer;
    derivedPointer = &d;
    (*(derivedPointer)).baseData = 9;
    (*(derivedPointer)).derivedData = 2;
    (*(derivedPointer)).displayDerived();
}