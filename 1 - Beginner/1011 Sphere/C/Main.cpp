#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){
double volume;
double radius;
scanf("%lf",&radius);
volume = (4.0/3.0)*PI*(pow(radius,3));
printf("VOLUME = %.3lf",volume);
}


