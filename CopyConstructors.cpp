#include <iostream>
using namespace std;
class Data
{
private:
    int a, b;

public:
    Data();             // default constructor
    Data(int p, int q); // parameterized constructor
    Data(Data &obj);    // copy constructor
};
Data::Data()
{
    a = 0;
    b = 0;
    cout << "In default constructor, " << a << " and " << b << endl;
}
Data::Data(int p, int q)
{
    a = p;
    b = q;
    cout << "In parameterized constructor, " << a << " and " << b << endl;
}
Data::Data(Data &obj)
{
    a = obj.a;
    b = obj.b;
    cout << "In copy constructor, " << a << " and " << b << endl;
}
int main()
{
    Data d1;
    Data d2(1, 2);
    Data d3(d2);
}
// constructor does not return any value.