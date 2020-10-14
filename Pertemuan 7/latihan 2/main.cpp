#include <stdio.h>

int main(){

	int bulan;

	printf("Masukkan code bulan (1..12) : ");
	scanf("%d", &bulan);

	switch(bulan){
		case 1:
			printf("Tanaman yang cocok adalah tomat/cabai\n");
			break;
		case 2:
			printf("Tanaman yang cocok adalah tomat/cabai\n");
			break;
		case 3:
			printf("Tanaman yang cocok adalah tomat/cabai\n");
			break;
		case 4:
			printf("Tanaman yang cocok adalah jagung\n");
			break;
		case 5:
			printf("Tanaman yang cocok adalah jagung\n");
			break;
		case 6:
			printf("Tanaman yang cocok adalah jagung\n");
			break;
		case 7:
			printf("Tanaman yang cocok adalah wortel/kacang\n");
			break;
		case 8:
			printf("Tanaman yang cocok adalah wortel/kacang\n");
			break;
		case 9:
			printf("Tanaman yang cocok adalah wortel/kacang\n");
			break;
		case 10:
			printf("Tanaman yang cocok adalah kubis\n");
			break;
		case 11:
			printf("Tanaman yang cocok adalah kubis\n");
			break;
		case 12:
			printf("Tanaman yang cocok adalah kubis\n");
			break;
		default:
			printf("Mungkin hari sudah malam petani perlu istirahat\n");
	}

	return 0;
}