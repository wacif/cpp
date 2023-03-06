#include <iostream>
using namespace std;

class Employee{
	public:
		string name;
		string company;
		int age;
		
	void introduceYourself(){
		cout<<"Hello my name is "<<name;
		cout<<"\nI,m worked at "<<company;
		cout<<"\nMy age is "<<age<<endl<<endl;
	}
	
	/*
	rule of constructures
	a constructure don't have a return type
	a constructure must be the same name as of class
	a constructure must be public
	*/
	
	Employee(string Name, string Company, int Age){
		name = Name;
		company = Company;
		age = Age;
	}
};

int main(){
	/*
	Employee employee1;		//creation of the object
	employee1.name = "Wasif";
	employee1.company = "Own Company";
	employee1.age = 23;
	employee1.introduceYourself();
	Employee employee2;
	employee2.name = "Bunny";
	employee2.company = "Amazon";
	employee2.age = 25;
	employee2.introduceYourself();
	*/
	
	Employee employee3 = Employee("Atif","Netsole",19);		//envoking constructure
	employee3.introduceYourself();
}
