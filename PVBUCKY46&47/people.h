#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include "Birthday.h"
using namespace std;

class People
{
	public:
		People(string x,Birthday bo);
		void printInfo();
	private:
		string name;
		Birthday dataOfBirth;
};

#endif // PEOPLE_H
