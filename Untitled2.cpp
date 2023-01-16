#include <iostream>
using namespace std;

class Rectangular{
	private:
		
		//variables required for area calculation
		int length;
		int breath;
	
	public:
		
		//setter function for length
		void setlength(int len){
			length = len
		}
		
		//setter function for breath
		void setbreath(int bth){
			breath = bth;
		}
		
		//getter function for getting lenth
		int getlength(){
			return length;
		}
		
		//getter function for getting breath
		int getbreath(){
			return breath;
		}
		
		//function to calculate area of rectangular
		int getArea(){
			return length * breath;
		}	
};

int main(){
	//create object of Rectangular Class
	Rectangular rec1;
	
	//initialize length using setter function
	rec1.setlength(5);
	
	//initialize breath using setter function 
	rec1.setbreath(8);
	
	//access length using getter function
	rec1.getlength();
	
	//access breath using getter function
	rec1.getbreath();
	
	//calculate area using setarea function
	rec1.getArea();
}
