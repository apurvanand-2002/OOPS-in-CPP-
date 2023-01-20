#include <iostream>
using namespace std;
class student
{
protected:
    int id;

public:
    void setId(int inid)
    {
        id = inid;
    }
    int getId()
    {
        return id;
    }
};
class Test : virtual public student
{
protected:
    int maths, physics;

public:
    void setMaths(int m)
    {
        maths = m;
    }
    void setPhysics(int p)
    {
        physics = p;
    }
    int getMaths()
    {
        return maths;
    }
    int getPhysics()
    {
        return physics;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void setScore(int s)
    {
        score = s;
    }
    int getScore()
    {
        return score;
    }
};
class result : public Test, public sports
{
protected:
    int final;

public:
    void setResult()
    {
        final = (getMaths() + getPhysics() + getScore()) / 3;
    }
    int getFinal()
    {
        return final;
    }
};
int main()
{
    result r;
    r.setId(190);
    r.setMaths(90);
    r.setPhysics(94);
    r.setScore(100);
    r.setResult();
    cout << "ID : " << r.getId() << endl;
    cout << "Maths: " << r.getMaths() << " Physics: " << r.getPhysics() << " Score: " << r.getScore() << endl;
    cout << "Result is " << r.getFinal() << endl;
}