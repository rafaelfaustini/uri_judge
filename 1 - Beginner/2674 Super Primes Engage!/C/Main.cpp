#include <stdio.h>
#include <string.h>
#include <stdlib.h>


  int primo(int n) {
    int count = 0;
	int i;
    for (i = 1; i <= n; i++) {
      if (n % i == 0)
        count++;
    }
    if (count == 2)
      return 1;
    return 0;
  }

int super_prime(int n) {
  int count = 0;
  char temp[100000];
  sprintf(temp, "%d", n);
  int i;
  if (primo(n) == 1) {
    for (i = 0; i < strlen(temp); i++) {
      int number = temp[i] - '0';
      if (primo(number) == 1)
        count++;

    }
    if (count == strlen(temp))
      return 1;
  }
  return 0;
}

int count(){
	static int i=0;
	i++;
	return i;
}
void inicia(){
	int n;	
	if(primo(n)==0){
		printf("Nada\n");
	}
	if(super_prime(n)==0){
		printf("Primo\n");
	}
	printf("Super\n");
}
int main(void) {
	int n;
	int a=1;
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
	while(count()!=10){	
	scanf("%d",&n);
	inicia;
}
	return 0;

}
