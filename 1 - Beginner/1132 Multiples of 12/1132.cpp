#include <stdio.h>

int main(){
	
	int x,y;
	
	
	scanf("%d",&x);
	scanf("%d",&y);
	int i,tmp;
	int cont=0;
	if(y<x){
     tmp = x;
     x= y;
     y= tmp;
	}
	for(i=x;i<=y;i++){
		
		if(i%13 != 0){
			cont+= i;
		}

	}
	printf("%d\n",cont);
	
}
