#include <iostream>
#include <string.h>
using namespace std;

#define MAX_CHAR 30

//class definition
class person
{
	//private data members
	private:
		char name [MAX_CHAR];
		int age;

	//public member functions
	public:
		//function to get name and age
		void get(char n[], int a)
		{
			strcpy(name , n);
			age = a;
		}

		//function to print name and age
		void put()
		{
			cout<< "Name: " << name <<endl;
			cout<< "Age: " <<age <<endl;
		}
};

//main function
int main()
{
	//creating an object of person class
	person PER;

	//calling member functions
	PER.get("Nafiz Fahad", 18);
	PER.put();

	return 0;
}
