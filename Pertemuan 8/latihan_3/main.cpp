#include <stdio.h>
#include <conio.h>

int main(){

	int sisa, penarikan;
	int saldo = 100000;

	printf("jumlah saldo : %d\n", saldo);
	printf("jumlah saldo yang akan ditarik : ");
	scanf("%d", &penarikan);

	sisa = saldo - penarikan;

	if (sisa >= 10000)
	{
		printf("sisa saldo anda : %d", sisa);
	}else
	


	return 0;
}