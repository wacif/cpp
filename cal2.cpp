#include <iostream>
using namespace std;

int main(){
	
	int num1, num2;
	char op;

	cout<<"Enter the 1st Number: ";
	cin>>num1;
	cout<<"Enter the Operator: ";
	cin>>op;
	cout<<"Enter the 2nd Number: ";
	cin>>num2;
	
	
	switch(op){
		case '+':
			cout<< num1 << " + " << num2 << " = " << num1 + num2;
			break;
		case '-':
			cout<< num1 << " - " << num2 << " = " << num1 - num2;
			break;
		case '*':
			cout<< num1 << " * " << num2 << " = " << num1 * num2;
			break;
		case '/':
			cout<< num1 << " / " << num2 << " = " << num1 / num2;
			break;
		
		default:
			cout<<"Please enter the valid operator.";
			break;	
			
	}
	

	return 0;
}

