#include <stdio.h>

int main(){
	int x,y;
	float cardapio[] = {4.00, 4.50, 5.00, 2.00, 1.50};
	scanf("%d %d",&x,&y);
	printf("Total: R$ %.2f\n", cardapio[x-1]*y);

}
