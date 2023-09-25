#include "Book.h"

#include<string>
//implementation file

//<chrono> //Algorithm analysis 

string Book::getTitle()
{
	return title; //constructor function for the string class!
}

auto Book::getAuthors()
{
	return 1;
}

Book::Book()
{
	std::cout << "Called default constructor!" << std::endl; 

	title = "TBD";
	authors = { "Author name 1", "Author 2" };
}

Book::Book(string someBookName, vector<string> someAuthorNames)
{
	title = someBookName;
	authors = someAuthorNames; 
}

void Book::setTitle(string someTitle)
{
	while (someTitle.length() > 100)
	{
		std::cout << "You can't do that - title too long!" << std::endl; 
		std::cout << "Re-enter title (less than 100 chars):" << std::endl;
		getline(std::cin, title);
	}
	title = someTitle; 
}
