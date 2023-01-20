#include <iostream>
#include <string>
using namespace std;
class binary
{
    string a;

public:
    void read();
    void chk_bin();
    void ones();
};
void binary::read()
{
    cout << "Enter a binary number:" << endl;
    cin >> a;
    chk_bin(); // other functions of same class can be accessed directly.
}
void binary::chk_bin()
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '0' && a[i] != '1')
        {
            cout << "Incorrect format!" << endl;
            exit(0);
        }
    }
}
void binary::ones()
{
    cout << "Ones complement of the entered binary number is: " << endl;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '0')
        {
            a[i] = '1';
        }
        else if (a[i] == '1')
        {
            a[i] = '0';
        }
    }
    cout << a << endl;
}
int main()
{
    binary b;
    b.read();
    b.ones();
}