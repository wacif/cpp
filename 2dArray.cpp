//2d arrays & nested loops
#include <iostream>
using namespace std;

int main(){
	int multiarray[3][2] = {{2,3}, {4,5}, {5,7}};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout<< multiarray[i][j];
			cout<<" ";
		}
		cout<< endl;
	}
	
}
