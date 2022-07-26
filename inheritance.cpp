#include <iostream>
using namespace std;

class chef{
	public: 
	void makeChicken(){
		cout<< "The chef makes chicken" <<endl;
	}
	void makeSalad(){
		cout<< "The chef makes salad "<<endl;
	}
	void makespecialDish(){
		cout<< "The chef makes bbq ribs" <<endl;
	}
};
//inheritance(create another class)
class ItalianChef: public chef {
	public:
	void makePasta(){
		cout<< "The chef makes pasta" <<endl;
	}
	void makespecialDish(){
		cout<< "The chef makes chicken pram" <<endl;
	}
};
int main()
{
	chef chef;
	chef.makespecialDish();
	
	ItalianChef italianChef;
	italianChef.makespecialDish();
	
	return 0;
}
