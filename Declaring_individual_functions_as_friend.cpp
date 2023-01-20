#include <iostream>
using namespace std;
class Complex; // this forward declaration is necessary.
class Calculator
{
public:
    int SumRealParts(Complex, Complex);
    int SumCompParts(Complex, Complex);
};
class Complex
{
private:
    int a;
    int b;
    friend int Calculator::SumRealParts(Complex, Complex);
    friend int Calculator::SumCompParts(Complex, Complex);

public:
    void setComplex(int A, int B)
    {
        a = A;
        b = B;
    }
    void getComplex();
};
void Complex::getComplex()
{
    cout << a << "+" << b << "i" << endl;
}
int Calculator::SumRealParts(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::SumCompParts(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    Complex c1, c2;
    c1.setComplex(1, 2);
    c2.setComplex(7, 4);
    Calculator calc;
    int ans = calc.SumRealParts(c1, c2);
    cout << ans << endl;
    int ans2 = calc.SumCompParts(c1, c2);
    cout << ans2 << endl;
}