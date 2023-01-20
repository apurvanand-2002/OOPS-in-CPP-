#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex(void);
    void printCNum();
};
Complex::Complex(void)
{
    a = 0;
    b = 0;
}
void Complex::printCNum()
{
    cout << "Number is " << a << "+i" << b << endl;
}
int main()
{
    Complex c;
    c.printCNum();
}