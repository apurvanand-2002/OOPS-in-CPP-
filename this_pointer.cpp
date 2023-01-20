// this pointer points to the object at which it is refering.
#include <iostream>
using namespace std;
class items
{
private:
    int id;
    int price;

public:
    void set(int id, int price)
    {
        this->id = id;
        this->price = price;
    }
    void get()
    {
        cout << "Id: " << id << " and price: " << price << endl;
    }
};
int main()
{
    items *it = new items[5];
    items *itend = it;
    for (int i = 0; i < 5; i++)
    {
        cout << "For item- " << (i + 1) << ":" << endl;
        int p, q;
        cin >> p >> q;
        (*(it + i)).set(p, q);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "For item-" << (i + 1) << endl;
        (*(itend + i)).get();
    }
}