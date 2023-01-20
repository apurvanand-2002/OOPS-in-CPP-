#include <iostream>
using namespace std;
class Data
{
private:
    int a, b;

public:
    Data() {}           // default constructor
    Data(int p, int q); // parameterized constructor
    Data(Data &obj);    // copy constructor
};
Data::Data(int p, int q)
{
    a = p;
    b = q;
    cout << "VALUE: " << a << " and " << b << endl;
}
Data::Data(Data &obj)
{
    a = obj.a;
    b = obj.b;
    cout << "INSIDE COPY CONSTRUCTOR!" << endl;
    cout << "VALUE: " << a << " and " << b << endl;
}
int main()
{
    // copy constructor will only be invoked iff we make a new class.
    Data d(1, 2);
    Data d1(7, 8);
    Data d2(d1);
    Data d3 = d1;
    Data d4;
    d4 = Data(9, 8);
}