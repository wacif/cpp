//classes and objects
#include <iostream>
using namespace std;

class Book{
	public:
		string bookName;
		string author;
		int pages;
		
		//constructor
		Book(string abookName, string aauthor, int apages){
			bookName = abookName;
			author = aauthor;
			pages = apages;
		}
};

int main(){
	//objects
	Book book1("The deadly Hallows", "JK Rowling", 500);
	Book book2("This is Book 2", "This is Author", 345);
	
	//Book book1;
	//book1.bookName = "The deadly Hollows";
	//book1.author = "JK Rowling";
	//book1.pages = 500;
	
	cout<<book1.pages<<endl;
	cout<<book2.author<<endl;
	
	return 0;
}
