#include <stdio.h>
#include <math.h>


int main(){
	
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float delta = (b*b)-4*a*c;
	
	if(delta ==0 || a==0){
	printf("Impossível de calcular\n");	
	return 0;
}

	float x1= ((b*-1)+ sqrt(delta))/(2*a);
	float x2= ((b*-1)- sqrt(delta))/(2*a);
	
	
	printf("R1= %.5f\n",x1);
	printf("R2= %.5f\n",x2);			

	
	
}
