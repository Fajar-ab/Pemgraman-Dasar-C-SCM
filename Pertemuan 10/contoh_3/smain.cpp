/*
	program array denga struct
	program untuk membuka array,
	mencetak array den menghitung
	nilai rata-rata menggunkan struct
	struch = tipe data bentukan
*/

#include <stdio.h>
#include <conio.h>
#define Nmaks 1000 // ukuran maksimum array

struct nilai{
	char nama[100];
	float mat;
	float b_ind;
	float b_ing;
	float relata;
};

typedef struct nilai un[Nmaks];
// array sebagai type bentukan dengan struct

void bacaNilai(un A, int n);
void tulisNilai(un A, int n);
void totalNilai(un A, int n);

main(){
	un A;
	int i, n;
	float u;

	printf("Jumalah data Penilaian : ");
	scanf("%d", &n);

	bacaNilai(A, n);
	tulisNilai(A, n);
	totalNilai(A, n);
}

void bacaNilai(un A, int n){
	int i;

	for(i=0; i<n; i++){
		printf("Nama  : ");
		scanf("%s", &A[i].nama);
		printf("Nilai Matematika      : ");
		scanf("%f", &A[i].mat);
		printf("Nilai Bahasa Indonesia: ");
		scanf("%f", &A[i].b_ind);
		printf("Nilai Bahasa Inggris  : ");
		scanf("%f", &A[i].b_ind);
	
	}
}

void tulisNilai(un A, int n){
	int i;

	for(i=0; i<n; i++){
		printf("Nama  : %s\n", &A[i].nama);
		printf("Nilai Matematika      : %.2f", &A[i].mat);
		printf("Nilai Bahasa Indonesia: %.2f", &A[i].b_ind);
		printf("Nilai Bahasa Inggris  : %.2f", &A[i].b_ind);
	}
}

void totalNilai(un A, int n){
/*  tidak diperlukan lagi variabel 
	keluaran karena relata sudah tercakup pada struct
*/	
	int i;

	for(i=0; i<n; i++){
		A[i].relata = (A[i].relata + A[i].b_ing + A[i].b_ind) / 3;
		printf("Nama : %s, A[i].nama");
		printf("Nilai Rata-rata : %.2f\n", A[i].relata);
	}

}