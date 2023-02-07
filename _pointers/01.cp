#include <stdio.h>

int main(){
	int a = 1025;
	int *p;
	p = &a;
	printf("size of integer is %d bytes\n",sizeof(int));
	printf("Adress of P = %d, Value = %d\n",p,*p);
	printf("Adress of P+1 = %d, Value = %d\n",p+1,*(p+1));
	
	char *p0;
	p0 = (char*)p;	//typecating because p0=p gives us a compile time error
	printf("\nsize of char is %d bytes\n",sizeof(char));
	printf("Adress = %d , Value = %d\n",p0,*p0);
	printf("Adress of p0+1 = %d, Value = %d\n\n\n",p0+1,*(p0+1));
	
	//void pointer - Generic pointer
	void *p1;
	p1 = p;
	printf("Adress of void = %d",p1);
}
