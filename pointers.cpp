//pointers
#include <iostream>
using namespace std;

int main(){
	string bookName = "The Book";
	string authorName = "The Author";
	int pages = 300;
	
	string *pbookName = &bookName;
	cout<< pbookName<<endl;
	cout<< *pbookName<<endl;
		
	cout<< &bookName<<endl;
	cout<< &authorName<<endl;
	cout<< &pages<<endl;
}
