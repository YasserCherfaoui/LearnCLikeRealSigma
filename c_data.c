#include<stdio.h>
#include<string.h>

void main(){
	int i;
	float f;
	char c;
	i = 1;
	printf("%i\n",i);
	printf("i\n");
	f = 5.23;
	printf("f=\t %.2f\n",f);
	c = 'S';
	printf("c=\t %c\n",c);
	printf("integeres take away %ld bytes from the memory\n",sizeof(int));
	printf("floats take away %ld bytes from the memory\n",sizeof(float));
	printf("char takes away %ld bytes from the memory\n", sizeof(char));

	char slogan[8] = "Sigma";
	printf("our slogan is: %s\n",slogan);

	i = 23;
	f = 3.14;
	c = 'G';
	// slogan = "Gangsta";
	strcpy(slogan, "Gangsta");
	printf("i = %d f = %f c = %c, slogan is %s\n",i,f,c,slogan); 
}

