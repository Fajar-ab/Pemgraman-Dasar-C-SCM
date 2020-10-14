#include <stdio.h>

int main(){

	int kodeBulan;

	printf("Masukkan kode bulan (1..12) : ");
	scanf("%d", &kodeBulan);

	switch(kodeBulan){
		case 1:
			printf("Januari\n");
			break;
		case 2:
			printf("Pebruari\n");
			break;
		case 3:
			printf("Maret\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("Mei\n");
			break;
		case 6:
			printf("Juni\n");
			break;
		case 7:
			printf("Juli\n");
			break;
		case 8:
			printf("Agustus\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("Oktober\n");
			break;
		case 11:
			printf("Nopember\n");
			break;
		case 12:
			printf("Desember\n");
			break;
		default:
			printf("kode bulan yang dimasukkan salah\n");
	}
	
	return 0;
}