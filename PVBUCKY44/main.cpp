#include <iostream>
#include "nafiz.h"

using namespace std;

int main()
{
    Nafiz nafizObj;
    nafizObj.printNfz();

    const Nafiz constObj;
    nafizObj.printNfz2();
}
