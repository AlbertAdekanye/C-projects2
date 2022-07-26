#include <iostream>

using namespace std;

// adding a new data type

class movie {
	private: string rating;
	
	public:
	string title;
	string director;

	
	movie(string aTitle, string aDirector, string aRating){
		title = aTitle;
		director = aDirector;
		setRating(aRating);
	}
	
	void setRating(string aRating){
		if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "NR"){
			rating = aRating;
		}else{
			rating = "NR";
		}
		
	}
	
	string getRating(){
		return rating;
	}
};
	
int main()
{
movie avengers("The Avengers", "Jose Whedon", "PG-13");

cout<< avengers.getRating();

	return 0;
 } 
