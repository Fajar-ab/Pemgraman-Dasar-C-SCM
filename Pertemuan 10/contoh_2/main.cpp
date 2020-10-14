/*
	program array
	program untuk membaca array, mencetak array dan menghitung nilai rata-rata
*/

#include <stdio.h>
#include <conio.h>
#define Nmaks 100 // ukuran maksimum array
typedef int arrayInt[Nmaks]; // array sebagai type bentukan dengan kostanta

// prototype
void bacaArray(arrayInt A, int n);
void tulisArray(arrayInt A, int n);
void hitungArray(arrayInt A, int n, float *u);

main(){
	arrayInt A;
	int k;
	int n;
	float u;

	printf("Jaumlah data array: ");
	scanf("%d", &n);

	printf("Baca data: ");
	bacaArray(A, n);

	printf("Tulis data: ");
	bacaArray(A, n);

	hitungArray(A, n, &u);
	printf("Rata-rata data = %.2f\n", u);
}

void bacaArray(arrayInt A, int n){
	int i; // pencatat indeks larik

	for(i=0; i<n; i++){
		printf("\nNilai A[%d] : ", i);
		scanf("%d", &A[i]);
	}
}

void hitungArray(arrayInt A, int n, float *u){
	int i;
	float jumlah;

	i = 1;
	jumlah = 0;
	for (i=0; i<n; i++)
		jumlah = jumlah + A[i];
		*u = jumlah/n;

	getch();	
}
	
