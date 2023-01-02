#include<stdio.h>

void main() {
	int i;

	for(i=5;i>0;i--) {
		printf("We're on %d\n", i);
	}
	printf("The value of i = %d\n",i);
	for(i=0;i<5;i++){
		printf("We moved up to %d\n",i);
	}
}
