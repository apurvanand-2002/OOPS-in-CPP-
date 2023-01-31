#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ofstream out("fh.txt");
    // out << "From Filehandling.cpp to fh.txt";
    // out.close();

    // string received;
    // ifstream in("fh.txt");
    // getline(in, received);
    // cout << received << endl;
    // cout << "HELLO<PRINTED!";

    ofstream out;
    out.open("fh.txt");
    out << "I am Apurv Anand" << endl;
    out << "I am in second year." << endl;
    out.close();

    string receive1, receive2;
    ifstream in;
    in.open("fh.txt");
    // getline(in, receive1);
    // getline(in, receive2);
    // cout << receive1 << endl;
    // cout << receive2 << endl;
    while (in.eof() == 0)
    {
        getline(in, receive1);
        cout << rec eive1 << endl;
    }

    return 0;
}