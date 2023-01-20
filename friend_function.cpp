#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    void setComplex(int A, int B);
    void getComplex();
    friend Complex SumComplex(Complex P, Complex Q);
};
void Complex::setComplex(int A, int B)
{
    a = A;
    b = B;
}
void Complex ::getComplex()
{
    cout << "Complex is " << a << " + " << b << "i" << endl;
}
Complex SumComplex(Complex P, Complex Q)
{
    Complex o3;
    o3.a = (P.a) + (Q.a);
    o3.b = (P.b) + (Q.b);
    return o3;
}
int main()
{
    Complex o1, o2, o3;
    o1.setComplex(1, 2);
    o1.getComplex();
    o2.setComplex(3, 4);
    o2.getComplex();
    o3 = SumComplex(o1, o2);
    o3.getComplex();
}
// We declare 'friend' function inside the public section of the object but this does not
// mean that 'friend' function is now the part of the public section of the class.
// 'friend' declaration only allows a function to access the private members of a class
// which it is not a part of.