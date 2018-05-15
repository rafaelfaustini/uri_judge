#include <stdio.h>
int main(void){
char name[50];
double salary;
double total;
scanf("%s", &name);
scanf("%lf", &salary);
scanf("%lf", &total);
total *= 0.15;
printf("TOTAL = R$ %.2f\n",salary+total);
}


