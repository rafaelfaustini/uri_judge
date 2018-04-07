#include <stdio.h>
#include <string.h>
  int primo(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
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
  if (primo(n) == 1) {
    for (int i = 0; i < strlen(temp); i++) {
      int number = temp[i] - '0';
      if (primo(number) == 1)
        count++;

    }
    if (count == strlen(temp))
      return 1;
  }
  return 0;
}

int main(void) {
	int n;
	scanf("%d",&n);
	if(primo(n)==0){
		printf("Nada");
		return 0;
	}
	if(super_prime(n)==0){
		printf("Primo");
		return 0;
	}
	printf("Super");
	return 0;

}
