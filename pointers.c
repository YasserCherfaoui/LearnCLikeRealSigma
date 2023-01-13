#include<stdio.h>

void main(){
	int a = 10;
	int b = 10;
	int *pointer_a;
	pointer_a = &a;

	
	printf("a is at @ %p with value of 0x%x = %d\n",&a,a,a); 
	printf("b is at @ %p with value of 0x%0x = %d\n",&b,b,b); 
	printf("pointer_a is at @ %p, pointing at @ %p with value of 0x%x = %d\n",&pointer_a,pointer_a,*pointer_a,*pointer_a); 
}
