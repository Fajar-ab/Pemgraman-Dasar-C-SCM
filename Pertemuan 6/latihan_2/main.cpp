#include <stdio.h>
#include <conio.h>

int main(){

	// mengkonversikan bilangan bulat positif dalam rentan 1 - 10

	int bilangan;

	printf("Masukkan bilangan rentang 1 - 10 : ");
	scanf("%d", &bilangan);
	printf(" Bialangan Romawi...");

	if(bilangan == 1){
		printf(" I\n");
	}else if(bilangan == 2){
		printf(" II\n");
	}else if(bilangan == 3){
		printf(" III\n");
	}else if(bilangan == 4){
		printf(" IV\n");
	}else if(bilangan == 5){
		printf(" V\n");
	}else if(bilangan == 6){
		printf(" VI\n");
	}else if(bilangan == 7){
		printf(" VII\n");
	}else if(bilangan == 8){
		printf(" VIII\n");
	}else if(bilangan == 9){
		printf(" IX\n");
	}else if(bilangan == 10){
		printf(" X\n");
	}else {
		printf(" Tidak ada \n\nMasukkan bilangan 1 sampai 10 saja...\n");
	}

	return 0;
}