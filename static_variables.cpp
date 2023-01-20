#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    static int count;

public:
    void setId()
    {
        cout << "Enter ID:" << endl;
        cin >> id;
        count++;
    }
    void getId()
    {
        cout << "Id of the employee is " << id << " and count is " << count << endl;
    }
    static int getCount()
    {
        cout << "Count is " << count << endl;
    }
};
int Employee::count; // we must redeclare 'count' here.

int main()
{
    Employee one, two, third;
    one.setId();
    one.getId();
    one.getCount();
    two.setId();
    two.getId();
    two.getCount();
}
// We need to use 'count' with static ,otherwise, for each object , count will be
// initialized from '0' .Also, when we use static, we need to declare the variable
// again at the end like, we declare for the functions.

// A static function can only access 'static' variables in it.