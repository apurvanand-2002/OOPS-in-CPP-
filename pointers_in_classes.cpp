#include <iostream>
using namespace std;
class Complex
{
private:
    int real, complex;

public:
    void setnums(int p, int q)
    {
        real = p;
        complex = q;
    }
    void getnums()
    {
        cout << "Real part is " << real << endl;
        cout << "Imaginary part is " << complex << endl;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
    (*(ptr)).setnums(10, 23);
    (*(ptr)).getnums();
    Complex *ptr2 = new Complex;
    (*(ptr2)).setnums(9, 99);
    (*(ptr2)).getnums();
}