#include <stdio.h>

int main(){

	int kodeBulan;

	printf("Masukkan kode bulan (1..12) : ");
	scanf("%d", &kodeBulan);

	if(kodeBulan == 2){
		printf("Jumlah hari 28 atau 29\n");
	}else if(kodeBulan==1 || kodeBulan==3 || kodeBulan==5 || kodeBulan==7 || kodeBulan==8 || kodeBulan==10 || kodeBulan==12){
		printf("Jumlah hari 28 atau 29\n");
	}else if(kodeBulan==4 || kodeBulan==6 || kodeBulan==9 || kodeBulan==11){
		printf("Jumlah hari 30\n");
	}else{
		printf("Kode bulan yang anda masukkan salah\n");
	}

	return 0;
}