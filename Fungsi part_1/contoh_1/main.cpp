/*
	program mengelola nilai algoritma
	tampa passing parameter
*/
#include <stdio.h>
#include <stdlib.h>

#define N 5

// deklarasi
void judul();
void bacaData();
void hitugNilai();
void hitungAkhir(int i, double a, double b, double e);
void konversi(int i, double k);
void info();

// deklarasi array
double mid[N];
double uas[N];
double tugas[N];
double akhir[N];
char huruf[N];

main(){
	judul();
	bacaData();
	hitugNilai();
	info();
}

// defenisi fungsi

void judul(){
	printf("Program Mengolah Nilai algoritama\n");
	printf("Programers : fanz\n");
	printf("Nama pacar : \n");
	printf("Created 1-1-2001\n\n");
}

void bacaData(){
	int i;

	printf("\nMengentri Nilai\n");
	for(i=0; i<N; i++){
		printf("Mahasiswa ke-%d\n", i+1);
		printf("Nilai MID   : ", i+1);
		scanf("%lf", &mid[i]);
		fflush(stdin);
		printf("Nilai UAS   : ", i+1);
		scanf("%lf", &uas[i]);
		fflush(stdin);
		printf("Nilai TUGAS : ", i+1);
		scanf("%lf", &tugas[i]);
		fflush(stdin);
	}
}

void hitugNilai(){
	int i;

	printf("\nMenghitung Nilai\n");
	for(i=0; i<N; i++){
		hitungAkhir(i, mid[i] ,uas[i], tugas[i]);

		konversi(i, akhir[i]);
	}
}

void hitungAkhir(int i, double a, double b, double e){
	akhir[i] = a * 0.3 + b * 0.3 * e + 0.4;
}

void konversi(int i, double k){
	if((k >= 81.0) && (k <= 100.0))
		huruf[i] = 'A';
	else if((k >= 66.0) && (k < 81.0))
		huruf[i] = 'B';
	else if((k >= 55.0) && (k < 66.0))
		huruf[i] = 'C';
	else if((k >= 45.5) && (k < 55.0))
		huruf[i] = 'D';
	else 
		huruf[i] = 'E';
}

void info(){
	int i;

	printf("\nMenampilkan Nilai\n");
	for(i=0; i<N; i++){
		printf("Nilai Mahasiswa Ke-%d\n", i+1);
		printf("    MID     : %0.2lf\n", mid[i]);
		printf("    UAS     : %0.2lf\n", uas[i]);
		printf("    TUGAS   : %0.2lf\n", tugas[i]);
		printf("    N AKHIR : %0.2lf\n", akhir[i]);
		printf("    N HURUF : %c\n", huruf[i]);
	}
}