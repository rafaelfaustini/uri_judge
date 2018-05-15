#include <stdio.h>
#define PI 3.14159;

int main(void){
	float r,a;
	scanf("%f", &r);
	a= r*r;
	a*= PI;
	printf("A=%.4f",a);
}

