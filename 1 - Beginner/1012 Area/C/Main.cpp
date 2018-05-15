#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){
double a,b,c;
scanf("%lf %lf %lf",&a,&b,&c);
double triangle;
triangle = (a*c)/2;
double circle;
circle = PI * pow(c,2);
double trapezium;
trapezium = ((a+b)*c)/2;
double square;
square = pow(b,2);
double rectangle;
rectangle = a*b;
printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapezium,square,rectangle);
}


