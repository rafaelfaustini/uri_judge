#include <stdio.h>

int use(int bank[], int value){
	int i;
	for(i=0;i<7;i++){
		//printf("Valor de i %d | elemento: %d\n",i,bank[i]);
		if(value >= bank[i]){
			return value-bank[i];
		}
	}
	return value;
}

void print_bank(int used[],int bank[]){
int i;
for(i=0;i<7;i++){
	printf("%d nota(s) de R$ %d,00\n",used[i],bank[i]);
}	
}

void banknotes(int value){
	int bank[] = {100,50,20,10,5,2,1};
	int used[] = {0,0,0,0,0,0,0}; // 7 notas
	
printf("%d\n",value);

while(value != 0){
	switch(value-use(bank,value)){
		
		case 100:
			used[0]++;
			value = use(bank,value);
			break;
		case 50:
			used[1]++;
			value = use(bank,value);
			break;
		case 20:
			used[2]++;
			value = use(bank,value);
			break;
		case 10:
			used[3]++;
			value = use(bank,value);
			break;
		case 5:
			used[4]++;
			value = use(bank,value);
			break;
		case 2:
			used[5]++;
			value = use(bank,value);
			break;
		case 1:
			used[6]++;	
			value = use(bank,value);
			break;
			
	}
		

}

print_bank(used,bank);
	
	
}

int main(){
int num;
scanf("%d",&num);
banknotes(num);
	
}
