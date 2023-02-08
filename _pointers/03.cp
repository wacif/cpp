//call by refrence
#include <stdio.h>

void increment(int a){
	a = a + 1;
	printf("Adress of A inside the increment function = %d\n",&a);
	printf("Value of A inside increment function = %d\n",a);
}
void pointerf(int *b){
	*b = (*b) + 1;
	printf("Adress of B inside the pointerf function = %d\n",b);
	printf("Value of B inside the pointerf function = %d\n",*b);
}

int main(){
		int a = 10;
		int b = 20;
		printf("\n\n------Call By Value------\n\n");
		increment(a);
		printf("\nAdress of A inside the main function = %d\n",&a);
		printf("Value of A inside the main function = %d\n",a);
		
		printf("\n\n------Call By Reference------\n\n");
		
		pointerf(&b);
		printf("\nAdress of B inside the main function = %d\n",&b);
		printf("Value of B inside the main function = %d\n",b);
		
		
		
}
