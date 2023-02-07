#include <stdio.h>

int main(){
	int a; 
	int *p;
	a = 4;
	
	p = &a; // &a = aderss of a
	printf("Adress of P is : %d\n",p);
	printf("Value at P is : %d\n",*p); //*p gets the value at adress pointed by p i.e a
	printf("the adress of a is : %d\n",&a); //we will get the adress of a
	
	*p = 13; // derefrencing
	printf("Value of a after derefrencing is : %d\n",a);
	
	int b = 20;
	
}
