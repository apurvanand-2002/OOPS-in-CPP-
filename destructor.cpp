#include <iostream>
using namespace std;
int count = 0;
class number
{
public:
    number()
    {
        count++;
        cout << "Constructing ...object-" << count << endl;
    }
    ~number()
    {
        cout << "Destructing ...object-" << count << endl;
        count--;
    }
};
int main()
{
    cout << "Entering main" << endl;
    number n1;
    {
        number n2, n3;
    }
    cout << "Ending main" << endl;
}
// A destructor neither 'takes' nor 'returns' any value.