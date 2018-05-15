#include <stdio.h>
int main(void){
float a,b,c;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
a*= 2;
b*=3;
c*=5;
a+= b+c;
printf("MEDIA = %.1f\n",a/10);
}


