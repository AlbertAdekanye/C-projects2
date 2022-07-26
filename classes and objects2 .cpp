#include <iostream>

using namespace std;

// adding a new data type

class Phone{
	public:
		string name;
		int storage;
		int ram;
};
	
int main()
{
// check conditions

Phone phone;
	phone.name = "tecno";
	phone.storage = 16;
    phone.ram = 1;
    
    cout<< phone.storage << endl;
    

	return 0;
 } 
