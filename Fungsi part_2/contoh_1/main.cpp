/*
	Program menghitung volume benda geometris
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PHI 3.14

// deklarasi
void judul();
void menu();
void volTabung();
void volKotak();
void volBalok();

main(){
	judul();
	menu();
}

void judul(){
	printf("Menghitung Volume benda Geometris\n");
	printf("Programers : fjr\n");
	printf("Created 23-07-2002\n\n");
}

void menu(){
	int pilih;

	printf("MENU\n");
	printf("1. Menghitung Volume Tabung\n");
	printf("2. Menghitung Volume Kotak\n");
	printf("3. Menghitung Volume Balok\n");
	printf("Pilih nomor yg di inginkan  : ");
	scanf("%d", &pilih);
	fflush(stdin);

	switch(pilih){
		case 1:
			printf("Volume Tabung tersebut = %0.2lf kubik\n", volTabung());
			break;
		case 2:
			printf("Volume Kotak tersebut = %0.2lf kubik\n", volKotak());
			break;
		case 3:
			printf("Volume Balok tersebut = %0.2lf kubik\n", volBalok());
			break;
		default:
			printf("Nomor pilihan tidak ada..!!\n");

	}
}

double volTabung(){
	double vol, jari, tinggi;

	printf("Menghitung Volume Tabung\n");
	printf("Ketikkan nilai jari-jari : ");
	scanf("%lf", &jari);
	fflush(stdin);
	printf("Ketikkan nilai tinggi    : ");
	scanf("%lf", &tinggi);
	fflush(stdin);

	vol = PHI * pow(jari, 2) * tinggi;

	return vol;
}

double volKotak(){
	double vol, rusuk;

	printf("Menghitung Volume Kotak\n");
	printf("Ketikkan nilai rusuk : ");
	scanf("%lf", &rusuk);
	fflush(stdin);

	vol = pow(rusuk, 3);

	return vol;
}

double volBalok(){
	double vol, tinggi, panjang, lebar;

	printf("Menghitung volume Balok\n");
	printf("Ketikkan nilai panjang : ");
	scanf("%lf", &panjang);
	fflush(stdin);
	printf("Ketikkan nilai tinggi  : ");
	scanf("%lf", &tinggi);
	fflush(stdin);
	printf("Ketikkan nilai lebar   : ");
	scanf("%lf", &lebar);
	fflush(stdin);

	vol = panjang * lebar * tinggi;

	return vol; 
}