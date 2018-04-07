#include <stdio.h>
#include <math.h>
int main(void){
float distance;
float x1,y1,x2,y2;
scanf("%f %f",&x1,&y1);
scanf("%f %f",&x2,&y2);
distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
printf("%.4f",distance);
}


