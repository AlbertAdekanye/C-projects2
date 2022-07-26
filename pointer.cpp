#include <iostream>

using namespace std;

/*
cout << "Age: " << &age << endl;
cout << "Gpa: " << & gpa << endl;
cout << "Name: " << &name << endl;
*/

int main()
{
	
	// create a pointer variable
	int age = 19;
	int *pAge = &age;
	double gpa = 2.7;
	double *pGpa = &gpa;
	string name = "Albert";
	string *pName = &name;
	
	cout<< *pAge;
	
/*	int age = 19;
	double gpa = 2.7;
	string name = "Albert";
	
	// print all memory address
/*	cout << "Age: " << &age << endl;
	cout << "Gpa: " << & gpa << endl;
	cout << "Name: " << &name << endl;
*/
	
    
//	cout << &age;	
	
	return 0;
 } 
