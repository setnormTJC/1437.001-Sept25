#pragma once


#include <iostream> 
#include <vector>

using std::string;

using std::vector; 

//specification file
class Book
{
private: 
	string title;

	vector<string> authors; 

public: 
	string getTitle();
	void setTitle(string someTitle);
	auto getAuthors(); 

	//default constructor of Book class: 
	Book();
	Book(string someBookName, vector<string> someAuthorNames);
	//void addAuthor(); 

};

