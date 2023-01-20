#include <iostream>
using namespace std;
class Employee
{ // base class
private:
public:
    int id;
    int salary;
    Employee(int eid)
    {
        salary = 45;
        id = eid;
    }
    Employee()
    {
        salary = 90;
        id = 0;
    }
};
class Programmer : public Employee // derived class
{
public:
    Programmer(int inid)
    {
        id = inid;
    }
    int num;
    void greet();
};
void Programmer::greet()
{
    cout << "HELLO MAN!" << endl;
}
int main()
{
    Programmer P(23); // inherited class always looks for default constructor to extract
                      // extra information as here we see we have not defined salary of P
                      // but it takes the value from default constructor of base class.
    cout << P.id << endl;
    cout << P.salary << endl;
    P.greet();
}