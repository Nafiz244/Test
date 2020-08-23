#include<iostream>
using namespace std;

class Abc
{
    int i;
    public:
    Abc()
    {
        i=0;
        cout << "Nafiz"<<" ";
    }
    ~Abc()
    {
        cout <<" "<< "Fahad";
    }
};

void f()
{
    static Abc obj;
}

int main()
{
    int x=0;
    if(x==0)
    {
        f();
    }
    cout << "And";
}
