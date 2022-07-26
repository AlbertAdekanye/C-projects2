#include <iostream>

using namespace std;

// adding a new data type
class Book{
	public:
		string title;
		string auther;
		int pages;
		
		Book(string aTitle, string aAuther, int aPages){
			title = aTitle;
			auther = aAuther;
			pages = aPages;
		}

};

int main()
{
// check conditions

	Book book1("Harry potter", "JK Rowling", 500 );
   	Book book2("Lord of the rings", "Tolekin",  700 );
 
    cout<< book1.title << endl;
    cout<< book2.title << endl;

	return 0;
 } 
