#include <stdio.h>
#include <math.h>
int main(void){
double distance;
double x1,y1,x2,y2;
scanf("%lf %lf",&x1,&y1);
scanf("%lf %lf",&x2,&y2);
distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
printf("%.4f\n",distance);
}


