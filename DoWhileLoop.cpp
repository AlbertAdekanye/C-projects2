#include <iostream>

using namespace std;

int main()
{
	int secretNum = 7;
	int guess;
	do{
		cout<< "Enter guess: ";
		cin>> guess;
		cout<< "You Win!";
	}while(secretNum != guess);
	
	
	return 0;
}
