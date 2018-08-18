#include <stdio.h>
  int primo(int n) {
  	int aux;
 if(n==0 || n==1) return 0;
    for(aux = 2; aux*aux <= n; aux++)
        if(n % aux == 0) return 0;
    return 1;
  }

int super_prime(int n) {
	while(n>0){
		if(!primo(n % 10)) return 0;
		n/= 10;
	}
	return 1;
}

int main(void) {
	int n;
	while(scanf("%d", &n)!=EOF){


  if(primo(n)){

   if(super_prime(n)){
    printf("Super\n");
   }
   
   else{
    printf("Primo\n");
   }
    }

  else{
   printf("Nada\n");
  }

}

}
