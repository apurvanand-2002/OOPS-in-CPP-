#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex(void);
    Complex(int, int);
    void printComplex();
};
Complex::Complex(void)
{
    a = 0;
    b = 0;
}
Complex::Complex(int a1, int b1)
{
    a = a1;
    b = b1;
}
void Complex::printComplex()
{
    cout << a << " + i " << b << endl;
}
int main()
{
    Complex c(1, 2), c1;
    c.printComplex();
    c1.printComplex();
}