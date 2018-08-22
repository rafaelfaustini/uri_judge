#include <stdio.h>

int main(){

int n[1000],t,i;

scanf("%d",&t);




for(i=0;i<t;i++){
	if(i==0){
		n[0] = 0;
		continue;
	}
	n[i] = n[i-1]+1;
}

for(i=0;i<1000;i++){
	
	if(i<t){
		printf("N[%d] = %d\n",i,n[i]);
		continue;	
	}
	
	n[i] = n[i%t];
	printf("N[%d] = %d\n",i,n[i]);

}

	
}
