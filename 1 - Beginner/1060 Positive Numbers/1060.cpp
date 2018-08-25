#include <stdio.h>

int main(){

float tmp;
int i;
int count = 0;

for(i=0;i<6;i++){
	scanf("%f",&tmp);
	if(tmp >= 0){
		count++;
	}
}
printf("%d valores positivos\n",count);

	
}
