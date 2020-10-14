
// menggunakan if-else

#include <stdio.h>

int main(){

	int bulan;

	printf("Masukkan kode bulan (1..12): ");
	scanf("%d", &bulan);

	if(bulan >= 1 && bulan <= 3){
		printf("Tanaman yang cocok adalah tomat/cabai");
	}else if(bulan >= 4 && bulan <= 6){
		printf("Tanaman yang cocok adalah jagung");
	}else if(bulan >= 7 && bulan <= 9){
		printf("Tanaman yang cocok adalah wortel/kacang");
	}else if(bulan >= 10 && bulan <= 12){
		printf("Tanaman yang cocok adalah kubis");
	}else {
		printf("Mungkin hari sudah malam petani perlu istirahat");
	}

	return 0;
}