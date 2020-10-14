#include <stdio.h>

int main(){
	// menghitung rata-rata dari sejumlah bilangan bulat 
	int x, banyak, jumlah;
	float relata;

	printf("Masukkan banyak bilangan : ");
	scanf("%d", &banyak);

	jumlah = 0;

	for(int i = 0; i < banyak; i++){

		printf("Masukkan bilangan ke-%d : ", i+1);
		scanf("%d", &x);

		jumlah = jumlah + x;
	}
	relata = jumlah / banyak;

	printf("rata-rata = %.2f ", relata);

	return 0;
}