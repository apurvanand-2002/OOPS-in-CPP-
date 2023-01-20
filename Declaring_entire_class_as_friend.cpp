#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int getRealSum(Complex, Complex);
};
class Complex
{
private:
    int a;
    int b;
    friend class Calculator; // #change

public:
    void setComplex(int A, int B);
    void getComplex();
};
void Complex::setComplex(int A, int B)
{
    a = A;
    b = B;
}
void Complex::getComplex()
{
    cout << a << " + " << b << "i" << endl;
}
int Calculator::getRealSum(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    Complex c1, c2;
    c1.setComplex(1, 2);
    c1.getComplex();
    c2.setComplex(3, 4);
    c2.getComplex();
    Calculator calc;
    int ans = calc.getRealSum(c1, c2);
    cout << ans << endl;
}