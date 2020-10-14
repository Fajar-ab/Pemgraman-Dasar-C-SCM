/*
	menggunakan passing parameter
	Menghitung volume benda geometris
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PHI 3.14

// deklarasi
void judul();
void menu();
void volTabung(double j, double t);
void volKotak(double r);
void volBalok(double p, double l, double t);

main(){
	judul();
	menu();
}

void judul(){
	printf("Program Menghitung Benda Geomtri\n");
	printf("Programers : fanz\n");
	printf("Nama Pacar : \n");
	printf("Created  1-1-2001\n\n");
}

void menu(){
	int pilih;
	double a, b, c;

	printf("MENU\n");
	printf("1. Menghitung volume tabung\n");
	printf("2. Menghitung volume kotak\n");
	printf("3. Menghitung volume balok\n");
	printf("Pilih nomor yang diinginkan : ");
	scanf("%d", &pilih);
	fflush(stdin);

	switch(pilih){
		case 1:
			printf("Menghitung Volume Tabung \n");
			printf("Ketikkan nilai jari-jari : ");
			scanf("%lf", &a);
			fflush(stdin);
			printf("Ketikkan nilai tinggi    : ");
			scanf("%lf", &b);
			fflush(stdin);
			volTabung(a,b);
			break;
		case 2:
			printf("Menghitung Volume Kotak\n");
			printf("Ketikkan nilai ruruk   : ");
			scanf("%lf", &a);
			fflush(stdin);
			volKotak(a);
			break;
		case 3:
			printf("Menghitung Volume Balok\n");
			printf("Ketikkan nilai panjang  : ");
			scanf("%lf", &a);
			fflush(stdin);
			printf("Ketikkan nilai lebar    : ");
			scanf("%lf", &b);
			fflush(stdin);
			printf("Ketikkan nilai tinggi   : ");
			scanf("%lf", &c);
			fflush(stdin);
			volBalok(a,b,c);
			break;
		default:
			printf("Nomor yang anda pilih tidak ada..!!\n");
	}
}

void volTabung(double j, double t){
	double vol;
	vol = PHI * pow(j, 2) * t;
	printf("Volume Tabung tersebut %0.2lf kubik\n", vol);
}

void volKotak(double r){
	double vol;
	vol = pow(r, 3);
	printf("Volume Kotak tersebut %0.2lf kubik\n", vol);
}

void volBalok(double p, double l, double t){
	double vol;
	vol = p * l * t;
	printf("Volume Balok tersebut %0.2lf kubik\n", vol);
}
