#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x,Birthday bo)
: name(x), dataOfBirth(bo)
{
}

void People::printInfo(){
	cout << name <<" "<< "was born on"<<" ";
	dataOfBirth.printDate();
}


