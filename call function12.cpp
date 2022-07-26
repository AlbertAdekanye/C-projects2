#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

int main()

{

sayHi("Mike", 60);
sayHi("Tony", 15);
sayHi("Albert", 18);

	
	return 0;
}

void sayHi(string name, int age){
	cout<< " Hello "<< name << " you are "<< age << endl;
}
