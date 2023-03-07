//abstraction
#include <iostream>
using namespace std;

class AbstractEmployee{
	virtual void AskforPromotion() = 0;
};

class Employee:AbstractEmployee{
	private:
		string name;
		string company;
		int age;
	public:
		//setter
		void setName(string Name){
			name = Name;
		}
		//getter
		string getName(){
			return name;
		}
		
		void setCompany(string Company){
			company = Company;
		}
		string getCompany(){
			return company;
		}
		
		void setAge(int Age){
			age = Age;
		}
		int getAge(){
			return age;
		}
		
		
	void introduceYourself(){
		cout<<"My Name is "<<name;
		cout<<"\nI worked at "<<company;
		cout<<"\nMy age is "<<age<<endl<<endl;
	}
	//constructure
	Employee(string Name, string Company, int Age){
		name = Name;
		company = Company;
		age = Age;
	}
	
	void AskforPromotion(){
		if(age >= 30){
			cout<<"Congratulation's "<<name<<" you got Promoted."<<endl;
		}
		else{
			cout<<"Sorry! "<<name<<" you are not eligible for promotion."<<endl;
		}
	}
};



int main(){
	Employee employee1 = Employee("Jhon", "Amazon", 45);
	Employee employee2 = Employee("Nobita", "Google", 25);
	
	employee1.AskforPromotion();
	employee2.AskforPromotion();
}
