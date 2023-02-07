// Pointer Arithmetic
#include <stdio.h>

int main(){
	int a = 10;
	int *p;
	p = &a;
	
	//pointer arithmetic
	printf("Adress P is %d\n",p);	//suppose adress is 2000
	printf("Value at adress p is %d\n",*p);
	printf("size of integer variable is %d bytes \n", sizeof(int));
	printf("Adress p+1 is %d\n",p+1);	// what will be the output?
	printf("Value at adress p+1 is %d\n", *(p+1));
	printf("Adress of p+2 is %d\n",p+2);
}
