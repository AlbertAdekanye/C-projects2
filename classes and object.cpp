#include <iostream>

using namespace std;

// adding a new data type

class Book{
	public:
		string title;
		string auther;
		int pages;
};
	
int main()
{
// check conditions

Book book1;
	book1.title = "Harry potter";
	book1.auther = "JK Rowling";
	book1.pages = 500;
	
   Book book2;
    book2.title = "Lord of the rings";
    book2.auther = "Tolekin";
    book2.pages = 700;
    
    cout<< book1.title << endl;
    cout<< book2.title << endl;

	return 0;
 } 
