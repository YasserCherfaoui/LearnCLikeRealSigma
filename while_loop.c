#include<stdio.h>

void main() {
	int counter = 5;
	while (counter>0) {
		printf("We're on %d\n",counter);
		counter = counter - 1;
	}
	printf("the value of counter: %d\n", counter);
	while (counter<5) {
		printf("We moved up to %d\n",counter);
		counter++;
	}
}
