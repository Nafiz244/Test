#include "nafiz.h"
#include <iostream>

using namespace std;

Nafiz::Nafiz(int a,int b)
: regVar(a),
constVar(b)
{

}
void Nafiz::print()
{
    cout<<"Regular var is:"<< regVar <<" & "<<"Constant Variable is:"<< constVar<<endl;
}
