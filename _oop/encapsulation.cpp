//encapsulation
#include <iostream>
using namespace std;

class Employee{
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
};



int main(){
	Employee employee1 = Employee("Jhon", "Amazon", 45);
	employee1.introduceYourself();
	employee1.setAge(50);
	cout<<"The updated age of Employee 1 is "<<employee1.getAge();
}
