#include<stdio.h>

void main(){
	int age;

	age = 18;
	if (age >= 18) {
		printf("You're an adult\n");
		printf("I'm out\n");
	}else if(age == 18){
		printf("You're a step further...\n");
	}
	else{
		printf("You're a minor\n");
		printf("Come back when you are 18\n");		
	}
}

