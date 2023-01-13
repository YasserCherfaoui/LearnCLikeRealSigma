#include<stdio.h>
#include<stdlib.h>
float square(float number){
	return number * number;
}

void greeter(char name[]){
	printf("Hello, %s\n",name);
}

void main(int argc, char *argv[]){
	greeter(argv[1]);
	printf("The square of %d is %.2f\n",(int) atof(argv[2]),square(atof(argv[2])));
	for(int i=0;i<argc;i++)
		printf("%s\n",argv[i]);
}
