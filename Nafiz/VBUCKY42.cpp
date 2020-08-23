#include<iostream>
using namespace std;
class Nafiz
{
public:
    Nafiz();
    void printCrap();
};
Nafiz::Nafiz()
{

}
void Nafiz::printCrap()
{
    cout<<"IS CORONA CURED"<<endl;
}
int main()
{
    Nafiz nafizObj;
    Nafiz *nafizPointer= &nafizObj;

    nafizObj.printCrap();

    nafizPointer->printCrap();
}
