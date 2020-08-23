#include <iostream>
#include "nafiz.h"

using namespace std;

int main()
{
    Nafiz nafizObj;
    Nafiz *nafizPointer= &nafizObj;

    nafizObj.printCrap();

    nafizPointer->printCrap();
    return 0;
}
