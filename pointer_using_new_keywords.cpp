#include <iostream>
using namespace std;
class shop
{
private:
    int id;
    int price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Id is: " << id << " and price is " << price << endl;
    }
};
int main()
{
    shop *sptr = new shop[4];
    shop *fsptr = sptr;
    for (int i = 0; i < 4; i++)
    {
        cout << "For item number: " << (i + 1) << endl;
        int p, q;
        cin >> p >> q;
        (*(sptr + i)).setData(p, q);
    }
    for (int i = 0; i < 4; i++)
    {
        (*(fsptr + i)).getData();
    }
}