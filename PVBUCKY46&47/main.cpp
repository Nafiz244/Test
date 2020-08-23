#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
	Birthday birthObj(19,10,2001);

	People Nafiz("Fahad the King of Saudi Arab",birthObj);
	Nafiz.printInfo();

}

