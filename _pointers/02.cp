//pointer to pointer
#include <stdio.h>

int main(){
	int a = 5;
	int *p;
	p = &a;
	printf("Adress stored at P = %d\n",p);
	printf("Value stored at P = %d\n",*p);
	
	*p = 10;	//derefrencing
	printf("\nAfter Derefrencing.\n");
	printf("Adress stored at P = %d\n",p);
	printf("Value stored at P = %d\n",*p);
	
	int **q;
	q = &p;
	printf("\nPointer to Pointer\n");
	printf("Adress of q = %d\n",q);
	printf("Value of q = %d\n",*q);
	printf("Value of **q = %d\n\n",**q);
	
	int ***w;
	w = &q;
	printf("Pointer W\n");
	printf("Adress of w = %d\n", w);
	printf("Value of w = %d\n",*w);
	printf("**W = %d\n",**w);
	printf("***W = %d\n",***w);
	***w = 50;
	printf("a = %d\n",a);
}
