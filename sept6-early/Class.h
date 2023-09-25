#pragma once

//specification (NOT an "implementation" file) 
class Class
{
private:
	int numberOfStudents = 22; 
	//vector<Student> students; 
	bool isFun = true; 
	double averageGPA = 4.00; 

public: 
	Class(); //declares that a (default) constructor function 
				//is a member of this class named `Class` 

	getNumberOf(); 

	setFocus(int focusLevel);


};

