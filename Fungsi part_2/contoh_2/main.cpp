/*
	Program mengelola nilai algoritma
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

// deklarasi fungsi
void judul();
void bacaData();
void hitungNilai();
double hitungAkhir(double a, double b, double c);
char konversi(double k);
void info();

// deklarasi array
double mid[N];
double uas[N];
double tugas[N];
double akhir[N];
char huruf[N];

main()
{
	judul();
	bacaData();
	hitungNilai();
	info();	
}

// deklarasi fungsi
void judul(){
	printf("Menghitung Volume benda Geometris\n");
	printf("Programers : fjr\n");
	printf("Created 23-07-2002\n\n");
}

void bacaData(){
	int i;

	printf("\nMahasiswa ke-%d : \n", (i+1));
	printf("Nilai MID    : ", (i+1));
	scanf("%lf", &mid);
	fflush(stdin);
	printf("Nilai UAS    : ", (i+1));
	scanf("%lf", &uas);
	fflush(stdin);
	printf("Nilai TUGAS  : ", (i+1));
	scanf("%lf", &tugas);
	fflush(stdin);
}

void hitungNilai(){
	int i;

	printf("\nMenghitung Nilai\n");
	for(i=0; i<N; i++){
		akhir[i] = hitungAkhir(mid[i], uas[i], tugas[i]);

		huruf[i] = konversi(akhir[i]);
	}
}

double hitungAkhir(double a, double b, double c){
	return(a * 0.3 + b * 0.3 + c * 0.4);
}

char konversi(double k){
	if((k >= 81.0) && (k <= 100.0))
		return 'A';
	else if((k >= 66.0) && (k <= 81.0))
		return 'B';
	else if((k >= 55.0) && (k <= 66.0))
		return 'C';
	else if((k >= 45.0) && (k <= 55.0))
		return 'D';
	else 
		return 'E';
}

void info(){
	int i;

	printf("\nMenampilkan Nilai\n");
	for(i=0; i<N; i++){
		printf("Nilai Mahasiswa ke-%d:\n", (i+1));
		printf("	MID      : %0.2lf\n", mid[i]);
		printf("	UAS      : %0.2lf\n", uas[i]);
		printf("	TUGAS    : %0.2lf\n", tugas[i]);
		printf("	N AKHIR  : %0.2lf\n", akhir[i]);
		printf("	N HURUF  : %c\n", huruf[i]);
	}

}