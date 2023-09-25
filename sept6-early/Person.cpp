#include "Person.h"


void Person::setName(string nameFromMain)
{
	//validity checks? 
	//if (nameFromMain.length() > 100) { cout << "that's too long!" << endl;  }
	name = nameFromMain;
}

void Person::setAge(int ageFromMain)
{
	age = ageFromMain; 
}

void Person::setOccupation(string occupationFromMain)
{
	occupation = occupationFromMain;
}

int Person::getAge()
{
	return age; 
}

string Person::getName()
{
	return name; 
}
/*std::cout*/ 
string Person::getOccupation()
{
	return occupation;
}

Person::Person()
{
	cout << "Default constructor called!" << endl; 
	occupation = "Dancer!";
	name = "NotSeth";
	age = 35; 
}