#include <iostream>
using namespace std;
class Base1
{
protected:
    int data1;

public:
    int greet()
    {
        cout << "HELLO!" << endl;
    }
};
class Base2
{
protected:
    int data2;

public:
    int greet()
    {
        cout << "How are you?" << endl;
    }
};
class multiple_inheritance : public Base1, public Base2
{
private:
    int data;

public:
    void greet()
    {
        Base2::greet();
    }
};
int main()
{
    multiple_inheritance m;
    m.greet();
}
/*Here, we have resolved the ambiguity by the use of scope resolution operator.*/