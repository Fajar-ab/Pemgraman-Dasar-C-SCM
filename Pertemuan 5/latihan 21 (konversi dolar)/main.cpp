#include <stdio.h>
#include <conio.h>

int main(){
	int dolar, rp;

	printf("masukkan jumlah nilai dolar = ");
	scanf("%d", &dolar);
	printf("Mengkonversi...\n");

	rp = dolar * 8900;
	printf(" Jadi $ %d = Rp. %d \n", dolar, rp);

	return 0;
}