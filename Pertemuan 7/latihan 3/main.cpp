#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// konstanta
#define MID 0.3
#define UAS 0.3
#define TUGAS 0.4

int main(){

	char nama[30], huruf, yudisium[15];
	double mid, uas, tugas, akhir;

	printf("Program Pengolahan Nilai\n");
	printf("========================\n");

	printf("Ketikkan nama mahasiswa : ");
	gets(nama);
	fflush(stdin);

	printf("Berapa nilai MID %s   : ", nama);
	scanf("%lf", &mid);
	fflush(stdin);

	printf("Berapa nilai UAS %s   : ", nama);
	scanf("%lf", &uas);
	fflush(stdin);

	printf("Berapa nilai TUGAS %s : ", nama);
	scanf("%lf", &tugas);
	fflush(stdin);

	// menghitung nilai akhir
	akhir = mid * MID + uas * UAS + tugas * TUGAS;

	if((akhir >= 81.0) && (akhir <= 100.0))
		huruf = 'A';
	else if((akhir >= 66.0) && (akhir < 81.0))
		huruf = 'B';
	else if((akhir >= 56.0) && (akhir < 66.0))
		huruf = 'C';
	else if((akhir >= 46.0) && (akhir < 56.0))
		huruf = 'B';
	else huruf ='E';

	// menentukan yudisium
	switch(huruf){
		case 'A':
			strcpy(yudisium, "Baik Sekali");
			break;
		case 'B':
			strcpy(yudisium, "Baik");
			break;
		case 'C':
			strcpy(yudisium, "Cukup");
			break;
		case 'D':
			strcpy(yudisium, "Kurang");
			break;
		case 'E':
			strcpy(yudisium, "Gagal");
			break;
		default:
			printf("Tidak ada YUDISIUM");
	}
	printf("-----------------------\n");

	// menmapikkan outputnya
	printf("Nama           : %s\n", nama);
	printf("Nilai MID      : %0.2lf\n", mid);
	printf("Nilai UAS      : %0.2lf\n", uas);
	printf("Nilai TUGAS    : %0.2lf\n", tugas);
	printf("Nilai AKHIR    : %0.2lf\n", mid);
	printf("Nilai HURUF    : %c\n", huruf);
	printf("Nilai YUDISIUM : %s\n", yudisium);

	return 0;
}