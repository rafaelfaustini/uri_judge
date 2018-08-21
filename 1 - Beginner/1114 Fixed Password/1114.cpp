#include <stdio.h>

int main(){
	int valid =0;
	int password;
	while(valid ==0){
		scanf("%d",&password);
		if(password == 2002){
			printf("Acesso Permitido\n");
			valid = 1;
			break;
		}
		printf("Senha Invalida\n");
	}
	
}
