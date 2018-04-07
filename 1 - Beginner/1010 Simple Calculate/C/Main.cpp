#include <stdio.h>

int main(void){
int a1,b1,a2,b2; // a => ID | b => Quantity  
float c1,c2,total; // Price
scanf("%d %d %f",&a1,&b1,&c1);
scanf("%d %d %f",&a2,&b2,&c2);
total = b1*c1;
total+= b2*c2;
printf("VALOR A PAGAR R$ %.2f",total);
}


