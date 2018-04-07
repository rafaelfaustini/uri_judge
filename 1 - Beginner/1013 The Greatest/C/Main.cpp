#include <stdio.h>
int abs(int number){
	if(number < 0){
		return number*-1;
	}
	return number;
}
int MaiorAB(int a, int b){
	return (a+b+abs(a-b))/2;
}
int main(void){
	int a,b,c;
scanf("%d %d %d",&a,&b,&c);
printf("%d eh o maior", MaiorAB(MaiorAB(a,b),c));
}


