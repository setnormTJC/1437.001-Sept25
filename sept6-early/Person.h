#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private: //optional (default) 
	string name; 
	int age; 
	string occupation; 

public: 
	void setName(string); //function declaration 

	void setAge(int); 

	void setOccupation(string); 
	
	string getName();

	int getAge();

	string getOccupation();

	Person(); 

};

