#include <iostream>
using namespace std;

void sal_Fun(int s){
	s = s + 5000;
	cout<<"This output is from Sal Function "<<s;
}

int main(){
	int sal = 30000;
	sal_Fun(sal);
	cout<<"\nThis output is from Main Function "<<sal;
	
	return 0;
}
