#include <iostream>

#include<fstream>

#include<vector>
 
#include"Book.h"
#include "Person.h"

using namespace std;


/// <summary>
/// Some details about this class ...
/// </summary>
//class Queen
//{ 
//private: 
// //ENCAPSULATION 
////member vars: 
//	string not_name = "TBD";
//	string queendom = "ALSO TBD";
//	int age = -99; //heteregenous data structure (because it consists of more than one type) 
//
////member FUNCTIONS!
//public:
//	/// <summary>
//	/// This function sets the age!
//	/// </summary>
//	/// <param name="agePrime">Don't pass in strings! </param>
//	void setAge(int agePrime);
//
//	//"getter"/accessor 
//	int getAge() const;
//
//	//both the getter and the setter here are called "member functions"
//	 
//	//() -> the function call operator (we'll "overload" later)
//	Queen()  //This "constructor" function takes ZERO args ->
//				//and is called the "default constructor"
//	{
//		cout << "Default constructor called!" << endl; 
//		not_name = "some default name"; 
//		queendom = "some default queendom";
//		age = 0;
//	}
//
//	Queen(string suppliedName, string suppliedQueendom, int suppliedAge)
//	{
//		cout << "Constructor function with parameters was called" << endl;
//		not_name = suppliedName; 
//		queendom = suppliedQueendom; //ERROR!!!!
//		age = suppliedAge; 
//	}
//
//
//};

struct Point
{
	//public
	int x, y; 

	Point(int someX, int someY)
	{
		x = someX; 
		y = someY; 
	}
};

void printPointsList(vector<Point> points)
{
	for (Point& point : points)
	{
		cout << point.x << "\t" << point.y << endl; 
	}
}

int main()
{
	//Point p1{ 4, 17 };
	//cout << p1.x << "\t" << p1.y << endl; 


	//listOfPoints.push_back(p1);

	//listOfPoints.push_back(Point{ -77, 1234 });

	//printPointsList(listOfPoints);

	ifstream inputFile{ "inputFile.txt" };


	if (!inputFile)
	{
		cout << "FILE NOT FOUND!" << endl;
	}

	//cin >> 
	//	getline()
	//int input; 

	int numberFromFile; 
	vector<Point> listOfPoints; //in C++ vector means an array that can change its size

	while (!inputFile.eof())
	{
		int x, y; 
		inputFile >> x >> y;
		Point p{ x, y };
		listOfPoints.push_back(p); 
		//inputFile >> numberFromFile;
		//cout << numberFromFile << endl; 
	}

	printPointsList(listOfPoints);
	//cout << input << endl; 
	


	//////cout << "Hello" << endl; //:: is the SCOPE RESOLUTION OPERATOR 
	//////Declares (makes space in RAM for) a variable of type Queen named q1

	////Queen q1{ "Susan", "France", 12};
	////int newAge = 45; 
	////cout << sizeof(q1) << endl;
	//////q1.age = q1.age - 999; 


	////

	////Book gulliversTravels; //big-endian and little-endian 
	////
	////cout << gulliversTravels.getTitle() << endl; 


	//Person notMe;

	//cout << "age: " << notMe.getAge() << endl;
	//cout << "name: " << notMe.getName() << endl; 
	//cout << "occupation: " << notMe.getOccupation() << endl; 

	//notMe.setAge(142); 
	//notMe.setName("not me");
	//notMe.setOccupation("teacher");

	//cout << "\n\nafter calling setter functions (Irish setter):" << endl; 
	//cout << "age: " << notMe.getAge() << endl;
	//cout << "name: " << notMe.getName() << endl;
	//cout << "occupation: " << notMe.getOccupation() << endl;


	return 0;
}

//int Queen::getAge() const
//{
//	return age;
//}
//
//void Queen::setAge(int agePrime)
//{
//	if (agePrime < 110)
//	{
//		cout << "Okay - that's a legitimate age" << endl;
//		age = agePrime;
//	}
//
//	else
//	{
//		cout << "That's not a legitimate age " << endl;
//	}
//}

