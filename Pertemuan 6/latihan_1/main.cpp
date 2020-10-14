#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

	char menu;
	int s, L, K, D;

	printf("---------------- Menu ---------------\n");
	printf("1. Menghitung luas persegi\n");
	printf("2. Menghitung Keliling persegi\n");
	printf("3. Menghitung panjang diagonal persegi\n");
	printf("4. keluar dari perogram\n");

	printf("\nPilih Menu : ");
	scanf("%c", &menu);


	switch(menu){
		case '1':
			printf("Perogram menghitung Luas Persegi\n\n");

			printf("Masukkan sisi persegi : ");
			scanf("%d", &s);

			L = s * s;
			printf("Luas persegi = %d \n", L);
			break;
		case '2':
			printf("Perogram menghirung Keliling Persegi\n\n");

			printf("masukan sisi persegi : ");
			scanf("%d", &s);

			K = s * s * s * s;
			printf("Keliling Persegi = %d \n", K);
			break;
		case '3':
			printf("Perogram Menghitung Panjang Diagonal Persegi\n");

			printf("Masukkan sisi persegi : ");
			scanf("%d", &s);

			D = sqrt((s * s) + (s * s));
			printf("Diagonal persegi = %d \n", D);
			break;
		case '4':
			printf("\nKeluar dari perogram\n");
			break;
		default:
			printf("\nMenu yang anda ketik tidak benar ...\n");
	}

	return 0;
}